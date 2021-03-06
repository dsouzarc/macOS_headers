//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class HMDSiriRemoteInputServer, NSString;
@protocol HMDSiriSessionDelegate;

@interface HMDSiriSession : NSObject <HMFLogging>
{
    BOOL _isStreaming;
    id <HMDSiriSessionDelegate> _delegate;
    NSString *_identifier;
    HMDSiriRemoteInputServer *_server;
}

+ (id)logCategory;
@property(nonatomic) BOOL isStreaming; // @synthesize isStreaming=_isStreaming;
@property(readonly, nonatomic) __weak HMDSiriRemoteInputServer *server; // @synthesize server=_server;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) __weak id <HMDSiriSessionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)sendMsg:(const char *)arg1 args:(id)arg2;
- (void)stopStream:(CDUnknownBlockType)arg1;
- (void)startStream:(CDUnknownBlockType)arg1;
- (void)handleResetStream;
- (void)handleStopStream;
- (void)handleStartStream;
- (void)publish;
- (void)invalidate;
- (void)sendAudioFrame:(id)arg1 sequenceNumber:(long long)arg2 gain:(double)arg3;
- (id)initWithIdentifier:(id)arg1 server:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

