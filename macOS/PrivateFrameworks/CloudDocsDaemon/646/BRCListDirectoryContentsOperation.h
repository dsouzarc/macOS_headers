//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CloudDocsDaemon/BRCAutoCancelOperation.h>

@class BRCItemID, BRCPendingChangesStream, BRCServerZone, CKQueryOperation, CKRecordID, NSHashTable, NSMutableArray;

__attribute__((visibility("hidden")))
@interface BRCListDirectoryContentsOperation : BRCAutoCancelOperation
{
    BRCServerZone *_serverZone;
    BRCItemID *_itemID;
    CKRecordID *_recordID;
    unsigned int _batchSize;
    BRCPendingChangesStream *_pendingChangesStream;
    unsigned long long _fetchPhase;
    NSMutableArray *_listCompletionBlocks;
    NSMutableArray *_preFlushListCompletionBlocks;
    NSHashTable *_delegates;
    BOOL _canSaveDirectly;
    BOOL _hasNilDelegate;
    CKQueryOperation *_queryOp;
    BOOL _rescheduleApply;
}

@property(nonatomic) BOOL rescheduleApply; // @synthesize rescheduleApply=_rescheduleApply;
@property(readonly, nonatomic) BRCItemID *folderToList; // @synthesize folderToList=_itemID;
@property(readonly, nonatomic) BRCPendingChangesStream *pendingChangesStream; // @synthesize pendingChangesStream=_pendingChangesStream;
- (void).cxx_destruct;
- (void)addPreFlushDirectoryListCompletionBlock:(CDUnknownBlockType)arg1;
- (void)addDirectoryListCompletionBlock:(CDUnknownBlockType)arg1;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (void)_waitForFlushAndRescheduleApplyIfNecessaryWithError:(id)arg1;
- (void)main;
- (void)_scheduleQueryOpWithCursor:(id)arg1 completionState:(unsigned long long)arg2;
- (void)_cursorWasUpdated:(id)arg1 subResourcesOp:(id)arg2 movedZoneName:(id)arg3;
- (void)cancelToBeReplacedByOperation:(id)arg1;
- (void)endObservingChangesWithDelegate:(id)arg1;
- (void)beginObservingChangesWithDelegate:(id)arg1;
- (id)initWithItemID:(id)arg1 zone:(id)arg2 isUserWaiting:(BOOL)arg3;
- (BOOL)isListingSharedZoneRoot;
- (BOOL)shouldRetryForError:(id)arg1;

@end

