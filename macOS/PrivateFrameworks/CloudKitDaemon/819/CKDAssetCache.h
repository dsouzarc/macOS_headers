//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CKDMMCS, CKSQLitePool, NSMutableDictionary, NSMutableSet, NSOperationQueue, NSString;
@protocol NSObject, OS_dispatch_queue;

@interface CKDAssetCache : NSObject
{
    BOOL _isUnitTestingAccount;
    BOOL _hasMigrated;
    BOOL _isEvictionScheduled;
    BOOL _didDrop;
    int _fileDownloadPathFd;
    CKDMMCS *_MMCS;
    CKSQLitePool *_dbPool;
    NSString *_fileDownloadPath;
    NSString *_applicationBundleID;
    NSString *_dbPath;
    NSString *_fileStagingPath;
    NSObject<OS_dispatch_queue> *_queue;
    NSOperationQueue *_opQueue;
    long long _checkoutCount;
    id <NSObject> _assetHandleExpirationNotificationObserver;
    NSMutableDictionary *_volumeUUIDByVolumeIndex;
    NSMutableDictionary *_volumeIndexByVolumeUUID;
    NSMutableSet *_deferredDeletedAssetHandles;
    NSMutableDictionary *_deferredLastUsedTimeByTrackingUUID;
}

+ (void)registerExpirationForAssetHandles;
+ (int)openFdForDownloadPath:(id)arg1 error:(id *)arg2;
+ (id)assetCacheWithApplicationBundleID:(id)arg1 assetDirectoryContext:(id)arg2 didInit:(char *)arg3 error:(id *)arg4;
+ (id)_sharedCachesByPath;
+ (id)_sharedCachesQueue;
@property(retain, nonatomic) NSMutableDictionary *deferredLastUsedTimeByTrackingUUID; // @synthesize deferredLastUsedTimeByTrackingUUID=_deferredLastUsedTimeByTrackingUUID;
@property(retain, nonatomic) NSMutableSet *deferredDeletedAssetHandles; // @synthesize deferredDeletedAssetHandles=_deferredDeletedAssetHandles;
@property(retain, nonatomic) NSMutableDictionary *volumeIndexByVolumeUUID; // @synthesize volumeIndexByVolumeUUID=_volumeIndexByVolumeUUID;
@property(retain, nonatomic) NSMutableDictionary *volumeUUIDByVolumeIndex; // @synthesize volumeUUIDByVolumeIndex=_volumeUUIDByVolumeIndex;
@property(retain, nonatomic) id <NSObject> assetHandleExpirationNotificationObserver; // @synthesize assetHandleExpirationNotificationObserver=_assetHandleExpirationNotificationObserver;
@property(nonatomic) long long checkoutCount; // @synthesize checkoutCount=_checkoutCount;
@property(nonatomic) BOOL didDrop; // @synthesize didDrop=_didDrop;
@property BOOL isEvictionScheduled; // @synthesize isEvictionScheduled=_isEvictionScheduled;
@property(nonatomic) int fileDownloadPathFd; // @synthesize fileDownloadPathFd=_fileDownloadPathFd;
@property(retain, nonatomic) NSOperationQueue *opQueue; // @synthesize opQueue=_opQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSString *fileStagingPath; // @synthesize fileStagingPath=_fileStagingPath;
@property(retain, nonatomic) NSString *dbPath; // @synthesize dbPath=_dbPath;
@property(retain, nonatomic) NSString *applicationBundleID; // @synthesize applicationBundleID=_applicationBundleID;
@property(retain, nonatomic) NSString *fileDownloadPath; // @synthesize fileDownloadPath=_fileDownloadPath;
@property(nonatomic) BOOL hasMigrated; // @synthesize hasMigrated=_hasMigrated;
@property(nonatomic) BOOL isUnitTestingAccount; // @synthesize isUnitTestingAccount=_isUnitTestingAccount;
@property(readonly, nonatomic) CKSQLitePool *dbPool; // @synthesize dbPool=_dbPool;
@property(nonatomic) __weak CKDMMCS *MMCS; // @synthesize MMCS=_MMCS;
- (void).cxx_destruct;
- (void)setupPersistentStateAtStartup;
- (void)_resetAssetInflightUsingDB:(id)arg1;
- (BOOL)initDatabaseWithError:(id *)arg1;
- (void)expireAssetHandlesIfNecessaryWithGroup:(id)arg1;
- (void)_scheduleExpirationForAssetHandles;
- (void)_expireAssetHandlesWithGroup:(id)arg1;
- (void)_expireAssetHandlesWithExpiryDate:(id)arg1 group:(id)arg2;
- (unsigned long long)predictedEvictedSizeForAllFilesForced:(BOOL)arg1;
- (unsigned long long)evictAllFilesForced:(BOOL)arg1;
- (unsigned long long)_evictWithEvictionInfo:(id)arg1;
- (unsigned long long)_evictDownloadedFilesWithDatabase:(id)arg1 evictionInfo:(id)arg2;
- (unsigned long long)_evictDownloadedFilesEvictionInfo:(id)arg1;
- (void)_scheduleEvictionForDownloadedFiles;
- (id)assetHandleWithCachedPath:(id)arg1;
- (BOOL)parseCachedPath:(id)arg1 assetHandleUUID:(id *)arg2 assetSignature:(id *)arg3;
- (BOOL)parseCachedPath:(id)arg1 assetHandleUUIDString:(id *)arg2 assetSignatureString:(id *)arg3;
- (void)deferredUpdateLastTimeUsedForUUID:(id)arg1;
- (id)findAssetHandleForItemID:(unsigned long long)arg1 error:(id *)arg2;
- (void)stopTrackingAssetHandlesByItemIDs:(id)arg1;
- (void)updateDeferredLastAccessTimeForUUIDsUsingDB:(id)arg1;
- (void)unregisterDeferredItemIDs:(id)arg1 andDeleteAssetHandles:(id)arg2 usingDB:(id)arg3;
- (void)deferredStopTrackingAssetHandlesByItemIDs:(id)arg1;
- (BOOL)startTrackingGetAssetHandles:(id)arg1 operationType:(long long)arg2 error:(id *)arg3;
- (BOOL)startTrackingRegisterOrPutAssetHandles:(id)arg1 operationType:(long long)arg2 error:(id *)arg3;
- (id)trackDownloadedData:(id)arg1 signature:(id)arg2 error:(id *)arg3;
- (id)trackCachedButNotRegisteredMMCSItems:(id)arg1 error:(id *)arg2;
- (id)trackDownloadedMMCSItems:(id)arg1 error:(id *)arg2;
- (BOOL)updateAssetHandlesForPutMMCSItems:(id)arg1 error:(id *)arg2;
- (BOOL)updateAssetHandlesForGetMMCSItems:(id)arg1 error:(id *)arg2;
- (id)updateAssetHandlesForChunkedMMCSItems:(id)arg1 error:(id *)arg2;
- (id)updateAssetHandlesForRegisteredMMCSItems:(id)arg1 error:(id *)arg2;
- (id)_getAssetHandlesForCachedButNotRegisteredMMCSItems:(id)arg1 error:(id *)arg2;
- (id)_getAssetHandlesForDownloadedMMCSItems:(id)arg1 error:(id *)arg2;
- (id)_saveData:(id)arg1 error:(id *)arg2;
- (void)scheduleUnregisterItemIDsAndDeleteAssetHandlesWithEvictionInfo:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)scheduleUnregisterItemsAndDeleteUnregisteredAssetHandlesWithIDs:(id)arg1;
- (void)scheduleUnregisterItemsAndDeleteUnregisteredAssetHandlesWithIDs:(id)arg1 deleteUnregisteredAssetHandlesWithIDs:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)unregisterItemIDs:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)showAssetCache;
- (unsigned long long)countAssetCacheItems;
- (void)checkAssetHandlesForRegisteredMMCSItems:(id)arg1;
- (void)clearAssetCache;
- (void)cancelExpiryTimer;
- (unsigned long long)clearForced:(BOOL)arg1;
- (unsigned long long)_clearForced:(BOOL)arg1 group:(id)arg2;
- (id)existingOrNewVolumeIndexForDeviceID:(id)arg1;
- (id)existingOrNewVolumeIndexForDeviceID:(id)arg1 usingDB:(id)arg2;
- (id)deviceIDForVolumeIndex:(id)arg1;
- (void)_deleteAssetHandlesAndUnregisterItemsForUnmountedAssetVolumesWithDB:(id)arg1;
- (void)forgetVolumeUUID:(id)arg1;
- (id)volumeUUIDWithVolumeIndex:(id)arg1;
- (id)existingOrNewVolumeIndexForVolumeUUID:(id)arg1;
- (id)existingOrNewVolumeIndexForVolumeUUID:(id)arg1 usingDB:(id)arg2;
- (void)_setVolumeIndex:(id)arg1 forVolumeUUID:(id)arg2;
- (void)dealloc;
- (void)drop;
- (void)cleanup;
- (id)_initWithApplicationBundleID:(id)arg1 assetDirectoryContext:(id)arg2 error:(id *)arg3;

@end

