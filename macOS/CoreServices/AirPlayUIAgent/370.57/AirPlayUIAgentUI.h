//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSTextFieldDelegate-Protocol.h"

@class NSButton, NSImageView, NSSecureTextField, NSString, NSTextField, NSWindow;

@interface AirPlayUIAgentUI : NSObject <NSTextFieldDelegate>
{
    NSImageView *_iconView;
    NSWindow *_passwordWindow;
    NSTextField *_passwordMajorText;
    NSTextField *_passwordErrorText;
    NSSecureTextField *_passwordText;
    NSButton *_passwordRememberCheckBox;
    NSButton *_passwordOKButton;
    NSButton *_passwordCancelButton;
    BOOL _waitingForResponse;
    CDUnknownBlockType _callbackBlock;
}

- (void)_closeWindow:(id)arg1;
- (void)_passwordCancel:(id)arg1;
- (void)_passwordOK:(id)arg1;
- (void)_updatePasswordOKButton;
- (void)controlTextDidChange:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

