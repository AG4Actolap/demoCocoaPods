//
//  LocationData.h
//  Trackwick SDK
//
//  Created by actolap on 28/06/17.
//  Copyright © 2017 Actolap Solutions India Pvt. Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>

#ifndef LocationData_h
#define LocationData_h


#endif /* LocationData_h */

@interface LocationData : NSObject {
    NSString *sdk_Id;
    NSString *tracker_Id;
    NSString *timeStamp;
    double bearing;
    double lat;
    double lng;
    NSString *gpsSource;
    double battery;
    double networkSignal;
    BOOL charging;
    BOOL gps;
    BOOL isNetworkReachable;
    NSString *extra;
}

@property (nonatomic, retain) NSString *sdk_Id;
@property (nonatomic, retain) NSString *tracker_Id;
@property (nonatomic, retain) NSString *timeStamp;
@property (nonatomic) double bearing;
@property (nonatomic) double lat;
@property (nonatomic) double lng;
@property (nonatomic, retain) NSString *gpsSource;
@property (nonatomic) double battery;
@property (nonatomic) double networkSignal;
@property (nonatomic) BOOL charging;
@property (nonatomic) BOOL gps;
@property (nonatomic) BOOL isNetworkReachable;
@property (nonatomic, retain) NSString *extra;

-(NSDictionary *)dictionary;

@end
