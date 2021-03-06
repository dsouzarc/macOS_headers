//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/AVCRemoteVideoClientDelegate-Protocol.h>
#import <HomeKitDaemon/HMDAudioStreamInterfaceDelegate-Protocol.h>
#import <HomeKitDaemon/HMDVideoStreamInterfaceDelegate-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class AVCRemoteVideoClient, HMDAudioStreamInterface, HMDCameraSessionID, HMDCameraStreamSnapshotHandler, HMDVideoStreamInterface, NSNumber, NSObject, NSString;
@protocol HMDStreamingManagerDelegate, OS_dispatch_queue;

@interface HMDStreamingManager : HMFObject <HMDVideoStreamInterfaceDelegate, HMDAudioStreamInterfaceDelegate, AVCRemoteVideoClientDelegate, HMFLogging>
{
    HMDVideoStreamInterface *_videoStreamInterface;
    HMDAudioStreamInterface *_audioStreamInterface;
    HMDCameraSessionID *_sessionID;
    NSNumber *_slotIdentifier;
    AVCRemoteVideoClient *_avcRemoteVideo;
    NSObject<OS_dispatch_queue> *_workQueue;
    id <HMDStreamingManagerDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    HMDCameraStreamSnapshotHandler *_streamSnapshotHandler;
}

+ (id)logCategory;
@property(readonly, nonatomic) HMDCameraStreamSnapshotHandler *streamSnapshotHandler; // @synthesize streamSnapshotHandler=_streamSnapshotHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(nonatomic) __weak id <HMDStreamingManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(retain, nonatomic) AVCRemoteVideoClient *avcRemoteVideo; // @synthesize avcRemoteVideo=_avcRemoteVideo;
@property(retain, nonatomic) NSNumber *slotIdentifier; // @synthesize slotIdentifier=_slotIdentifier;
@property(retain, nonatomic) HMDCameraSessionID *sessionID; // @synthesize sessionID=_sessionID;
@property(retain, nonatomic) HMDAudioStreamInterface *audioStreamInterface; // @synthesize audioStreamInterface=_audioStreamInterface;
@property(retain, nonatomic) HMDVideoStreamInterface *videoStreamInterface; // @synthesize videoStreamInterface=_videoStreamInterface;
- (void).cxx_destruct;
- (void)remoteVideoServerDidDie:(id)arg1;
- (void)remoteVideoClientDidReceiveLastFrame:(id)arg1;
- (void)remoteVideoClient:(id)arg1 remoteVideoAttributesDidChange:(id)arg2;
- (void)remoteVideoClientDidReceiveFirstFrame:(id)arg1;
- (void)videoStreamDidUpdateConfiguration:(id)arg1;
- (void)videoStreamDidNetworkDeteriorate:(id)arg1;
- (void)videoStreamDidNetworkImprove:(id)arg1;
- (void)videoStream:(id)arg1 didStop:(id)arg2;
- (void)videoStream:(id)arg1 didStartRelay:(id)arg2;
- (void)videoStream:(id)arg1 didStart:(id)arg2;
- (void)audioStream:(id)arg1 didStop:(id)arg2;
- (void)audioStream:(id)arg1 didResume:(id)arg2;
- (void)audioStream:(id)arg1 didPause:(id)arg2;
- (void)audioStream:(id)arg1 didStart:(id)arg2;
- (void)_callConfigurationUpdated;
- (void)_callNetworkDeteriorated;
- (void)_callNetworkImproved;
- (void)_callStreamStopped:(id)arg1;
- (void)_callRelayStarted:(id)arg1;
- (void)_callReceivedFirstFrame:(id)arg1;
- (void)_callStreamStarted:(id)arg1;
- (void)updateAudioSetting:(unsigned long long)arg1;
- (void)_stopStream;
- (void)updateStreamConfiguration:(id)arg1;
- (void)updateReconfigurationMode:(BOOL)arg1;
- (void)_startStreamWithVideoConfig:(id)arg1 audioConfig:(id)arg2;
- (void)startStreamWithVideoConfig:(id)arg1 audioConfig:(id)arg2;
- (id)logIdentifier;
- (void)dealloc;
- (id)initWithSessionID:(id)arg1 streamSnapshotHandler:(id)arg2 workQueue:(id)arg3 delegate:(id)arg4 delegateQueue:(id)arg5 localVideoNetworkConfig:(id)arg6 localAudioNetworkConfig:(id)arg7 sessionHandler:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

