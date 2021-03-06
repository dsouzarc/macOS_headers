//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVConferenceXPCClient, NSArray, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>;

@interface AVCQoSMonitor : NSObject
{
    NSObject<OS_dispatch_queue> *_stateQueue;
    id <AVCQoSMonitorDelegate> _delegate;
    AVConferenceXPCClient *_connection;
    NSMutableArray *_registeredStreamTokens;
    NSMutableDictionary *_reportingIntervals;
}

@property(readonly, nonatomic) NSArray *streamTokens; // @synthesize streamTokens=_registeredStreamTokens;
- (BOOL)generateInvalidStreamTokenWithError:(id *)arg1;
- (void)registerBlocksForNotifications;
- (void)deregisterBlocksForNotifications;
- (void)terminateConnection;
- (long long)reportingIntervalForStreamToken:(long long)arg1;
- (id)registerStreamToken:(long long)arg1;
- (void)requestQoSReport;
@property(nonatomic) __weak id <AVCQoSMonitorDelegate> delegate;
- (void)dealloc;
- (id)initWithStreamToken:(long long)arg1 queue:(id)arg2 error:(id *)arg3;

@end

