//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TMAGraphicInspectorPaneController.h"

@class TMAFillPresetPopoverViewController;

@interface TMAFillGraphicInspectorPaneController : TMAGraphicInspectorPaneController
{
    TMAFillPresetPopoverViewController *mPresetPopoverViewController;
    id mSavedRepresentedObject;
}

+ (Class)presetPopoverClass;
- (void)updateDisclosureWithAnimation:(BOOL)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3;
- (void)updateEditorWithDisclosure;
- (void)setRepresentedObject:(id)arg1;
- (void)willPresentPresetPopoverViewController:(id)arg1 inPopover:(id)arg2;
@property(nonatomic) BOOL shouldShowNoFillButton;
- (id)p_fillPresetPopoverViewController;
- (id)presetPopoverViewController;
- (void)drawPresetSwatchForValue:(id)arg1 inRect:(struct CGRect)arg2;
- (void)dealloc;

@end

