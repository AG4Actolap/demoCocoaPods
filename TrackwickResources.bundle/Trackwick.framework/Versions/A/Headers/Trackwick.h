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

+ (id)sharedInstance;

- (void)startTracking;

+ (Trackwick *)initialFramework:(NSString *)sdkID andTrackerID:(NSString *)trackerID andDelegate:(id)delegate;

@end
