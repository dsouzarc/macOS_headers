//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "IPXDatabaseMomentClusterController.h"

#import "IPXLockedDatabaseYearController-Protocol.h"

@class NSString, RDMomentYear;

@interface IPXDatabaseYearController : IPXDatabaseMomentClusterController <IPXLockedDatabaseYearController>
{
    RDMomentYear *_databaseMomentYear;
}

+ (id)databaseModelIdUUIDPrefix;
@property(retain, nonatomic) RDMomentYear *databaseMomentYear; // @synthesize databaseMomentYear=_databaseMomentYear;
- (void).cxx_destruct;
- (id)applicableVersions;
- (id)newCollectionWithUUID:(id)arg1 name:(id)arg2 lifetimeSequence:(unsigned long long)arg3 objects:(id)arg4 userInfo:(id)arg5;
- (id)latestDateForCollectionObjects;
- (id)earliestDateForCollectionObjects;
- (BOOL)collectionObjectDateRangeIsCalculatedFromArrangedObjects;
- (id)objectsCollectionName;
- (id)initWithDatabaseMomentsController:(id)arg1 databaseMomentYear:(id)arg2;
- (id)locked_updateDatabaseMomentYear:(id)arg1 reportChangedProperties:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

