//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NetworkExtension/NEFilterExtensionProviderHostContext.h>

#import "NEFilterExtensionProviderProtocol.h"
#import "NEFilterPacketExtensionProviderHostProtocol.h"

@class NSString;

@interface NEFilterPacketExtensionProviderHostContext : NEFilterExtensionProviderHostContext <NEFilterExtensionProviderProtocol, NEFilterPacketExtensionProviderHostProtocol>
{
}

+ (id)_extensionAuxiliaryHostProtocol;
- (void)createPacketChannelWithCompletionHandler:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

