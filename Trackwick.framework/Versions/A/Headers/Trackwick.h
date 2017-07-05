//
//  Trackwick.h
//  Trackwick
//
//  Created by actolap on 03/07/17.
//  Copyright © 2017 Actolap Solutions India Pvt. Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>


@protocol TrackwickProtocol <NSObject>

@optional
-(void)sdkRegistrationNofitier:(BOOL)isRegisteredSuccessfully;

@end

@interface Trackwick : NSObject 

// This is a shared instance of Trackwick class.
+ (id)sharedInstance;

// Use this method to start Motion Tracking and GPS Activities
- (void)startTracking;

// Use this method to stop Motion Tracking and GPS Activities
- (void)stopTracking;

// Use this method for Registering your Tracker with SDK by just providing SDK_ID and Tracker_ID and a delegate reference for callbacks
+ (Trackwick *)initialFramework:(NSString *)sdkID andTrackerID:(NSString *)trackerID andDelegate:(id)delegate;

@end
