//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import <HomeUI/HUCellProtocol-Protocol.h>
#import <HomeUI/HUDisableableCellProtocol-Protocol.h>

@class HFItem, HUIconCellContentMetrics, HUIconView, NSArray, NSString, UIColor, UILabel, UILayoutGuide, UIView;
@protocol HUResizableCellDelegate;

@interface HUIconCell : UITableViewCell <HUCellProtocol, HUDisableableCellProtocol>
{
    BOOL _disabled;
    BOOL _hideIcon;
    BOOL _iconForegroundColorFollowsTintColor;
    BOOL _iconTintColorFollowsDisabledState;
    BOOL _separatorInsetLinesUpWithText;
    HFItem *_item;
    UIColor *_iconForegroundColor;
    double _iconAlpha;
    HUIconCellContentMetrics *_contentMetrics;
    unsigned long long _iconDisplayStyle;
    NSArray *_staticConstraints;
    NSArray *_dynamicConstraints;
    NSArray *_iconSpacingConstraints;
    UIView *_containerView;
    HUIconView *_iconView;
    UILayoutGuide *_iconSpacingLayoutGuide;
}

+ (BOOL)requiresConstraintBasedLayout;
@property(retain, nonatomic) UILayoutGuide *iconSpacingLayoutGuide; // @synthesize iconSpacingLayoutGuide=_iconSpacingLayoutGuide;
@property(retain, nonatomic) HUIconView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) NSArray *iconSpacingConstraints; // @synthesize iconSpacingConstraints=_iconSpacingConstraints;
@property(retain, nonatomic) NSArray *dynamicConstraints; // @synthesize dynamicConstraints=_dynamicConstraints;
@property(retain, nonatomic) NSArray *staticConstraints; // @synthesize staticConstraints=_staticConstraints;
@property(nonatomic) BOOL separatorInsetLinesUpWithText; // @synthesize separatorInsetLinesUpWithText=_separatorInsetLinesUpWithText;
@property(nonatomic) BOOL iconTintColorFollowsDisabledState; // @synthesize iconTintColorFollowsDisabledState=_iconTintColorFollowsDisabledState;
@property(nonatomic) unsigned long long iconDisplayStyle; // @synthesize iconDisplayStyle=_iconDisplayStyle;
@property(retain, nonatomic) HUIconCellContentMetrics *contentMetrics; // @synthesize contentMetrics=_contentMetrics;
@property(nonatomic) double iconAlpha; // @synthesize iconAlpha=_iconAlpha;
@property(nonatomic) BOOL iconForegroundColorFollowsTintColor; // @synthesize iconForegroundColorFollowsTintColor=_iconForegroundColorFollowsTintColor;
@property(retain, nonatomic) UIColor *iconForegroundColor; // @synthesize iconForegroundColor=_iconForegroundColor;
@property(nonatomic) BOOL hideIcon; // @synthesize hideIcon=_hideIcon;
@property(nonatomic, getter=isDisabled) BOOL disabled; // @synthesize disabled=_disabled;
@property(retain, nonatomic) HFItem *item; // @synthesize item=_item;
- (void).cxx_destruct;
- (void)_updateIcon;
- (void)_createIconView;
- (void)_invalidateDynamicConstraints;
- (id)_verticalConstraintsForContentSubview:(id)arg1;
- (void)updateUIWithAnimation:(BOOL)arg1;
- (void)layoutSubviews;
- (void)updateConstraints;
@property(nonatomic) BOOL disableContinuousIconAnimation;
- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) UILabel *detailTextLabel; // @dynamic detailTextLabel;
@property(readonly) unsigned long long hash;
@property(nonatomic) __weak id <HUResizableCellDelegate> resizingDelegate;
@property(readonly) Class superclass;
@property(readonly, nonatomic) UILabel *textLabel; // @dynamic textLabel;

@end

