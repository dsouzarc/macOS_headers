//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "App_Store.ClickableView.h"

@class NSAttributedString, NSBezierPath, NSColor, NSFont, NSString, _TtC9App_Store20DynamicTypeTextField;

@interface App_Store.ButtonView : App_Store.ClickableView
{
    // Error parsing type: , name: titleLabelView
    // Error parsing type: , name: titleColor
    // Error parsing type: , name: borderWidth
    // Error parsing type: , name: borderColor
    // Error parsing type: , name: cornerRadius
    // Error parsing type: , name: backgroundColor
    // Error parsing type: , name: layoutMargins
    // Error parsing type: , name: actionBlockTrampoline
    // Error parsing type: , name: minimumSize
    // Error parsing type: , name: maximumSize
    // Error parsing type: , name: isImportantForAccessibility
}

+ (struct CGSize)estimatedSizeWithFitting:(struct CGSize)arg1 title:(id)arg2 font:(id)arg3 layoutMargins:(struct NSEdgeInsets)arg4 minimumSize:(struct CGSize)arg5 maximumSize:(struct CGSize)arg6 in:(id)arg7;
+ (id)makeTitleLabelView;
+ (id)makeBorderlessButton;
+ (id)makeRoundedButton;
+ (id)defaultFont;
+ (struct CGSize)defaultMaximumSize;
+ (struct CGSize)defaultMinimumSize;
+ (struct NSEdgeInsets)defaultLayoutMargins;
- (CDUnknownBlockType).cxx_destruct;
- (BOOL)accessibilityPerformPress;
- (id)accessibilityChildren;
- (id)accessibilityTitle;
- (id)accessibilityRole;
- (BOOL)accessibilityShouldUseUniqueId;
- (BOOL)isAccessibilityElement;
@property(nonatomic) BOOL isImportantForAccessibility; // @synthesize isImportantForAccessibility;
- (void)drawRect:(struct CGRect)arg1;
- (void)drawFocusRingMask;
@property(nonatomic, readonly) struct CGRect focusRingMaskBounds;
@property(nonatomic, readonly) NSBezierPath *backgroundPath;
@property(nonatomic, readonly) struct CGRect backgroundRect;
- (void)layout;
@property(nonatomic, readonly) BOOL hasContent;
@property(nonatomic, readonly) struct CGRect layoutFrame;
- (BOOL)isFlipped;
@property(nonatomic, readonly) struct CGSize intrinsicContentSize;
- (struct JEMeasurements)measurementsWithFitting:(struct CGSize)arg1 in:(id)arg2;
- (void)sizeToFit;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)titleLabelSizeWithFitting:(struct CGSize)arg1;
@property(nonatomic) struct CGSize maximumSize; // @synthesize maximumSize;
@property(nonatomic) struct CGSize minimumSize; // @synthesize minimumSize;
@property(nonatomic) struct CGRect frame;
@property(nonatomic, copy) CDUnknownBlockType actionBlock;
- (void)didChangeState;
@property(nonatomic) struct NSEdgeInsets layoutMargins; // @synthesize layoutMargins;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius;
@property(nonatomic, retain) NSColor *borderColor; // @synthesize borderColor;
@property(nonatomic) double borderWidth; // @synthesize borderWidth;
@property(nonatomic, retain) NSFont *titleFont;
@property(nonatomic, retain) NSAttributedString *attributedTitle;
@property(nonatomic, copy) NSString *title;
- (void)updateTitleLabelViewAppearance;
@property(nonatomic, readonly) _TtC9App_Store20DynamicTypeTextField *titleLabelView; // @synthesize titleLabelView;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(nonatomic, readonly) BOOL flipped;

@end

