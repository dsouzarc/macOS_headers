//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class GEOAnalyticsPipelineRemoteProxy, NSData, NSObject;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface GEOAnalyticsPipelineLogMsgReportOperation : NSOperation
{
    _Bool _finished;
    _Bool _executing;
    int _logMsgType;
    int _logMsgEventType;
    NSData *_logMsg;
    NSObject<OS_dispatch_queue> *_runQueue;
    id _transaction;
    GEOAnalyticsPipelineRemoteProxy *_remoteProxy;
    NSObject<OS_dispatch_queue> *_completionQueue;
    CDUnknownBlockType _completionBlock;
}

- (void).cxx_destruct;
- (void)main;
- (BOOL)isFinished;
- (BOOL)isExecuting;
- (void)_completeOperation;
- (void)start;
- (id)initWithType:(int)arg1 eventType:(int)arg2 logMsg:(id)arg3 remoteProxy:(id)arg4 runQueue:(id)arg5 completionQueue:(id)arg6 completionBlock:(CDUnknownBlockType)arg7;
- (id)init;

@end

