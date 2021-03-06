//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppKit/NSSharingServiceDelegate-Protocol.h>

@class NSString, _NSQuickAction;
@protocol _NSQuickActionItemSource;

__attribute__((visibility("hidden")))
@interface _NSExtensionQuickActionSharingServiceDelegate : NSObject <NSSharingServiceDelegate>
{
    _NSQuickAction *_quickAction;
    id <_NSQuickActionItemSource> _itemSource;
}

- (void).cxx_destruct;
- (id)anchoringViewForSharingService:(id)arg1 showRelativeToRect:(struct CGRect *)arg2 preferredEdge:(unsigned long long *)arg3;
- (id)sharingService:(id)arg1 sourceWindowForShareItems:(id)arg2 sharingContentScope:(long long *)arg3;
- (void)sharingService:(id)arg1 didShareItems:(id)arg2;
- (void)sharingService:(id)arg1 didFailToShareItems:(id)arg2 error:(id)arg3;
- (void)sharingService:(id)arg1 willShareItems:(id)arg2;
- (id)initWithQuickAction:(id)arg1 itemSource:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

