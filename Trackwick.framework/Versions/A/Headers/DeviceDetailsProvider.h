//
//  DeviceDetailsProvider.h
//  Trackwick SDK
//
//  Created by actolap on 29/06/17.
//  Copyright © 2017 Actolap Solutions India Pvt. Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <CoreLocation/CoreLocation.h>
#import "DeviceDetailsProvider.h"
#import "TRWDeviceVersion.h"
#import <CoreLocation/CoreLocation.h>
#import "AFNetworking.h"

#ifndef DeviceDetailsProvider_h
#define DeviceDetailsProvider_h

#define degreesToRadians(x) (M_PI * x / 180.0)
#define radiansToDegrees(x) (x * 180.0 / M_PI)


#endif /* DeviceDetailsProvider_h */

@interface DeviceDetailsProvider : NSObject

+ (NSString *)getDeivceMaker;
+ (NSString *)getDeviceModel;
+ (NSString *)getDeviceUUID;
+ (NSString *)getDataVersion;
+ (NSString *)getDevicePlatform;
+ (NSNumber *)getBatteryLevel;
+ (NSNumber *)isBatteryCharging;
+ (NSString *)getCurrentTimeStamp;
+ (NSNumber *)getNetworkSignal;
+ (NSNumber *)isLocationServiceEnabled;
+ (float)getHeadingForDirectionFromCoordinate:(CLLocationCoordinate2D)fromLoc toCoordinate:(CLLocationCoordinate2D)toLoc;
+ (void)startNetworkReachableListening;
+ (NSString *)getGPSSource;
+ (NSNumber *)isNetwork;
//extern NSNumber *isNetworkReachable;

@end
