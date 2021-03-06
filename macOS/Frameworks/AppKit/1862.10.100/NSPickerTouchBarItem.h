//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSTouchBarItem.h>

@class NSButton, NSColor, NSImage, NSSegmentedControl, NSString;

@interface NSPickerTouchBarItem : NSTouchBarItem
{
    id _target;
    SEL _action;
    NSString *_customizationLabel;
    NSString *_collapsedRepresentationLabel;
    NSImage *_collapsedRepresentationImage;
    long long _controlRepresentation;
    NSSegmentedControl *_segmentedControl;
    NSButton *_collapsedRepresentationButton;
    id _overlay;
}

+ (id)makeStandardActivatePopoverGestureRecognizer;
+ (id)keyPathsForValuesAffectingView;
+ (id)pickerTouchBarItemWithIdentifier:(id)arg1 images:(id)arg2 selectionMode:(long long)arg3 target:(id)arg4 action:(SEL)arg5;
+ (id)pickerTouchBarItemWithIdentifier:(id)arg1 labels:(id)arg2 selectionMode:(long long)arg3 target:(id)arg4 action:(SEL)arg5;
@property SEL action; // @synthesize action=_action;
@property __weak id target; // @synthesize target=_target;
- (void).cxx_destruct;
- (void)dealloc;
- (id)makeStandardActivatePopoverGestureRecognizer;
- (id)_disclosureTouchBar;
- (void)_showPressHoldPopup:(id)arg1;
- (void)_showPopover;
- (void)_updateCollapsedRepresentationRepresentation;
- (void)_updateControlRepresentation;
- (BOOL)usesSelectedLabelOrImage;
- (id)_effectiveCollapsedRepresentationImage;
- (id)_effectiveCollapsedRepresentationLabel;
@property long long controlRepresentation;
@property(retain) NSImage *collapsedRepresentationImage;
@property(copy) NSString *collapsedRepresentationLabel;
@property(copy) NSString *customizationLabel;
- (void)setLabel:(id)arg1 atIndex:(long long)arg2;
- (id)labelAtIndex:(long long)arg1;
- (void)setImage:(id)arg1 atIndex:(long long)arg2;
- (id)imageAtIndex:(long long)arg1;
@property long long numberOfOptions;
@property long long selectionMode;
@property(copy) NSColor *selectionColor;
@property long long selectedIndex;
- (id)segmentedControl;
- (void)_performAction;
- (id)view;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1;

@end

