//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CoreWiFi/NSObject-Protocol.h>

@class CWFXPCConnection, CWFXPCEvent, CWFXPCRequest, CWFXPCRequestProxy;

@protocol CWFXPCRequestProxyDelegate <NSObject>
- (void)XPCRequestProxy:(CWFXPCRequestProxy *)arg1 sendXPCEvent:(CWFXPCEvent *)arg2 reply:(void (^)(void))arg3;
- (void)XPCRequestProxy:(CWFXPCRequestProxy *)arg1 XPCConnection:(CWFXPCConnection *)arg2 receivedXPCRequest:(CWFXPCRequest *)arg3;
@end

