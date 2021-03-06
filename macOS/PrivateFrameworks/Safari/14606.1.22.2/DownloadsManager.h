//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Safari/AuthenticationSheetRequestDelegate-Protocol.h>
#import <Safari/DownloadAlertsManagerDataSource-Protocol.h>
#import <Safari/DownloadProgressEntryDelegate-Protocol.h>
#import <Safari/DownloadViewControllerDataSource-Protocol.h>
#import <Safari/DownloadViewControllerDelegate-Protocol.h>
#import <Safari/PassFileDownloadDelegate-Protocol.h>
#import <Safari/WebDownloadDelegate-Protocol.h>

@class NSMapTable, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, NSTimer, WBSCoalescedAsynchronousWriter;
@protocol DownloadsManagerDelegate;

__attribute__((visibility("hidden")))
@interface DownloadsManager : NSObject <DownloadProgressEntryDelegate, PassFileDownloadDelegate, AuthenticationSheetRequestDelegate, WebDownloadDelegate, DownloadAlertsManagerDataSource, DownloadViewControllerDataSource, DownloadViewControllerDelegate>
{
    NSMutableArray *_entries;
    NSMapTable *_downloadToEntry;
    struct HashMap<Safari::WK::Download, WTF::RetainPtr<DownloadProgressEntry>, Safari::WK::ObjectSubclassHash<Safari::WK::Download>, WTF::HashTraits<Safari::WK::Download>, WTF::HashTraits<WTF::RetainPtr<DownloadProgressEntry>>> _wkDownloadToEntry;
    NSMutableDictionary *_identifierToEntry;
    NSMutableSet *_openableDownloadURLs;
    struct HashMap<Safari::WK::Download, WTF::RetainPtr<PassFileDownload>, Safari::WK::ObjectSubclassHash<Safari::WK::Download>, WTF::HashTraits<Safari::WK::Download>, WTF::HashTraits<WTF::RetainPtr<PassFileDownload>>> _wkDownloadToPassFileDownload;
    NSMutableSet *_passFileDownloadURLs;
    NSMutableSet *_urlsOfPendingDownloadsInitiatedFromPrivateBrowsing;
    WBSCoalescedAsynchronousWriter *_historyWriter;
    BOOL _loadedDownloadHistory;
    BOOL _hadEntriesOnDisk;
    BOOL _isPlanningToWriteOnQuit;
    BOOL _hasStartedLoadingDownloadHistory;
    NSMutableArray *_blocksToExecuteWhenDownloadHistoryIsLoaded;
    struct unique_ptr<SafariShared::SuddenTerminationDisabler, std::__1::default_delete<SafariShared::SuddenTerminationDisabler>> _suddenTerminationDisabler;
    float _totalProgress;
    NSTimer *_updateTotalProgressTimer;
    NSTimer *_removeDownloadsAfterOneDayTimer;
    id <DownloadsManagerDelegate> _delegate;
}

+ (id)downloadBundleExtension;
@property(nonatomic) __weak id <DownloadsManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)downloadViewController:(id)arg1 didAcceptURLs:(id)arg2;
- (void)downloadViewControllerDidRemoveIdleEntries:(id)arg1;
- (void)downloadViewController:(id)arg1 didUndoRemovingEntry:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)downloadViewController:(id)arg1 didRemoveEntries:(id)arg2;
- (unsigned long long)downloadViewController:(id)arg1 indexForEntry:(id)arg2;
- (id)downloadViewController:(id)arg1 validEntriesFromEntries:(id)arg2 withBooleanKey:(id)arg3;
- (id)downloadViewControllerGetEntries:(id)arg1;
- (void)passFileDownload:(id)arg1 downloadDidEnd:(const struct Download *)arg2;
- (void)downloadProgressEntry:(id)arg1 didUpdateFractionCompletedForPath:(id)arg2 fractionCompleted:(float)arg3;
- (void)downloadProgressEntry:(id)arg1 didMarkDownloadBundleAsInProgressAtBundlePath:(id)arg2 creationDate:(id)arg3;
- (void)downloadProgressEntryDidFinish:(id)arg1 shouldClear:(BOOL)arg2;
- (void)downloadProgressEntryDidStop:(id)arg1;
- (void)downloadProgressEntry:(id)arg1 didResumeWithDownload:(id)arg2;
- (id)downloadFilenameInProgressForDownloadAlertsManager:(id)arg1;
- (unsigned long long)numberOfBusyEntriesForDownloadAlertsManager:(id)arg1;
- (void)didCompleteAuthenticationSheetRequest:(struct AuthenticationSheetRequest *)arg1;
- (id)_downloadStartedString;
- (void)_reportInvalidDownloadFileErrorForPath:(id)arg1;
- (void)_reportInsufficientDiskSpaceSheetForDownload:(id)arg1;
- (float)_calculateTotalProgress;
- (void)_updateTotalProgress:(id)arg1;
- (void)_startUpdateTotalProgressTimerIfNeeded;
- (void)_notifyAboutStartingDownloadEntryAndUpdateProgressTimer:(id)arg1 notificationToSend:(id)arg2 voiceOverMessage:(id)arg3;
- (BOOL)_promptForDownloadPath:(id *)arg1 filename:(id *)arg2 withSuggestedFilename:(id)arg3;
- (void)_wkDownload:(const struct Download *)arg1 entry:(id)arg2 didFailWithError:(id)arg3 wasCanceled:(BOOL)arg4;
- (void)_download:(id)arg1 entry:(id)arg2 didFailWithError:(id)arg3;
- (BOOL)_downloadFailsDueToNotEnoughFreeDiskSpaceForEntry:(id)arg1 error:(id)arg2;
- (void)_requestSpaceOrShowSheetForInsufficientDiskSpaceErrorForEntry:(id)arg1;
- (void)_requestFreeSpaceFromStorageManagerFromEntry:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (BOOL)_shouldRequestSpaceFromStorageManagerForEntry:(id)arg1;
- (void)_removeEntries:(id)arg1 withNotification:(BOOL)arg2 removeQuarantineHistoryEntry:(BOOL)arg3;
- (void)_loadDownloadHistoryIfNeededWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)_downloadHistoryFile;
- (id)_passFileDownloadForWKDownload:(const struct Download *)arg1;
- (id)_createEntryForWKDownload:(const struct Download *)arg1 addEntry:(BOOL)arg2;
- (id)_createEntryForWKDownload:(const struct Download *)arg1 allowOverwrite:(BOOL)arg2 shouldAvoidPersistingIdentifyingInformation:(BOOL)arg3 addEntry:(BOOL)arg4;
- (id)_createEntryForDownload:(id)arg1 allowOverwrite:(BOOL)arg2 shouldAvoidPersistingIdentifyingInformation:(BOOL)arg3;
- (void)_addHistoryEntryFromLoadedDownloadHistory:(id)arg1;
- (void)_addEntry:(id)arg1 withNotification:(BOOL)arg2;
- (void)_insertEntry:(id)arg1 atIndex:(unsigned int)arg2 withNotification:(BOOL)arg3 removeOld:(BOOL)arg4;
- (void)_noteDownloadsChanged;
- (void)_cancelRemoveDownloadsAfterOneDayTimer;
- (void)_scheduleCleanupOfOldestDownload;
- (void)_saveDownloadHistory;
- (void)_removeEntriesFinishedOverOneDayAgoAndUpdateTimerIfAppropriate;
- (id)_prepareToWriteDownloadHistory;
- (void)_updateSuddenTerminationSetting;
- (BOOL)_needToWriteHistoryFileOnQuit;
- (BOOL)_shouldCleanupHistoryAfterOneDay;
- (BOOL)_shouldClearHistoryOnQuit;
- (void)_downloadEntryStageChanged:(id)arg1;
- (void)_downloadsClearingPolicyDidChange:(id)arg1;
- (id)_downloadMetadataIOQueue;
- (void)_setEntry:(id)arg1 forWK2Download:(const struct Download *)arg2;
- (void)_setEntry:(id)arg1 forDownload:(id)arg2;
- (void)savePendingChangesBeforeTermination;
- (id)_validEntriesFromEntries:(id)arg1 forBooleanKey:(id)arg2;
- (void)addPendingDownloadURLInitiatedFromPrivateBrowsing:(id)arg1;
- (void)addPassFileDownloadURL:(id)arg1;
- (void)downloadMayBeOpenedForURL:(id)arg1;
- (int)totalBusy;
- (int)total;
- (void)_removeEntriesFinishedBeforeDate:(id)arg1;
- (void)removeEntriesAddedAfterDate:(id)arg1;
- (void)_removePassFileDownloadForWKDownload:(const struct Download *)arg1;
- (void)removeIdleEntries;
- (void)_removeEntry:(id)arg1;
- (void)_removeEntries:(id)arg1;
- (void)_insertEntry:(id)arg1 atIndex:(unsigned int)arg2;
- (unsigned long long)_indexOfEntry:(id)arg1;
- (id)_busyEntries;
- (void)getEntriesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)resumeDownloadAtPath:(id)arg1;
- (BOOL)_areDownloadURLsHTTPFamilyURLs:(id)arg1;
- (BOOL)_isDownloadURLStringHTTPFamilyURL:(id)arg1;
- (void)_cancelDownloadForEntry:(id)arg1 withError:(id)arg2;
- (void)_cancelDownloadForEntry:(id)arg1;
- (void)stopAllDownloads;
- (void)startWK2DownloadForRequest:(id)arg1 mayOpenWhenDone:(BOOL)arg2 allowOverwrite:(BOOL)arg3 shouldAvoidPersistingIdentifyingInformation:(BOOL)arg4 path:(id)arg5 tags:(id)arg6 isUsingSavePanel:(BOOL)arg7;
- (void)startWK2DownloadForRequest:(id)arg1 mayOpenWhenDone:(BOOL)arg2 shouldAvoidPersistingIdentifyingInformation:(BOOL)arg3;
- (void)download:(id)arg1 didFailWithError:(id)arg2;
- (void)downloadDidFinish:(id)arg1;
- (void)download:(id)arg1 didCreateDestination:(id)arg2;
- (BOOL)download:(id)arg1 shouldDecodeSourceDataOfMIMEType:(id)arg2;
- (void)download:(id)arg1 didReceiveDataOfLength:(unsigned long long)arg2;
- (void)download:(id)arg1 decideDestinationWithSuggestedFilename:(id)arg2;
- (void)download:(id)arg1 didReceiveResponse:(id)arg2;
- (void)download:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2;
- (void)download:(id)arg1 willResumeWithResponse:(id)arg2 fromByte:(long long)arg3;
- (void)downloadDidBegin:(id)arg1;
- (id)init;
- (id)_sanitizedPathExtensionForAnalyticsForPathExtension:(id)arg1;
- (void)wkDownload:(const struct Download *)arg1 didReceiveServerRedirect:(const struct URL *)arg2;
- (void)wkDownloadProcessDidCrash:(const struct Download *)arg1;
- (void)wkDownloadDidCancel:(const struct Download *)arg1;
- (void)wkDownload:(const struct Download *)arg1 didFailWithError:(const struct Error *)arg2;
- (void)wkDownloadDidFinish:(const struct Download *)arg1;
- (void)wkDownload:(const struct Download *)arg1 didCreateDestination:(const struct String *)arg2;
- (struct String)wkDownload:(const struct Download *)arg1 decideDestinationWithSuggestedFilename:(const struct String *)arg2 allowOverwrite:(_Bool *)arg3;
- (_Bool)wkDownload:(const struct Download *)arg1 shouldDecodeSourceDataOfMIMEType:(const struct String *)arg2;
- (void)wkDownload:(const struct Download *)arg1 didReceiveDataOfLength:(unsigned long long)arg2;
- (void)wkDownload:(const struct Download *)arg1 willResumeWithResponse:(const struct URLResponse *)arg2 fromByte:(long long)arg3;
- (void)wkDownload:(const struct Download *)arg1 didReceiveResponse:(const struct URLResponse *)arg2;
- (void)wkDownloadDidStart:(const struct Download *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

