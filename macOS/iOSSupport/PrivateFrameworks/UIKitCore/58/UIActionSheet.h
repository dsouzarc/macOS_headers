//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIView.h>

#import <UIKitCore/UIPopoverControllerDelegate-Protocol.h>

@class NSMutableArray, NSString, UIAlertController, _UIAlertControllerShimPresenter;
@protocol UIActionSheetDelegate;

@interface UIActionSheet : UIView <UIPopoverControllerDelegate>
{
    UIAlertController *_alertController;
    _UIAlertControllerShimPresenter *_presenter;
    UIActionSheet *_retainedSelf;
    NSMutableArray *_actions;
    long long _cancelIndex;
    long long _firstOtherButtonIndex;
    long long _destructiveButtonIndex;
    long long _actionSheetStyle;
    BOOL _hasPreparedAlertActions;
    BOOL _isPresented;
    BOOL _alertControllerShouldDismiss;
    BOOL _handlingAlertActionShouldDismiss;
    BOOL _dismissingAlertController;
    id <UIActionSheetDelegate> _delegate;
    id _context;
}

@property(retain, nonatomic) id context; // @synthesize context=_context;
@property(nonatomic) __weak id <UIActionSheetDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)_titleLabel;
- (id)_alertController;
- (id)addButtonWithTitle:(id)arg1 label:(id)arg2;
- (void)_setAttributedTitleString:(id)arg1;
- (void)presentFromRect:(struct CGRect)arg1 inView:(id)arg2 direction:(unsigned long long)arg3 allowInteractionWithViews:(id)arg4 backgroundStyle:(long long)arg5 animated:(BOOL)arg6;
- (id)subtitle;
- (void)setSubtitle:(id)arg1;
- (void)setTaglineText:(id)arg1;
- (id)bodyText;
- (void)setBodyText:(id)arg1;
- (id)message;
- (void)setMessage:(id)arg1;
- (void)_didPresent;
- (void)_setIsPresented:(BOOL)arg1;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (void)_dismissForTappedIndex:(long long)arg1;
- (BOOL)_prepareToDismissForTappedIndex:(long long)arg1;
- (void)_prepareAlertActions;
- (id)_preparedAlertActionAtIndex:(unsigned long long)arg1;
- (void)_performPresentationDismissalWithClickedButtonIndex:(long long)arg1 animated:(BOOL)arg2;
- (void)dismissWithClickedButtonIndex:(long long)arg1 animated:(BOOL)arg2;
- (void)showInView:(id)arg1;
- (void)_showFromRect:(struct CGRect)arg1 inView:(id)arg2 direction:(unsigned long long)arg3 animated:(BOOL)arg4;
- (void)showFromRect:(struct CGRect)arg1 inView:(id)arg2 animated:(BOOL)arg3;
- (void)showFromBarButtonItem:(id)arg1 animated:(BOOL)arg2;
- (void)showFromTabBar:(id)arg1;
- (void)showFromToolbar:(id)arg1;
@property(readonly, nonatomic, getter=isVisible) BOOL visible;
@property(readonly, nonatomic) long long firstOtherButtonIndex;
- (void)_setFirstOtherButtonIndex:(long long)arg1;
@property(nonatomic) long long destructiveButtonIndex;
@property(nonatomic) long long cancelButtonIndex;
@property(readonly, nonatomic) long long numberOfButtons;
- (id)buttonTitleAtIndex:(long long)arg1;
- (long long)addButtonWithTitle:(id)arg1;
@property(nonatomic) long long actionSheetStyle;
@property(copy, nonatomic) NSString *title;
- (void)dealloc;
- (id)initWithTitle:(id)arg1 delegate:(id)arg2 cancelButtonTitle:(id)arg3 destructiveButtonTitle:(id)arg4 otherButtonTitles:(id)arg5;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

