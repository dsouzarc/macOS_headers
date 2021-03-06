//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSObject<OS_dispatch_queue>;

@interface PLConcurrentQueue : NSObject
{
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSMutableArray *_internalQueue_pendingBlocks;
    long long _internalQueue_usedWidth;
    NSObject<OS_dispatch_queue> *_targetQueue;
    long long _width;
}

@property(readonly, nonatomic) long long width; // @synthesize width=_width;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *targetQueue; // @synthesize targetQueue=_targetQueue;
- (void).cxx_destruct;
- (void)_internalQueue_tryDispatchingNextPendingBlock;
- (void)dispatchAsync:(CDUnknownBlockType)arg1;
- (id)initWithTargetQueue:(id)arg1 width:(long long)arg2;
- (id)init;

@end

