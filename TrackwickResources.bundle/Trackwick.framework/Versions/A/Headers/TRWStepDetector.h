//
//  TRWStepDetector.h
//  School App
//
//  Created by actolap on 26/06/17.
//  Copyright © 2017 Actolap Solutions India Pvt. Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>

#ifndef TRWStepDetector_h
#define TRWStepDetector_h


#endif /* TRWStepDetector_h */

@interface TRWStepDetector : NSObject

+ (instancetype)sharedInstance;

/**
 * Start accelerometer updates.
 * @param callback Will be called every time when new step is detected
 */
- (void)startDetectionWithUpdateBlock:(void(^)(NSError *error))callback;

/**
 * Stop motion manager accelerometer updates
 */
- (void)stopDetection;

@end
