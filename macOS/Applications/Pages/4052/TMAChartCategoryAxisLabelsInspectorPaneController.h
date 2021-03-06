//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TMAChartInspectorPaneGroupController.h"

@class NSArrayController, NSPopUpButton, NSStepper, NSTextField, TMAChartReferenceEditorPaneController, TMAInspectorTextField, TMAMultipleValuesSlider;

@interface TMAChartCategoryAxisLabelsInspectorPaneController : TMAChartInspectorPaneGroupController
{
    NSArrayController *mAxisArrayController;
    NSPopUpButton *mSpacingPopupButton;
    TMAInspectorTextField *mShowEveryTextField;
    NSStepper *mShowEveryStepper;
    NSTextField *mLabelAngleLabel;
    NSPopUpButton *mLabelAnglePopup;
    TMAMultipleValuesSlider *mLabelAngleSlider;
    TMAInspectorTextField *mLabelAngleTextField;
    NSStepper *mLabelAngleStepper;
    long long mPreviousCustomSpacing;
    BOOL mNeedsUpdateCategoryLabelFormulas;
    TMAChartReferenceEditorPaneController *_refEditorController;
}

+ (int)defaultDisclosureState;
+ (id)disclosureButtonTitleForEditingState:(id)arg1;
+ (id)p_keyPathForShowLast;
+ (id)p_keyPathForCategoryLabelFormulas;
+ (id)p_keyPathForShowLabels;
+ (id)p_keyPathForSpacing;
+ (unsigned long long)sortOrder;
+ (id)chartEditorProxyVisibilityKey;
+ (id)tabIdentifier;
+ (id)nibName;
@property(nonatomic) TMAChartReferenceEditorPaneController *refEditorController; // @synthesize refEditorController=_refEditorController;
@property(nonatomic) NSStepper *labelAngleStepper; // @synthesize labelAngleStepper=mLabelAngleStepper;
@property(nonatomic) TMAInspectorTextField *labelAngleTextField; // @synthesize labelAngleTextField=mLabelAngleTextField;
@property(nonatomic) TMAMultipleValuesSlider *labelAngleSlider; // @synthesize labelAngleSlider=mLabelAngleSlider;
@property(nonatomic) NSPopUpButton *labelAnglePopup; // @synthesize labelAnglePopup=mLabelAnglePopup;
@property(nonatomic) NSTextField *labelAngleLabel; // @synthesize labelAngleLabel=mLabelAngleLabel;
@property(nonatomic) NSStepper *showEveryStepper; // @synthesize showEveryStepper=mShowEveryStepper;
@property(nonatomic) TMAInspectorTextField *showEveryTextField; // @synthesize showEveryTextField=mShowEveryTextField;
@property(nonatomic) NSPopUpButton *spacingPopupButton; // @synthesize spacingPopupButton=mSpacingPopupButton;
@property(retain, nonatomic) NSArrayController *axisArrayController; // @synthesize axisArrayController=mAxisArrayController;
- (BOOL)shouldHideCheckBox;
- (void)p_showLastSelected:(id)arg1;
- (void)p_updateShowLastMenuItemState;
- (void)p_buildShowLastMenu;
- (BOOL)p_showLastLabel;
- (void)p_updateCategoryLabelFormulas;
- (void)p_buildSpacingMenu;
- (void)p_updateSpacingUIForTag:(long long)arg1;
- (void)p_updateSelectedSpacingItem;
- (long long)p_spacingTagForSelection;
- (long long)p_tagForSpacing:(long long)arg1;
- (void)p_spacingMenuItemSelected:(id)arg1;
@property(readonly, nonatomic) BOOL hideCustomSpacingControls;
- (void)p_buildMenuFromArray:(id)arg1 action:(SEL)arg2 button:(id)arg3;
- (void)updatePanes;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (void)loadView;

@end

