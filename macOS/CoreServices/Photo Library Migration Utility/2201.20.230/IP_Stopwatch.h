//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Cocoa/NSObject.h>

@interface IP_Stopwatch : NSObject
{
    unsigned long long m_start;
    unsigned long long m_stop;
    CDUnknownFunctionPointerType m_timeFN;
}

+ (id)cpuStopwatch;
+ (id)stopwatch;
- (id)init;
- (double)absoluteTicksPerNanosecond;
- (unsigned long long)nanoseconds;
- (unsigned long long)absoluteTicks;
- (double)microseconds;
- (double)milliseconds;
- (double)seconds;
- (void)reset;
- (void)stop;
- (BOOL)isRunning;
- (void)start;
- (id)initForCPUTime:(BOOL)arg1;

@end

