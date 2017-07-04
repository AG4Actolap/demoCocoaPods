//
//  SessionHandler.h
//  Voler
//
//  Created by Harsh Jaiswal on 03/08/16.
//  Copyright © 2016 MobileWays. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AFNetworking.h"
//#import <AFNetworking/UIImageView+AFNetworking.h>

#define MAX_TIME_TO_WAIT_FOR_IMAGE 120.0

typedef enum{
    RequestTypeGET = 1,
    RequestTypePOST,
    RequestTypePUT,
    RequestTypeDelete,
}RequestType;

extern NSString *const NetworkReachablityUpdate;

@interface SessionHandler : NSObject

//@property(nonatomic, assign) AFHTTPRequestOperationManager requestManager;
@property(nonatomic,assign) BOOL isReachable;
@property(nonatomic,assign) BOOL showNetworkErrorMessage;

+(SessionHandler *)sessionHandler;
+(void)cancelAllRequest;
+(void)requestWithUrl:(NSString *)url andRequestParameter:(id)parameter andHeaders:(NSDictionary *)headersData andRequestType:(RequestType)requestType andRequiredAuthorization:(BOOL)requiredAuthorization andTag:(NSString *)tag andCompletetion:(void (^)(BOOL status,id responseObj, NSString *tag, NSError *error , NSInteger statusCode))completion;
+(void)responseWithUrl:(NSString *)url andPostResponse:(NSDictionary *)parameters andHeaders:(NSDictionary *)headersData andImageData:(NSData *)imageData andIsImageChanged:(BOOL)isImageChanged andRequestType:(RequestType)requestType andRequiredAuthorization:(BOOL)requiredAuthorization andImageKey:(NSString *)imageKey andCompletetion:(void (^)(BOOL status,id responseObj, NSString *tag, NSError *error , NSInteger statusCode))completion;
@end
