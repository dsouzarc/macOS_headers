//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSuggestionsInternals/NSXPCListenerDelegate-Protocol.h>

@class NSString, _PASLock;

@interface SGPortraitRequestServerDelegate : NSObject <NSXPCListenerDelegate>
{
    CDUnknownBlockType _makeHandler;
    _PASLock *_handlerCache;
}

- (void).cxx_destruct;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)initWithMakeHandler:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

