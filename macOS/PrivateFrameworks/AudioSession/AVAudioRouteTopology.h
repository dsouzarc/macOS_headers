//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVAudioHardwareClock, NSArray, NSString;

@interface AVAudioRouteTopology : NSObject
{
}

@property(readonly, nonatomic) unsigned long long policy;
@property(readonly, nonatomic) NSString *name;
- (unsigned long long)devicesCount;
- (id)connectedDevices;
- (unsigned long long)connectedDevicesCount;
- (id)streams:(unsigned long long)arg1 IOBufferChannel:(unsigned long long)arg2 direction:(unsigned int)arg3;
- (id)streams:(unsigned long long)arg1 direction:(unsigned int)arg2;
- (id)streams:(unsigned int)arg1;
- (unsigned long long)channelCount:(unsigned long long)arg1 direction:(unsigned int)arg2;
- (unsigned long long)streamCount:(unsigned int)arg1;
@property(readonly, nonatomic) NSArray *streamTopologies;
@property(readonly, nonatomic) NSString *UID;
- (id)initWithStreamTopologies:(id)arg1 name:(id)arg2 masterClock:(id)arg3 policy:(unsigned long long)arg4;
@property(readonly, nonatomic) AVAudioHardwareClock *masterClock;

@end

