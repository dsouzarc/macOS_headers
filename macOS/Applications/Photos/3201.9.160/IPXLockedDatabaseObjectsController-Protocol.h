//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "IPXLockedObjectsController-Protocol.h"

@class LiImmutableRidList, NSArray, NSIndexSet, NSMutableArray, NSSet;
@protocol NSFastEnumeration;

@protocol IPXLockedDatabaseObjectsController <IPXLockedObjectsController>
- (LiImmutableRidList *)locked_modelIdsInList:(LiImmutableRidList *)arg1;
- (BOOL)locked_containsObjectWithModelId:(unsigned long long)arg1;
- (BOOL)locked_removeObjectsWithModelIdObjects:(id <NSFastEnumeration>)arg1;
- (BOOL)locked_removeObjectsWithModelIds:(NSIndexSet *)arg1;
- (void)locked_processRepresentativeImageChangesInResponseToChangedKeyPaths:(NSSet *)arg1 forVersionReplacements:(NSArray *)arg2 withAdditionalProperties:(unsigned long long)arg3;
- (NSArray *)locked_updateDatabaseModels:(id <NSFastEnumeration>)arg1 reportMetdataChanges:(NSSet *)arg2;
- (NSArray *)locked_updateDatabaseModels:(NSMutableArray *)arg1 reportMetdataChanges:(NSSet *)arg2 removeUpdates:(BOOL)arg3;
@end

