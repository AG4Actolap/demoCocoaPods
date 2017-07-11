//
//  Trackwick.h
//  Trackwick
//
//  Created by actolap on 03/07/17.
//  Copyright © 2017 Actolap Solutions India Pvt. Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>

@protocol TrackwickProtocol <NSObject>

@optional
-(void)sdkRegistrationNofitier:(BOOL)isRegisteredSuccessfully;

@end

@interface Trackwick : NSObject 

@property (nonatomic) CLLocationManager *anotherLocationManager;

// This is a shared instance of Trackwick class.
+ (id)sharedInstance;

// Use this method for initialization of TrackerDatabase and some other parameters for performing any other tracking task
- (void)initializeTrackerData;

// Use this method for Registering your Tracker with SDK by just providing SDK_ID and Tracker_ID and a delegate reference for callbacks
+ (Trackwick *)initialFramework:(NSString *)sdkID andTrackerID:(NSString *)trackerID andDelegate:(id)delegate;

// Use this method to start Motion Tracking and GPS Activities
- (void)startTracking;

// Use this method to stop Motion Tracking and GPS Activities
- (void)stopTracking;

// Use this method to deattach the attached Tracker
- (void)deattachTracker;

// This method checks for SDK Registration and returns a bool value YES for Registered SDK and NO for SDK not Registered.
- (BOOL)isSDKRegistered;

// Use this method for checking tracking started by user or not
- (BOOL)isTrackingStarted;

// Use this method to update status of Registration of SDK in database
- (void)updateSDKTrackingStatus:(BOOL)status;

// Use this method to update status of Tracking state in database
- (void)updateSDKRegistrationStatus:(BOOL)status;

@end
