//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSExtensionContext.h>

#import <NotificationCenter/NCRemoteViewExtensionContextProtocol-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface NCNotificationExtensionHostContext : NSExtensionContext <NCRemoteViewExtensionContextProtocol>
{
    id _delegate;
}

+ (id)_extensionAuxiliaryVendorProtocol;
+ (id)_extensionAuxiliaryHostProtocol;
+ (id)serviceInterface;
+ (id)hostInterface;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (BOOL)conformsToProtocol:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

