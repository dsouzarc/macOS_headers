//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import <Safari/InlineAuthorizationViewControllerDelegate-Protocol.h>

@class InlineAuthorizationViewController, NSButton, NSView;
@protocol AuthorizationSheetViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface AuthorizationSheetViewController : NSViewController <InlineAuthorizationViewControllerDelegate>
{
    InlineAuthorizationViewController *_inlineAuthorizationViewController;
    id <AuthorizationSheetViewControllerDelegate> _delegate;
    NSView *_authorizationView;
    NSButton *_cancelButton;
    NSButton *_unlockButton;
}

@property(nonatomic) __weak NSButton *unlockButton; // @synthesize unlockButton=_unlockButton;
@property(nonatomic) __weak NSButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(nonatomic) __weak NSView *authorizationView; // @synthesize authorizationView=_authorizationView;
@property(nonatomic) __weak id <AuthorizationSheetViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) InlineAuthorizationViewController *inlineAuthorizationViewController; // @synthesize inlineAuthorizationViewController=_inlineAuthorizationViewController;
- (void).cxx_destruct;
- (void)cancelAuthentication:(id)arg1;
- (void)controllerAuthorizationDidSucceed:(id)arg1;
- (void)attemptAuthorization:(id)arg1;
- (void)cancelAuthorization:(id)arg1;
- (void)viewDidLoad;
- (id)initWithInlineAuthorizationViewController:(id)arg1;

@end

