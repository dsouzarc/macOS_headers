//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "IPXDatabase2ndLevelMomentsGroupingController.h"

@interface IPXDatabaseCollectionsController : IPXDatabase2ndLevelMomentsGroupingController
{
}

- (void)libraryUpdatedMomentCollection:(id)arg1 forKeyPaths:(id)arg2;
- (void)libraryDeletedMomentCollection:(id)arg1;
- (void)libraryCreatedMomentCollection:(id)arg1;
- (id)multicaster:(id)arg1 queueForSelector:(SEL)arg2;
- (id)locked_latestDateForCollectionObjects;
- (id)locked_earliestDateForCollectionObjects;
- (void)handleNotReadyChildControllers:(id)arg1;
- (CDUnknownBlockType)objectsCollectionSortingComparator;
- (id)_locked_momentCollectionControllersWithUUIDs:(id)arg1;
- (void)_assignAllMomentCollectionsFoundInDatabase;
- (id)_locked_momentCollectionControllersWithPropertyProvidedByBlock:(CDUnknownBlockType)arg1 thatMatchStringIdentifiers:(id)arg2;
- (id)initWithDatabaseMomentsController:(id)arg1;

@end

