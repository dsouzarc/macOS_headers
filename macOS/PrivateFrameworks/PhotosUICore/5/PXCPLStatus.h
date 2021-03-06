//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotosUICore/PXObservable.h>

#import "CPLStatusDelegate.h"
#import "PXAssetCountObserverDelegate.h"

@class CPLStatus, NSObject<OS_dispatch_queue>, NSProgress, NSString, PHPhotoLibrary, PLPhotoLibrary, PXAssetCountObserver, PXCPLState;

@interface PXCPLStatus : PXObservable <CPLStatusDelegate, PXAssetCountObserverDelegate>
{
    PXCPLState *_state;
    NSObject<OS_dispatch_queue> *_serialUpdateQueue;
    CPLStatus *_cplStatus;
    unsigned long long _syncProgressState;
    id _syncProgressSubscriber;
    NSProgress *_syncProgress;
    PXAssetCountObserver *_numberOfReferencedItemsObserver;
    unsigned long long _numberOfReferencedItems;
    PHPhotoLibrary *_ph_photoLibrary;
    PLPhotoLibrary *_pl_photoLibrary;
    unsigned long long _needsUpdate;
    double _lastUpdate;
    BOOL _isUpdating;
    CDUnknownBlockType _handler;
}

+ (id)currentStatusProvider;
@property(readonly, nonatomic) PXCPLState *state; // @synthesize state=_state;
- (void).cxx_destruct;
- (void)assetCountObserver:(id)arg1 didChangeNumberOfAssets:(long long)arg2;
- (void)statusDidChange:(id)arg1;
- (void)syncWithCloudPhotoLibrary;
- (void)userPauseCloudPhotos:(BOOL)arg1;
- (void)setHandler:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)handler;
- (void)userResumeICloudPhotos;
- (void)userPauseICloudPhotos;
- (void)_unsubscribeFromSyncProgress;
- (void)_subscribeToSyncProgress;
- (void)_setSyncProgress:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_powerStateDidChange:(id)arg1;
- (void)_scheduleUpdateForType:(unsigned long long)arg1;
- (void)_schedulePendingUpdates;
- (void)_performUpdate;
- (id)_updateState:(id)arg1 requestedTypes:(unsigned long long)arg2;
- (void)setState:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)_initWithInitialSynchronousUpdateType:(unsigned long long)arg1;
- (id)_initWithInitialUpdateType:(unsigned long long)arg1 isSynchronous:(BOOL)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

