//
//  LocationPostData.h
//  Trackwick SDK
//
//  Created by actolap on 28/06/17.
//  Copyright © 2017 Actolap Solutions India Pvt. Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>

#ifndef LocationPostData_h
#define LocationPostData_h


#endif /* LocationPostData_h */

@interface LocationPostData : NSObject {
    NSString *version;
    NSString *deviceModel;
    NSString *deviceMake;
    NSString *uuid;
    NSString *platform;
    NSString *data;
}

@property (nonatomic, retain) NSString *version;
@property (nonatomic, retain) NSString *deviceModel;
@property (nonatomic, retain) NSString *deviceMake;
@property (nonatomic, retain) NSString *uuid;
@property (nonatomic, retain) NSString *platform;
@property (nonatomic, retain) NSMutableArray *data;

-(NSDictionary *)dictionary;

@end
