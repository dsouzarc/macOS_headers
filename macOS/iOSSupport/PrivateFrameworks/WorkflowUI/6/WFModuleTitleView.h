//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <WorkflowUI/WFActionEventObserver-Protocol.h>

@class NSString, UIButton, WFAction, WFModuleTitleButton;
@protocol WFModuleTitleViewDelegate;

@interface WFModuleTitleView : UIView <WFActionEventObserver>
{
    BOOL _hideSubtitle;
    id <WFModuleTitleViewDelegate> _delegate;
    WFAction *_action;
    unsigned long long _accessoryMode;
    unsigned long long _style;
    WFModuleTitleButton *_titleButton;
    UIButton *_handoffButton;
    UIButton *_installButton;
}

+ (double)viewHeight;
@property(nonatomic) __weak UIButton *installButton; // @synthesize installButton=_installButton;
@property(nonatomic) __weak UIButton *handoffButton; // @synthesize handoffButton=_handoffButton;
@property(readonly, nonatomic) __weak WFModuleTitleButton *titleButton; // @synthesize titleButton=_titleButton;
@property(nonatomic) BOOL hideSubtitle; // @synthesize hideSubtitle=_hideSubtitle;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
@property(nonatomic) unsigned long long accessoryMode; // @synthesize accessoryMode=_accessoryMode;
@property(retain, nonatomic) WFAction *action; // @synthesize action=_action;
@property(nonatomic) __weak id <WFModuleTitleViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (BOOL)toggleFavorited;
- (BOOL)installAction;
- (id)accessibilityCustomActions;
- (id)accessibilityHint;
- (id)accessibilityValue;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (BOOL)isAccessibilityElement;
- (void)handoffButtonPressed:(id)arg1;
- (void)installButtonPressed:(id)arg1;
- (void)actionNameDidChange:(id)arg1;
- (void)layoutSubviews;
- (void)configureWithTitle:(id)arg1 subtitle:(id)arg2 applicationBundleIdentifer:(id)arg3;
- (void)dealloc;
- (void)updateFont;
- (id)initWithFrame:(struct CGRect)arg1;
- (double)imageViewWidth;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

