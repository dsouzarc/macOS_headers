//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface BrowserExtensionMenuItemTarget : NSObject
{
    struct RefPtr<Safari::ExtensionMenuItem, WTF::DumbPtrTraits<Safari::ExtensionMenuItem>> _extensionMenuItem;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (void)dispatchCommandEvent:(id)arg1;
- (id)initWithExtensionMenuItem:(struct ExtensionMenuItem *)arg1;

@end

