//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class HMDStreamingManager, NSError, NSNumber;

@protocol HMDStreamingManagerDelegate <NSObject>
- (void)streamingManagerDidUpdateConfiguration:(HMDStreamingManager *)arg1;
- (void)streamingManagerDidNetworkDeteriorate:(HMDStreamingManager *)arg1;
- (void)streamingManagerDidNetworkImprove:(HMDStreamingManager *)arg1;
- (void)streamingManagerDidStopStream:(HMDStreamingManager *)arg1 error:(NSError *)arg2;
- (void)streamingManagerDidReceiveFirstFrame:(HMDStreamingManager *)arg1 audioStreamSetting:(unsigned long long)arg2 aspectRatio:(NSNumber *)arg3 slotIdentifier:(NSNumber *)arg4;
- (void)streamingManager:(HMDStreamingManager *)arg1 didStartStream:(NSError *)arg2 slotIdentifier:(NSNumber *)arg3;

@optional
- (void)streamingManager:(HMDStreamingManager *)arg1 didStartRelay:(NSError *)arg2;
@end

