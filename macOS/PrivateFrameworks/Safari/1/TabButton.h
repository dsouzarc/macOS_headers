//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Safari/TabBarViewButton.h>

#import "NSAccessibilityRadioButton.h"
#import "RolloverTrackingButtonDelegate.h"

@class BackgroundColorView, CALayer, NSArray, NSImage, NSImageView, NSLayoutConstraint, NSMutableArray, NSStackView, NSString, NSTextField, NSView, NSVisualEffectView, RolloverImageButton;

__attribute__((visibility("hidden")))
@interface TabButton : TabBarViewButton <NSAccessibilityRadioButton, RolloverTrackingButtonDelegate>
{
    BOOL _didEstablishTabBarViewItemBindings;
    NSMutableArray *_accessoryViews;
    NSView *_mainContentClippingContainer;
    NSStackView *_mainContentContainer;
    NSStackView *_titleContainerView;
    NSTextField *_titleTextField;
    NSView *_focusRingView;
    RolloverImageButton *_closeButton;
    NSView *_iconViewContainer;
    NSImageView *_iconView;
    NSVisualEffectView *_iconFullScreenVisualEffectView;
    BackgroundColorView *_iconFullScreenBackgroundView;
    CALayer *_iconFullScreenBackgroundHighlightLayer;
    NSLayoutConstraint *_mainContentContainerWidthConstraint;
    NSLayoutConstraint *_mainContentContainerLeftConstraint;
    NSLayoutConstraint *_mainContentContainerRightConstraint;
    NSLayoutConstraint *_mainContentContainerHorizontalCenteringConstraint;
    NSLayoutConstraint *_titleContainerViewHorizontalCenteringConstraint;
    BOOL _canShowCloseButton;
    BOOL _pinned;
    BOOL _showIcon;
    BOOL _showingCloseButton;
    BOOL _forOffscreenRendering;
    id <TabButtonDelegate> _delegate;
    id <TabBarViewItem> _tabBarViewItem;
    NSString *_title;
    long long _alignment;
    NSImage *_image;
    double _buttonWidthForTitleLayout;
    double _mainContentContainerCenterOffset;
    double _titleTextFieldCenterOffset;
}

+ (id)titleFont;
+ (double)titleWidthForButtonWidth:(double)arg1;
@property(nonatomic, getter=isForOffscreenRendering) BOOL forOffscreenRendering; // @synthesize forOffscreenRendering=_forOffscreenRendering;
@property(nonatomic) double titleTextFieldCenterOffset; // @synthesize titleTextFieldCenterOffset=_titleTextFieldCenterOffset;
@property(nonatomic) double mainContentContainerCenterOffset; // @synthesize mainContentContainerCenterOffset=_mainContentContainerCenterOffset;
@property(nonatomic) double buttonWidthForTitleLayout; // @synthesize buttonWidthForTitleLayout=_buttonWidthForTitleLayout;
@property(nonatomic, getter=isShowingCloseButton) BOOL showingCloseButton; // @synthesize showingCloseButton=_showingCloseButton;
@property(retain, nonatomic) NSImage *image; // @synthesize image=_image;
@property(nonatomic) BOOL showIcon; // @synthesize showIcon=_showIcon;
@property(nonatomic, getter=isPinned) BOOL pinned; // @synthesize pinned=_pinned;
@property(nonatomic) BOOL canShowCloseButton; // @synthesize canShowCloseButton=_canShowCloseButton;
@property(copy, nonatomic) NSArray *accessoryViews; // @synthesize accessoryViews=_accessoryViews;
@property(nonatomic) long long alignment; // @synthesize alignment=_alignment;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly) id <TabBarViewItem> tabBarViewItem; // @synthesize tabBarViewItem=_tabBarViewItem;
@property(nonatomic) __weak id <TabButtonDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_updateAccessibilityChildren;
- (void)_updateAccessibilityProperties;
- (id)accessibilityValue;
- (id)accessibilityLabel;
- (BOOL)accessibilityPerformPress;
- (BOOL)accessibilityPerformShowMenu;
- (void)rolloverTrackingButtonDidResignFirstResponder:(id)arg1;
- (void)rolloverTrackingButtonDidBecomeFirstResponder:(id)arg1;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (BOOL)acceptsFirstResponder;
- (void)updateLayer;
- (id)_titleAttributedStringForDragAndDrop;
- (id)pinnedTabDragImageOfSize:(struct CGSize)arg1;
- (id)tabDragImageOfSize:(struct CGSize)arg1;
- (id)_titleColorForMainWindow:(BOOL)arg1 activeTab:(BOOL)arg2;
- (void)_updateTitleTextField;
- (void)setHasPressedHighlight:(BOOL)arg1;
- (void)setHasMouseOverHighlight:(BOOL)arg1 shouldAnimateCloseButton:(BOOL)arg2;
- (void)_closeButtonClicked:(id)arg1;
- (BOOL)_shouldShowCloseButton;
- (BOOL)_canShowCloseButton;
- (BOOL)_shouldShowIconView;
- (void)_reconfigureFullScreenViewsUsingVisualEffectViews:(BOOL)arg1;
- (void)_removeIconVisualEffectViewForFullScreenToolbarWindow;
- (void)_addIconVisualEffectViewForFullScreenToolbarWindow;
- (void)_updateIconFullScreenBackgroundColor;
- (void)_setUpTabButtonConstraints;
- (void)_setUpIconViewConstraints;
- (void)_updateConstraints;
- (void)setForcesActiveWindowState:(BOOL)arg1;
- (void)setActive:(BOOL)arg1;
- (void)dealloc;
- (id)menuForEvent:(id)arg1;
- (void)_windowChangedKeyState;
- (void)viewDidMoveToWindow;
- (void)_establishTabBarViewItemBindingsIfNecessary;
- (void)keyDown:(id)arg1;
- (void)viewWillMoveToWindow:(id)arg1;
- (BOOL)mouseDownCanMoveWindow;
- (void)_updateKeyViewLoop;
- (id)initWithFrame:(struct CGRect)arg1 tabBarViewItem:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

