//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/_NSQuickAction.h>

__attribute__((visibility("hidden")))
@interface _NSLegacyServiceQuickAction : _NSQuickAction
{
    id <_NSServiceAction> _legacyServiceAction;
}

+ (id)quickActionForPresentation:(id)arg1 serviceAction:(id)arg2;
@property(readonly) id <_NSServiceAction> _legacyServiceAction; // @synthesize _legacyServiceAction;
- (void).cxx_destruct;
- (BOOL)canMoveToTrash;
- (id)_bundleURL;
- (Class)_preferencesClass;
- (Class)_validationClass;
- (void)performWithItemSource:(id)arg1;
- (BOOL)needsItemSource;
- (long long)type;
- (void)loadColorOnQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)hasColor;
- (void)loadIconOnQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)hasIcon;
- (id)title;
- (id)init;
- (id)initForPresentation:(id)arg1 legacyServiceAction:(id)arg2;

@end

