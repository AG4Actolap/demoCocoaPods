//
//  TrackwickDatabase.h
//  Trackwick
//
//  Created by actolap on 03/07/17.
//  Copyright © 2017 Actolap Solutions India Pvt. Ltd. All rights reserved.
//

#ifndef TrackwickDatabase_h
#define TrackwickDatabase_h


#endif /* TrackwickDatabase_h */

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@interface TrackwickDataBase : NSObject

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

-(NSPersistentStoreCoordinator *)persistentStoreCoordinator;
-(NSManagedObjectModel *)managedObjectModel;
-(NSManagedObjectContext *)managedObjectContext;

@end
