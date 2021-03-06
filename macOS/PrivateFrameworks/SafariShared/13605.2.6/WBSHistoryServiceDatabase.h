//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SafariShared/WBSHistoryServiceDatabaseProtocol-Protocol.h>
#import <SafariShared/WBSSQLiteDatabaseDelegate-Protocol.h>

@class NSDictionary, NSMapTable, NSMutableSet, NSString, NSURL, WBSHistoryCrypto, WBSHistoryServiceURLCompletion, WBSSQLiteDatabase, WBSSQLiteStatementCache;
@protocol OS_dispatch_queue, WBSFileLock;

@interface WBSHistoryServiceDatabase : NSObject <WBSSQLiteDatabaseDelegate, WBSHistoryServiceDatabaseProtocol>
{
    NSObject<OS_dispatch_queue> *_queue;
    unsigned long long _currentRangeForTemporaryID;
    id <WBSFileLock> _lock;
    WBSHistoryCrypto *_crypto;
    WBSSQLiteDatabase *_database;
    NSDictionary *_databaseOptions;
    WBSSQLiteStatementCache *_statements;
    NSMapTable *_delegates;
    NSMapTable *_listeners;
    NSMutableSet *_registeredListeners;
    struct LatestVisitInformationMap _latestVisitMap;
    BOOL _hasComputedLatestVisit;
    unordered_map_7f7b3f19 _temporaryIDToItem;
    unordered_map_7f7b3f19 _visitForTemporaryID;
    // Error parsing type: {atomic<bool>="__a_"AB}, name: _integrityCheckPending
    NSURL *_clearHistoryInProgressFileURL;
    NSString *_databaseID;
    NSURL *_databaseURL;
    WBSHistoryServiceURLCompletion *_urlCompletion;
}

@property(readonly, nonatomic) WBSHistoryServiceURLCompletion *urlCompletion; // @synthesize urlCompletion=_urlCompletion;
@property(readonly, nonatomic) NSURL *databaseURL; // @synthesize databaseURL=_databaseURL;
@property(readonly, copy, nonatomic) NSString *databaseID; // @synthesize databaseID=_databaseID;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_clearWBSHistorySQLiteStoreClearHistoryKeys;
- (void)_finishedClearingHistory;
- (void)_startingClearHistoryOperationForStartDate:(id)arg1 endDate:(id)arg2;
- (id)_dateForMetadataKey:(id)arg1 error:(id *)arg2;
- (void)dispatchEvent:(id)arg1 listenersToIgnore:(id)arg2 persistForDelayedDispatching:(BOOL)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_dispatchEvent:(id)arg1 listenersToIgnore:(id)arg2 persistForDelayedDispatching:(BOOL)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (long long)_writeEventToDatabase:(id)arg1 listeners:(id)arg2 error:(id *)arg3;
- (void)markEventsAsReceivedByListener:(id)arg1 eventIDs:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)_markEventsAsReceivedByListener:(id)arg1 eventIDs:(id)arg2;
- (void)fetchEventsForListener:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)_fetchEventsForListener:(id)arg1 error:(id *)arg2;
- (id)_updateListenerRegistration:(id)arg1 lastSeen:(double)arg2;
- (id)_fetchListenerNamesFromDatabase:(id *)arg1;
- (void)searchForUserTypedString:(id)arg1 options:(unsigned long long)arg2 currentTime:(double)arg3 writeHandle:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)performMaintenanceWithAgeLimit:(double)arg1 itemCountLimit:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)_executePlan:(struct DeletionPlan *)arg1 outDeletedItemCount:(unsigned long long *)arg2 outDeletedVisitCount:(unsigned long long *)arg3;
- (id)_collectDeletedURLsForPlan:(struct DeletionPlan *)arg1;
- (void)deletionPlanForAgeLimit:(double)arg1 itemCountLimit:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)deletionPlanForItemsToDelete:(id)arg1 visitsToDelete:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)_preparePlan:(struct DeletionPlan *)arg1 ageLimit:(double)arg2 itemCountLimit:(unsigned long long)arg3;
- (id)_deleteOldestItems:(unsigned long long)arg1 forPlan:(struct DeletionPlan *)arg2;
- (unsigned long long)_countOfItems;
- (id)_preparePlan:(struct DeletionPlan *)arg1 itemsToDelete:(const unordered_set_9227d2bb *)arg2 visitsToDelete:(const unordered_set_9227d2bb *)arg3;
- (id)_findObsoleteItemsForPlan:(struct DeletionPlan *)arg1;
- (id)_findAllRelatedVisitsToItems:(const unordered_set_9227d2bb *)arg1 forPlan:(struct DeletionPlan *)arg2;
- (id)_findAllRelatedVisits:(const unordered_set_9227d2bb *)arg1 forPlan:(struct DeletionPlan *)arg2;
- (void)recomputeItemScoresWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)_recomputeItemScores:(unordered_set_9227d2bb *)arg1;
- (id)_recomputeVisitScores:(unordered_set_9227d2bb *)arg1;
- (void)expireOldVisits:(double)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)_expireOldVisits:(double)arg1;
- (double)_oldestLatestVisit;
- (void)finishClearingHistoryIfNecessaryWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)clearHistoryItems:(id)arg1 afterDate:(id)arg2 beforeDate:(id)arg3 insertTombstone:(BOOL)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)_clearHistoryItems:(id)arg1 afterDate:(id)arg2 beforeDate:(id)arg3 insertTombstone:(BOOL)arg4;
- (id)_insertTombstonesForURLs:(id)arg1 afterDate:(id)arg2 beforeDate:(id)arg3;
- (void)clearHistoryVisitsAddedAfterDate:(id)arg1 beforeDate:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)_clearHistoryVisitsAddedAfterDate:(id)arg1 beforeDate:(id)arg2;
- (id)_generateUpdatedLastVisitForPlan:(struct DeletionPlan *)arg1;
- (id)_generateDisposedVisitsForPlan:(struct DeletionPlan *)arg1;
- (void)clearAllHistoryInsertingTombstoneUpToDate:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)_clearAllHistoryInsertingTombstoneUpToDate:(id)arg1;
- (long long)_currentGeneration;
- (void)addAutocompleteTrigger:(id)arg1 forItem:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (BOOL)_addAutocompleteTrigger:(id)arg1 forItem:(long long)arg2 error:(id *)arg3;
- (void)updateWithType:(unsigned long long)arg1 deleteItems:(id)arg2 deleteVisits:(id)arg3 addOrModifyObjects:(id)arg4 updateCurrentGeneration:(id)arg5 updateLastSyncGeneration:(id)arg6 updateLastMaintenance:(id)arg7 makeTestDriveVisitsPermanent:(BOOL)arg8 completionHandler:(CDUnknownBlockType)arg9;
- (id)_updateByDeletingItems:(id)arg1 deleteVisits:(id)arg2 addOrModifyObjects:(id)arg3 updateCurrentGeneration:(id)arg4 updateLastSyncGeneration:(id)arg5 updateLastMaintenance:(id)arg6 makeTestDriveVisitsPermanent:(BOOL)arg7;
- (void)_checkpointWriteAheadLog;
- (id)_makePermanentAllTestDriveVisits;
- (id)_setOrigin:(long long)arg1 forVisitsFromOrigin:(long long)arg2;
- (id)_addOrModifyObjects:(id)arg1;
- (void)_notifyDelegatesOfVisitIDs;
- (void)_notifyDelegatesOfItemIDs;
- (id)_updateVisitRedirectRelationships:(id)arg1;
- (id)_insertTombstone:(id)arg1;
- (id)_updateVisit:(id)arg1;
- (id)_insertVisit:(id)arg1;
- (id)_updateItem:(id)arg1;
- (id)_insertItem:(id)arg1;
- (long long)_permanentIDsForVisitIfAvailable:(long long)arg1;
- (long long)_permanentIDsForItemIfAvailable:(long long)arg1;
- (void)convertTombstoneWithGenerationToSecureFormat:(long long)arg1 lastSyncedGeneration:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)_convertTombstoneWithGenerationToSecureFormat:(long long)arg1 lastSyncedGeneration:(long long)arg2;
- (void)pruneTombstonesWithEndDatePriorToDate:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (unsigned long long)_pruneTombstonesOnDatabaseQueueWithEndDatePriorToDate:(id)arg1 error:(id *)arg2;
- (void)setMetadataValue:(id)arg1 forKey:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)_setMetadataValue:(id)arg1 forKey:(id)arg2;
- (void)fetchMetadataForKeys:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)_metadataForKey:(id)arg1 error:(id *)arg2;
- (BOOL)_shouldEmitLegacyTombstones;
- (void)setLastSeenDate:(id)arg1 forCloudClientVersion:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)lastSeenDateForCloudClientVersion:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)_lastSeenDateForCloudClientVersion:(unsigned long long)arg1;
- (void)fetchCloudClientVersionTable:(CDUnknownBlockType)arg1;
- (void)fetchDomainExpansions:(CDUnknownBlockType)arg1;
- (void)fetchWithOptions:(unsigned long long)arg1 predicate:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)_fetchTombstonesWithOptions:(unsigned long long)arg1 predicate:(id)arg2 writeDescriptor:(int)arg3;
- (id)_fetchVisitsWithOptions:(unsigned long long)arg1 predicate:(id)arg2 writeDescriptor:(int)arg3;
- (id)_recomputeLatestVisitsForItems:(const unordered_set_9227d2bb *)arg1;
- (void)ensureLatestVisitsAreComputed:(CDUnknownBlockType)arg1;
- (id)_ensureLatestVisitsAreComputed;
- (void)warmUp;
- (void)database:(id)arg1 hadSevereError:(id)arg2;
- (void)fetchDatabaseURL:(CDUnknownBlockType)arg1;
- (void)close;
- (BOOL)isOpen;
- (void)addDelegate:(id)arg1 listenerName:(id)arg2 forConnection:(id)arg3;
- (long long)allocateTemporaryIDRange:(long long *)arg1;
- (int)_migrateToCurrentSchemaVersionIfNeeded;
- (BOOL)_reopenDatabase:(id *)arg1;
- (BOOL)_prepareDatabase:(id *)arg1;
- (id)initWithID:(id)arg1 url:(id)arg2 options:(id)arg3 lock:(id)arg4 error:(id *)arg5;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

