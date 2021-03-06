//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSXPCConnection, NSXPCInterface;

@interface SMDebug_Client : NSObject
{
    NSXPCInterface *_daemonInterface;
    NSXPCConnection *_daemonConnection;
    id <SMDDebugProtocol> _daemonProxy;
}

- (void).cxx_destruct;
@property(retain) id <SMDDebugProtocol> daemonProxy; // @synthesize daemonProxy=_daemonProxy;
@property(retain) NSXPCConnection *daemonConnection; // @synthesize daemonConnection=_daemonConnection;
@property(retain) NSXPCInterface *daemonInterface; // @synthesize daemonInterface=_daemonInterface;
- (void)allowLocalNetworkServer;
- (void)forceSlowEnumeration;
- (void)preferBackgroundMigrations;
- (void)delaySpotlightIndexing;
- (void)disableIdleExit;
- (void)connectToDaemon;
- (id)init;

@end

