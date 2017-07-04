//
//  TRWMotionDetector.h
//  School App
//
//  Created by actolap on 26/06/17.
//  Copyright © 2017 Actolap Solutions India Pvt. Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TRWLocationManager.h"
#import <CoreMotion/CoreMotion.h>

#ifndef TRWMotionDetector_h
#define TRWMotionDetector_h


#endif /* TRWMotionDetector_h */

@class TRWMotionDetector;
typedef enum {
    MotionTypeNotMoving = 1,
    MotionTypeWalking,
    MotionTypeRunning,
    MotionTypeAutomotive
} TRWMotionType;

@protocol TRWMotionDetectorDelegate <NSObject>

@optional
- (void)motionDetector:(TRWMotionDetector *)motionDetector motionTypeChanged:(TRWMotionType) motionType;
- (void)motionDetector:(TRWMotionDetector *)motionDetector locationChanged:(CLLocation *) location;
- (void)motionDetector:(TRWMotionDetector *)motionDetector accelerationChanged:(CMAcceleration) acceleration;
- (void)motionDetector:(TRWMotionDetector *)motionDetector locationWasPaused:(BOOL) changed;

@end

@interface TRWMotionDetector : NSObject

#pragma mark - Singleton
+ (TRWMotionDetector *)sharedInstance;

#pragma mark - Properties
@property (weak, nonatomic) id<TRWMotionDetectorDelegate> delegate DEPRECATED_MSG_ATTRIBUTE("Use blocks instead");

@property (copy) void (^motionTypeChangedBlock) (TRWMotionType motionType);
@property (copy) void (^locationChangedBlock) (CLLocation *location);
@property (copy) void (^accelerationChangedBlock) (CMAcceleration acceleration);
@property (copy) void (^locationWasPausedBlock) (BOOL changed);

@property (nonatomic, readonly) TRWMotionType motionType;
@property (nonatomic, readonly) double currentSpeed;
@property (nonatomic, readonly) CMAcceleration acceleration;
@property (nonatomic, readonly) BOOL isShaking;

#pragma mark - Methods
- (void)startDetection;
- (void)stopDetection;

#pragma mark - Customization Methods

/**
 * Set this parameter to YES if you want to use M7 chip to detect more exact motion type. By default is NO.
 * Set this parameter before calling startDetection method.
 * Available only on devices that have M7 chip. At this time only the iPhone 5S, iPhone 6/6plus, the iPad Air and iPad mini with retina display have the M7 coprocessor.
 */
@property (nonatomic) BOOL useM7IfAvailable NS_AVAILABLE_IOS(7_0);


/**
 *@param speed The minimum speed value less than which will be considered as not moving state
 */
- (void)setMinimumSpeed:(CGFloat)speed;

/**
 *@param speed The maximum speed value more than which will be considered as running state
 */
- (void)setMaximumWalkingSpeed:(CGFloat)speed;

/**
 *@param speed The maximum speed value more than which will be considered as automotive state
 */
- (void) setMaximumRunningSpeed:(CGFloat)speed;

/**
 *@param acceleration The minimum acceleration value less than which will be considered as non shaking state
 */
- (void)setMinimumRunningAcceleration:(CGFloat)acceleration;

@end
