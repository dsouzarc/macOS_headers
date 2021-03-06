//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MCPeerID, NSString;

@protocol MAPeerRouterDelegate <NSObject>

@optional
- (void)messageNotRouted:(NSString *)arg1 withArgument:(id)arg2;
- (void)didDisconnectFromPeerID:(MCPeerID *)arg1;
- (void)didConnectToPeerID:(MCPeerID *)arg1;
- (BOOL)shouldConnectToPeerID:(MCPeerID *)arg1 ofType:(long long)arg2;
- (void)availablePeersDidChange;
- (void)peerWasLost:(MCPeerID *)arg1;
- (void)peerWasFound:(MCPeerID *)arg1;
@end

