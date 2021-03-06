//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIViewController;
@protocol _UIKeyboardAutoRespondingScrollViewController;

__attribute__((visibility("hidden")))
@interface UIAutoRespondingScrollViewControllerKeyboardSupport : NSObject
{
    UIViewController<_UIKeyboardAutoRespondingScrollViewController> *_viewController;
    double _adjustmentForKeyboard;
    unsigned int _viewIsDisappearing:1;
    unsigned int _registeredForNotifications:1;
}

@property(nonatomic) double adjustmentForKeyboard; // @synthesize adjustmentForKeyboard=_adjustmentForKeyboard;
- (void).cxx_destruct;
- (void)_keyboardDidChangeFrame:(id)arg1;
- (void)_keyboardDidHide:(id)arg1;
- (void)_keyboardWillHide:(id)arg1;
- (void)_keyboardDidShow:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;
- (void)_adjustScrollViewForKeyboardInfo:(id)arg1;
- (id)initWithViewController:(id)arg1;
@property(nonatomic) BOOL registeredForNotifications;
@property(nonatomic) BOOL viewIsDisappearing;

@end

