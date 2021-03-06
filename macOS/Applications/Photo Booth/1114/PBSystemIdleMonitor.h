//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface PBSystemIdleMonitor : NSObject
{
    id _globalEventMonitor;
    id _localEventMonitor;
    NSMutableDictionary *_listenerLookup;
    NSMutableDictionary *_timerLookup;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)listenForNextSystemActivity;
- (void)_receivedEvent;
- (double)idleTime;
- (void)_timerActionOnSystemBecameActive;
- (void)_timeoutTimerFired:(id)arg1;
- (id)_createTimerWithInterval:(double)arg1 originalInterval:(double)arg2;
- (void)removeTimeoutListener:(id)arg1;
- (void)addTimeoutListener:(id)arg1 seconds:(unsigned long long)arg2;
- (void)dealloc;

@end

