//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

@class NSTextView, NSView;

@interface termsWindow : NSWindowController
{
    NSView *mainView;
    NSWindowController *_controllerWindow;
    NSTextView *_termsContentView;
}

@property NSTextView *termsContentView; // @synthesize termsContentView=_termsContentView;
@property(retain, nonatomic) NSWindowController *controllerWindow; // @synthesize controllerWindow=_controllerWindow;
- (void).cxx_destruct;
- (void)windowWillClose:(id)arg1;
- (void)quitApp:(id)arg1;
- (void)agreeToTerms:(id)arg1;
- (void)windowDidLoad;

@end

