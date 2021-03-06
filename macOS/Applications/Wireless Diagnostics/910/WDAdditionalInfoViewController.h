//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import "NSTextFieldDelegate-Protocol.h"

@class NSString, NSTextField;

@interface WDAdditionalInfoViewController : NSViewController <NSTextFieldDelegate>
{
    NSTextField *_additionalInfoTextField;
}

+ (id)screenViewName;
- (void).cxx_destruct;
- (BOOL)control:(id)arg1 textView:(id)arg2 doCommandBySelector:(SEL)arg3;
- (void)onBack:(id)arg1;
- (void)onNext:(id)arg1;
- (void)awakeFromNib;
- (void)showScreen;
- (void)unloadScreen;
- (void)loadScreen:(id)arg1;
- (id)nextTitle;
- (id)backTitle;
- (id)screenTitle;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

