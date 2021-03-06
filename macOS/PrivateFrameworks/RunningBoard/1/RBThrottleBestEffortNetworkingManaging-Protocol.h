//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <RunningBoard/NSObject-Protocol.h>

@class RBProcess, RBProcessStateChangeSet, RBSystemState;

@protocol RBThrottleBestEffortNetworkingManaging <NSObject>
- (BOOL)isThrottleBestEffortNetworkingEnabled;
- (void)removeProcess:(RBProcess *)arg1;
- (void)addProcess:(RBProcess *)arg1;
- (void)applySystemState:(RBSystemState *)arg1;
- (void)didUpdateProcessStates:(RBProcessStateChangeSet *)arg1;
@end

