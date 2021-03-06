//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TMAChartInspectorPaneController.h"

#import "NSPopoverDelegate-Protocol.h"
#import "TMAImageSwatchGridViewDelegate-Protocol.h"

@class NSArrayController, NSButton, NSString, NSTextField, TMAChartFillSetPopoverViewController, TSCHFillSet, TSKMacNSPopover;

@interface TMAChartFillSetInspectorPaneController : TMAChartInspectorPaneController <NSPopoverDelegate, TMAImageSwatchGridViewDelegate>
{
    NSArrayController *mArrayController;
    NSButton *mPresetButton;
    NSTextField *mPresetButtonLabel;
    TSKMacNSPopover *mPresetPopover;
    TMAChartFillSetPopoverViewController *mPresetPopoverViewController;
    TSCHFillSet *mFillSetOfLastMouseEnter;
    id mWindowResignObserver;
    BOOL mIsObservingAppearance;
    BOOL mNeedsUpdatePresetButtonImage;
}

+ (id)disclosureButtonTitleForEditingState:(id)arg1;
+ (unsigned long long)sortOrder;
+ (id)chartEditorProxyVisibilityKey;
+ (id)tabIdentifier;
+ (id)nibName;
@property(nonatomic) __weak NSTextField *presetButtonLabel; // @synthesize presetButtonLabel=mPresetButtonLabel;
@property(nonatomic) __weak NSButton *presetButton; // @synthesize presetButton=mPresetButton;
@property(retain, nonatomic) NSArrayController *arrayController; // @synthesize arrayController=mArrayController;
@property(nonatomic) __weak TMAChartFillSetPopoverViewController *presetPopoverViewController; // @synthesize presetPopoverViewController=mPresetPopoverViewController;
- (void).cxx_destruct;
- (void)popoverDidClose:(id)arg1;
- (void)gridView:(id)arg1 mouseExitedSwatch:(id)arg2;
- (void)gridView:(id)arg1 mouseEnteredSwatch:(id)arg2;
- (void)p_clearViewStyleProxies;
- (struct CGImage *)newImageForSwatch:(id)arg1 inGridView:(id)arg2;
- (void)p_updatePresetButtonImage;
- (id)p_presetButtonImageWithButtonImageName:(id)arg1;
- (id)p_presetButtonImageWithButtonImageName:(id)arg1 size:(struct CGSize)arg2 scale:(double)arg3;
- (struct CGSize)p_swatchSize;
- (id)currentChartColorsSwatches;
- (void)p_applyFillSet:(id)arg1;
- (void)p_showPresetPopover:(id)arg1;
- (void)updatePanes;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)awakeFromNib;
- (void)loadView;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

