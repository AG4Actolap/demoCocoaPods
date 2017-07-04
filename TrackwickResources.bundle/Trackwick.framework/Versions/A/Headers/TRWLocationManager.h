//
//  TRWLocationManager.h
//  School App
//
//  Created by actolap on 26/06/17.
//  Copyright © 2017 Actolap Solutions India Pvt. Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <MapKit/MapKit.h>

#ifndef TRWLocationManager_h
#define TRWLocationManager_h


#endif /* TRWLocationManager_h */

#define LOCATION_DID_CHANGED_NOTIFICATION @"LOCATION_DID_CHANGED_NOTIFICATION"
#define LOCATION_DID_FAILED_NOTIFICATION @"LOCATION_DID_FAILED_NOTIFICATION"
#define LOCATION_AUTHORIZATION_STATUS_CHANGED_NOTIFICATION @"LOCATION_AUTHORIZATION_STATUS_CHANGED_NOTIFICATION"
#define LOCATION_WAS_PAUSED_NOTIFICATION @"LOCATION_WAS_PAUSED_NOTIFICATION"

typedef enum
{
    LocationManagerTypeNone = 0x00,
    LocationManagerTypeStandart = 0x10,
    LocationManagerTypeSignificant = 0x01,
    LocationManagetTypeStandartAndSignificant = 0x11
} TRWLocationManagerType;

@interface TRWLocationManager : NSObject <CLLocationManagerDelegate>

@property (strong, nonatomic) CLLocationManager *locationManager;
@property (strong, nonatomic) CLLocationManager *significantLocationManager;
@property (strong, nonatomic) CLLocation* lastLocation;
@property (nonatomic) CLLocationCoordinate2D lastCoordinate;

@property (nonatomic) BOOL allowsBackgroundLocationUpdates;

+ (TRWLocationManager *)sharedInstance;

/**
 *  Indicates in whether of LocationManagetType state is now the location manager's shared instance.
 */
@property (nonatomic) TRWLocationManagerType locationType;

/**
 * Start Location Update
 */
- (void)start;

/**
 * Start Significant Location Update
 */
- (void)startSignificant;

/**
 * Stop Standard Location Update only (this means, if significant update is also started, then will be stopped standard location updates only).
 */
- (void)stop;

/**
 * Stop Significant Location Update (only)
 */
- (void)stopSignificant;

@end
