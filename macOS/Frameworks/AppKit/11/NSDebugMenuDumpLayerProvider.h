//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSDebugMenuItemProvider.h"
#import "NSMenuDelegate.h"

@class NSMenu, NSMenuItem, NSString;

__attribute__((visibility("hidden")))
@interface NSDebugMenuDumpLayerProvider : NSObject <NSMenuDelegate, NSDebugMenuItemProvider>
{
    NSMenu *_windowsMenu;
}

- (void)_dumpLayerForFunctionRow:(id)arg1;
- (void)_dumpLayerForView:(id)arg1;
- (void)_dumpLayerForWindow:(id)arg1;
- (BOOL)menuHasKeyEquivalent:(id)arg1 forEvent:(id)arg2 target:(id *)arg3 action:(SEL *)arg4;
- (void)menuNeedsUpdate:(id)arg1;
@property(readonly, copy) NSMenuItem *menuItem;
- (id)windowsMenuCreateIfNecessary;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

