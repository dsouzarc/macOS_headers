//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class HMDCloudShareMessenger, NSData;

@protocol HMDCloudShareMessengerDelegate <NSObject>
- (void)messengerDidReceiveInvitationRequest:(HMDCloudShareMessenger *)arg1;
- (void)messenger:(HMDCloudShareMessenger *)arg1 didReceiveInvitationData:(NSData *)arg2 completion:(void (^)(BOOL, NSError *))arg3;
@end

