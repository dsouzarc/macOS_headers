//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSUserActivityDelegate-Protocol.h"

@class IMAVPlayer, MPCPlayerPath, MTCompositeManifest, MTPlayerManifest, MTSetPlaybackQueueRequest, MTUpNextManifest, NSMutableSet, NSString, NSTimer, NSURL, NSUserActivity;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface MTPlayerController : NSObject <NSUserActivityDelegate>
{
    BOOL _hasReportedThisEpisode;
    BOOL _shouldFindSomethingToPlay;
    BOOL _playerManifestRestored;
    IMAVPlayer *_player;
    MPCPlayerPath *_playerPath;
    MTCompositeManifest *_compositeManifest;
    MTUpNextManifest *_upNextManifest;
    MTPlayerManifest *_userManifest;
    double _currentTimse;
    CDUnknownBlockType _platformSyncPlayheadChangeObserverBlock;
    NSString *_previousPlayingEpisodeUuid;
    double _lastPlaybackSaveTime;
    long long _metricsPlayStartTime;
    double _metricsPlayStartPosition;
    NSUserActivity *_currentActivity;
    NSObject<OS_dispatch_queue> *_restorationQueue;
    NSObject<OS_dispatch_semaphore> *_restorationSemaphore;
    MTSetPlaybackQueueRequest *_pendingSetPlaybackQueueRequest;
    NSTimer *_setPlaybackQueueRequestTimeoutTimer;
    NSMutableSet *_recordedPlayEventsForCurrentItem;
    NSURL *_lastRecordedItemURL;
}

+ (void)setSharedInstance:(id)arg1;
+ (id)sharedInstance;
@property(retain, nonatomic) NSURL *lastRecordedItemURL; // @synthesize lastRecordedItemURL=_lastRecordedItemURL;
@property(retain, nonatomic) NSMutableSet *recordedPlayEventsForCurrentItem; // @synthesize recordedPlayEventsForCurrentItem=_recordedPlayEventsForCurrentItem;
@property(retain, nonatomic) NSTimer *setPlaybackQueueRequestTimeoutTimer; // @synthesize setPlaybackQueueRequestTimeoutTimer=_setPlaybackQueueRequestTimeoutTimer;
@property(retain, nonatomic) MTSetPlaybackQueueRequest *pendingSetPlaybackQueueRequest; // @synthesize pendingSetPlaybackQueueRequest=_pendingSetPlaybackQueueRequest;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *restorationSemaphore; // @synthesize restorationSemaphore=_restorationSemaphore;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *restorationQueue; // @synthesize restorationQueue=_restorationQueue;
@property(nonatomic, getter=isPlayerManifestRestored) BOOL playerManifestRestored; // @synthesize playerManifestRestored=_playerManifestRestored;
@property(nonatomic) BOOL shouldFindSomethingToPlay; // @synthesize shouldFindSomethingToPlay=_shouldFindSomethingToPlay;
@property(retain, nonatomic) NSUserActivity *currentActivity; // @synthesize currentActivity=_currentActivity;
@property(nonatomic) double metricsPlayStartPosition; // @synthesize metricsPlayStartPosition=_metricsPlayStartPosition;
@property(nonatomic) long long metricsPlayStartTime; // @synthesize metricsPlayStartTime=_metricsPlayStartTime;
@property(nonatomic) double lastPlaybackSaveTime; // @synthesize lastPlaybackSaveTime=_lastPlaybackSaveTime;
@property(nonatomic) BOOL hasReportedThisEpisode; // @synthesize hasReportedThisEpisode=_hasReportedThisEpisode;
@property(retain, nonatomic) NSString *previousPlayingEpisodeUuid; // @synthesize previousPlayingEpisodeUuid=_previousPlayingEpisodeUuid;
@property(copy, nonatomic) CDUnknownBlockType platformSyncPlayheadChangeObserverBlock; // @synthesize platformSyncPlayheadChangeObserverBlock=_platformSyncPlayheadChangeObserverBlock;
@property(nonatomic) double currentTimse; // @synthesize currentTimse=_currentTimse;
@property(retain, nonatomic) MTPlayerManifest *userManifest; // @synthesize userManifest=_userManifest;
@property(retain, nonatomic) MTUpNextManifest *upNextManifest; // @synthesize upNextManifest=_upNextManifest;
@property(retain, nonatomic) MTCompositeManifest *compositeManifest; // @synthesize compositeManifest=_compositeManifest;
@property(retain, nonatomic) MPCPlayerPath *playerPath; // @synthesize playerPath=_playerPath;
@property(retain, nonatomic) IMAVPlayer *player; // @synthesize player=_player;
- (void).cxx_destruct;
- (void)updateUPPEpisodeUuid:(id)arg1 bookmarkTime:(double)arg2;
- (void)userActivity:(id)arg1 didReceiveInputStream:(id)arg2 outputStream:(id)arg3;
- (void)userActivityWillSave:(id)arg1;
- (void)userActivityWasContinued:(id)arg1;
- (void)recordMetricsEventForErrorLog:(id)arg1 withEpisode:(id)arg2;
- (void)recordMetricsEventForAccessLog:(id)arg1 playerItem:(id)arg2 episode:(id)arg3;
- (void)recordMetricsForCurrentItem;
- (void)recordMTPlayerMetricsForCurrentItem;
- (void)_sendMediaRemoteCommand:(unsigned int)arg1 toPlayer:(void *)arg2;
- (void)_performMediaRemoteCommand:(unsigned int)arg1;
- (void *)_localPlayerPath;
- (id)_activityRestorationPath;
- (id)_loadActivityForRestoration;
- (void)_saveActivityForRestoration;
- (void)_currentActivityResignCurrent;
- (void)_currentActivityBecomeCurrent;
- (void)_updateCurrentActivityForPlayState;
- (void)restoreFromUserActivity:(id)arg1 withManifest:(id)arg2 startPlayback:(BOOL)arg3 reason:(unsigned long long)arg4 interactive:(BOOL)arg5 completion:(CDUnknownBlockType)arg6;
- (void)restoreFromUserActivity:(id)arg1 startPlayback:(BOOL)arg2 reason:(unsigned long long)arg3 interactive:(BOOL)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_restoreManifestIfNeededWithCompletion:(CDUnknownBlockType)arg1 useEmptyManifest:(BOOL)arg2;
- (void)_restoreDefaultManifestIfNeededWithCompletion:(CDUnknownBlockType)arg1;
- (void)_restoreEmptyManifestIfNeededWithCompletion:(CDUnknownBlockType)arg1;
- (void)_restorePlayerManifestWithCompletion:(CDUnknownBlockType)arg1;
- (void)restorePlayerManifestWithCompletion:(CDUnknownBlockType)arg1;
- (void)clearPlayerManifestWithCompletion:(CDUnknownBlockType)arg1;
- (id)_alertControllerForClearingOrKeepingUpNextWithRequest:(id)arg1;
- (void)_showGenericPromptToClearUpNextWithRequest:(id)arg1;
- (BOOL)_promptToClearUpNextIfNeededForRequest:(id)arg1;
- (BOOL)_shouldOpenExternalItemForEpisode:(id)arg1;
- (BOOL)_openExternalItemIfNeededForManifest:(id)arg1;
- (long long)_validatePlaybackRequest:(id)arg1;
- (id)_currentEpisodeForManifest:(id)arg1;
- (void)_tryResolvingPendingSetPlaybackQueueRequest;
- (void)_setLocalPlaybackQueue:(id)arg1;
- (void)_setPlaybackQueue:(id)arg1;
- (void)playManifest:(id)arg1 reason:(unsigned long long)arg2;
- (void)playManifest:(id)arg1 reason:(unsigned long long)arg2 interactive:(BOOL)arg3 presentationType:(unsigned long long)arg4 completion:(CDUnknownBlockType)arg5;
- (void)setManifest:(id)arg1 startPlayback:(BOOL)arg2 forceLocal:(BOOL)arg3 reason:(unsigned long long)arg4 interactive:(BOOL)arg5 completion:(CDUnknownBlockType)arg6;
- (void)playManifest:(id)arg1 reason:(unsigned long long)arg2 interactive:(BOOL)arg3 completion:(CDUnknownBlockType)arg4;
- (void)setManifest:(id)arg1 startPlayback:(BOOL)arg2 reason:(unsigned long long)arg3 interactive:(BOOL)arg4 completion:(CDUnknownBlockType)arg5;
- (void)setManifest:(id)arg1 reason:(unsigned long long)arg2 interactive:(BOOL)arg3 completion:(CDUnknownBlockType)arg4;
- (void)setPlaybackQueue:(id)arg1;
- (void)setManifest:(id)arg1 startPlayback:(BOOL)arg2 destination:(unsigned long long)arg3 context:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)setManifestAsDryRun:(id)arg1 reason:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setManifest:(id)arg1 startPlayback:(BOOL)arg2 forceLocal:(BOOL)arg3 context:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)setManifest:(id)arg1 startPlayback:(BOOL)arg2 context:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)setManifest:(id)arg1 context:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)playManifest:(id)arg1 context:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)dismissNowPlayingAnimated:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dismissNowPlayingAnimated:(BOOL)arg1;
- (void)presentNowPlayingAnimated:(BOOL)arg1;
- (BOOL)isPlayingEpisodeUuid:(id)arg1;
- (id)playingEpisodeUuid;
- (id)currentItem;
- (BOOL)isPlayerTargetLocal;
- (void)setPlayerRoute:(id)arg1;
- (void)resolveActivePlayerPathWithCompletion:(CDUnknownBlockType)arg1;
- (BOOL)isSeekingOrScrubbing;
- (void)setCurrentTime:(double)arg1;
- (double)currentTime;
- (BOOL)isTargetPlaying;
- (BOOL)isPlayingLocally;
- (void)playPlayerTarget;
- (void)playLocalPlayer;
- (void)pausePlayerTarget;
- (void)pauseLocalPlayer;
- (void)playItemAtIndex:(unsigned long long)arg1;
- (void)_performAfterPlay:(id)arg1 playbackStarted:(BOOL)arg2;
- (void)playWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (BOOL)playWithContext:(id)arg1;
- (BOOL)playWithReason:(unsigned long long)arg1;
- (void)openExternalEpisode:(id)arg1;
- (BOOL)shouldPresentNowPlayingForItem:(id)arg1 presentationType:(unsigned long long)arg2;
- (void)playbackStateDidChange;
- (void)playerBufferEmptyDidChange;
- (void)playerPeriodicUpdate;
- (void)playerHeadWillChange:(id)arg1;
- (void)currentItemDidChange;
- (BOOL)updateEpisode:(id)arg1 andPlayerItem:(id)arg2 withElapsedTime:(double)arg3 andDuration:(double)arg4 onMediaItemWillChange:(BOOL)arg5;
- (void)currentItemWillChange:(id)arg1;
- (void)playerFailure:(id)arg1 shouldShowDialog:(BOOL)arg2;
- (void)playerFailedToPlayToEndTime:(id)arg1;
- (void)playerErrorDidOccur:(id)arg1;
- (void)tearDownPlayerNotifications;
- (void)setupPlayerNotifications;
- (void)dealloc;
- (id)init;
- (id)copy;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

