//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FLUTableCellView.h"

#import "FLUMessageRecipientInputViewDelegate.h"

@class FLUBlurView, FLUBorderView, FLUImageView, FLUMessageRecipientInputView, FLUTextFieldLabel, FLUView, NSString;

@interface FLUMediaTableConversationComposeHeaderView : FLUTableCellView <FLUMessageRecipientInputViewDelegate>
{
    BOOL _hideToLabel;
    BOOL _showPlaceholderText;
    id <FLUMediaTableConversationComposeHeaderViewDelegate> _delegate;
    FLUMessageRecipientInputView *_tokenInputView;
    id _objectToShare;
    FLUBlurView *_blurView;
    FLUBorderView *_borderView;
    FLUView *_sharingPrivateMediaView;
    FLUImageView *_sharingPrivateMediaImageView;
    FLUTextFieldLabel *_sharingPrivateMediaHeadingLabel;
    FLUTextFieldLabel *_sharingPrivateMediaLabel;
}

+ (double)viewHeightWithObjectToShare:(id)arg1 tokenInputViewHeight:(double)arg2;
@property(retain, nonatomic) FLUTextFieldLabel *sharingPrivateMediaLabel; // @synthesize sharingPrivateMediaLabel=_sharingPrivateMediaLabel;
@property(retain, nonatomic) FLUTextFieldLabel *sharingPrivateMediaHeadingLabel; // @synthesize sharingPrivateMediaHeadingLabel=_sharingPrivateMediaHeadingLabel;
@property(retain, nonatomic) FLUImageView *sharingPrivateMediaImageView; // @synthesize sharingPrivateMediaImageView=_sharingPrivateMediaImageView;
@property(retain, nonatomic) FLUView *sharingPrivateMediaView; // @synthesize sharingPrivateMediaView=_sharingPrivateMediaView;
@property(retain, nonatomic) FLUBorderView *borderView; // @synthesize borderView=_borderView;
@property(retain, nonatomic) FLUBlurView *blurView; // @synthesize blurView=_blurView;
@property(retain, nonatomic) id objectToShare; // @synthesize objectToShare=_objectToShare;
@property(nonatomic) BOOL showPlaceholderText; // @synthesize showPlaceholderText=_showPlaceholderText;
@property(nonatomic) BOOL hideToLabel; // @synthesize hideToLabel=_hideToLabel;
@property(retain, nonatomic) FLUMessageRecipientInputView *tokenInputView; // @synthesize tokenInputView=_tokenInputView;
@property(nonatomic) __weak id <FLUMediaTableConversationComposeHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)focusSearchField;
- (BOOL)clearSearchField;
- (id)searchTerm;
- (void)refreshView;
- (void)didChangeDesignModeOption:(id)arg1;
- (void)viewWillAppear;
- (void)viewWillDisappear;
- (void)updateFrames;
- (void)setFrame:(struct CGRect)arg1;
- (void)setupAccessibility;
- (void)dealloc;
- (void)setupWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

