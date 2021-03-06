//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSMutableSet;

__attribute__((visibility("hidden")))
@interface STMigrationContext : NSObject
{
    NSMutableDictionary *_uniqueIdentifierToCloudObjectID;
    NSMutableDictionary *_uniqueIdentifierToLocalObjectID;
    NSMutableSet *_deletedObjectIDs;
    NSMutableSet *_filledObjectIDs;
}

- (void).cxx_destruct;
- (BOOL)deleteCloudObjectWithUniqueIdentifier:(id)arg1 managedObjectContext:(id)arg2 error:(id *)arg3;
- (BOOL)deleteLocalObjectWithUniqueIdentifier:(id)arg1 managedObjectContext:(id)arg2 error:(id *)arg3;
- (id)updateCloudObjectWithUniqueIdentifier:(id)arg1 dictionary:(id)arg2 managedObjectContext:(id)arg3 error:(id *)arg4;
- (BOOL)initializeCachesWithManagedObjectContext:(id)arg1 withCloudStore:(id)arg2 andLocalStore:(id)arg3 error:(id *)arg4;
- (id)init;

@end

