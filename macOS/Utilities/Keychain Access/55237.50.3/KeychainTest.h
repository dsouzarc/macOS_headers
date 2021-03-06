//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDate;

@interface KeychainTest : NSObject
{
    NSDate *_startTime;
    double _duration;
    id _kct_reserved;
}

- (long long)testKeychainItems;
- (void)runTest:(unsigned long long)arg1 duration:(double)arg2;
- (BOOL)shouldKeepRunning;
- (void)setStartTime:(id)arg1 duration:(double)arg2;
- (void)dealloc;
- (id)initWithApplication:(id)arg1;

@end

