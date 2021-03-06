//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

#import "NSControlTextEditingDelegate.h"
#import "NSTextFieldDelegate.h"

@class ASWriteReviewBodyView, ASWriteReviewConfiguration, NSAlert, NSString;

@interface ASReviewViewController : NSViewController <NSTextFieldDelegate, NSControlTextEditingDelegate>
{
    BOOL _isReadyToPublish;
    CDUnknownBlockType _completionBlock;
    ASWriteReviewConfiguration *_configuration;
    NSAlert *_alert;
    long long _state;
}

+ (id)stringByEscapingString:(id)arg1;
+ (id)queryStringForDictionary:(id)arg1 escapedValues:(BOOL)arg2;
+ (struct CGSize)preferredSizeForConfiguration:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(nonatomic) BOOL isReadyToPublish; // @synthesize isReadyToPublish=_isReadyToPublish;
@property(retain, nonatomic) NSAlert *alert; // @synthesize alert=_alert;
@property(retain, nonatomic) ASWriteReviewConfiguration *configuration; // @synthesize configuration=_configuration;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(readonly, nonatomic) ASWriteReviewBodyView *reviewView;
- (void)controlTextDidChange:(id)arg1;
- (BOOL)control:(id)arg1 textView:(id)arg2 doCommandBySelector:(SEL)arg3;
- (void)promptForNickNameWithMessage:(id)arg1;
- (void)publishReview;
- (void)transitionToLoadingCompleteAndPublishIfNeeded;
- (void)loadReviewMetadata;
@property(readonly, nonatomic) BOOL hasActiveRequest;
- (void)updateControls;
- (void)configureDialogView:(id)arg1;
- (void)loadView;
- (id)initWithConfiguration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

