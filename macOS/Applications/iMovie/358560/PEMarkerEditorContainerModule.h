//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "LKViewModule.h"

#import "FFMarkerEditorDelegate.h"
#import "NSPopoverDelegate.h"
#import "NSWindowDelegate.h"

@class FFMarkerEditorViewModule, NSPopover, NSString;

@interface PEMarkerEditorContainerModule : LKViewModule <FFMarkerEditorDelegate, NSWindowDelegate, NSPopoverDelegate>
{
    FFMarkerEditorViewModule *_markerEditorModule;
    NSPopover *_markerEditorPopover;
    id _currentEditorModule;
    BOOL _movingEditorToNewMarker;
    BOOL _closingWindow;
}

- (void)shouldDeleteMarkerDisplayedInEditor:(id)arg1;
- (void)markerEditorShouldClose:(id)arg1;
- (void)_handlePlayPause:(id)arg1;
- (BOOL)canBeginSkimming;
- (BOOL)markerEditorIsShown;
- (void)hideMarkerEditor;
- (void)popoverWillClose:(id)arg1;
- (void)showMarkerEditorAtTime:(CDStruct_1b6d18a9)arg1 forObject:(id)arg2 forEditorModule:(id)arg3;
- (void)showMarkerEditorForMarkerLayer:(id)arg1 object:(id)arg2 editorModule:(id)arg3;
- (void)_showMarkerEditorForMarker:(id)arg1 targetRectInGlobalSpace:(struct CGRect)arg2 object:(id)arg3 editorModule:(id)arg4;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)module:(id)arg1 willRemoveSubmodule:(id)arg2;
- (void)module:(id)arg1 didAddSubmodule:(id)arg2;
- (void)cleanup;
- (void)moduleViewWillBeRemoved:(id)arg1;
- (void)moduleViewWasInstalled:(id)arg1;
- (struct CGSize)viewMinSize;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

