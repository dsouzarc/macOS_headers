//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FLUTableCellView.h"

#import "NSMenuDelegate.h"
#import "NSTextViewDelegate.h"

@class FLUAvatarButton, FLUComment, FLUHoverButton, FLUTextEntityLabel, FLUTextFieldLabel, FLUView, ITProgressIndicator, NSString, NSTimer, NSTrackingArea;

@interface FLUMediaCommentTableCellView : FLUTableCellView <NSTextViewDelegate, NSMenuDelegate>
{
    BOOL _firstRow;
    BOOL _lastRow;
    BOOL _showSelectionButton;
    BOOL _indentChildComments;
    BOOL _displayingOptionsView;
    FLUComment *_comment;
    id <FLUMediaCommentTableCellViewDelegate> _delegate;
    CDUnknownBlockType _refreshCommentBlock;
    FLUView *_contentView;
    FLUView *_optionsView;
    FLUHoverButton *_resendButton;
    ITProgressIndicator *_progressIndicatorView;
    FLUHoverButton *_likeButton;
    FLUHoverButton *_replyButton;
    FLUHoverButton *_reportButton;
    FLUHoverButton *_deleteButton;
    FLUAvatarButton *_avatarButton;
    FLUTextEntityLabel *_commentLabel;
    FLUHoverButton *_commentLikesButton;
    FLUTextFieldLabel *_timestampLabel;
    FLUHoverButton *_viewAllRepliesButton;
    FLUView *_selectionOverlayView;
    FLUHoverButton *_selectionButton;
    FLUView *_highlightOverlayView;
    NSTrackingArea *_viewTrackingArea;
    NSTimer *_generalTimer;
}

+ (id)commentUsernameAttributes:(id)arg1;
+ (id)commentAttributes:(BOOL)arg1;
+ (id)attributedStringForComment:(id)arg1;
+ (double)commentHeightForComment:(id)arg1 indentChildComments:(BOOL)arg2 withWidth:(double)arg3;
+ (double)viewHeightForComment:(id)arg1 indentChildComments:(BOOL)arg2 editViewMode:(BOOL)arg3 withWidth:(double)arg4;
@property(retain, nonatomic) NSTimer *generalTimer; // @synthesize generalTimer=_generalTimer;
@property(nonatomic, getter=isDisplayingOptionsView) BOOL displayingOptionsView; // @synthesize displayingOptionsView=_displayingOptionsView;
@property(retain, nonatomic) NSTrackingArea *viewTrackingArea; // @synthesize viewTrackingArea=_viewTrackingArea;
@property(retain, nonatomic) FLUView *highlightOverlayView; // @synthesize highlightOverlayView=_highlightOverlayView;
@property(retain, nonatomic) FLUHoverButton *selectionButton; // @synthesize selectionButton=_selectionButton;
@property(retain, nonatomic) FLUView *selectionOverlayView; // @synthesize selectionOverlayView=_selectionOverlayView;
@property(retain, nonatomic) FLUHoverButton *viewAllRepliesButton; // @synthesize viewAllRepliesButton=_viewAllRepliesButton;
@property(retain, nonatomic) FLUTextFieldLabel *timestampLabel; // @synthesize timestampLabel=_timestampLabel;
@property(retain, nonatomic) FLUHoverButton *commentLikesButton; // @synthesize commentLikesButton=_commentLikesButton;
@property(retain, nonatomic) FLUTextEntityLabel *commentLabel; // @synthesize commentLabel=_commentLabel;
@property(retain, nonatomic) FLUAvatarButton *avatarButton; // @synthesize avatarButton=_avatarButton;
@property(retain, nonatomic) FLUHoverButton *deleteButton; // @synthesize deleteButton=_deleteButton;
@property(retain, nonatomic) FLUHoverButton *reportButton; // @synthesize reportButton=_reportButton;
@property(retain, nonatomic) FLUHoverButton *replyButton; // @synthesize replyButton=_replyButton;
@property(retain, nonatomic) FLUHoverButton *likeButton; // @synthesize likeButton=_likeButton;
@property(retain, nonatomic) ITProgressIndicator *progressIndicatorView; // @synthesize progressIndicatorView=_progressIndicatorView;
@property(retain, nonatomic) FLUHoverButton *resendButton; // @synthesize resendButton=_resendButton;
@property(retain, nonatomic) FLUView *optionsView; // @synthesize optionsView=_optionsView;
@property(retain, nonatomic) FLUView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) BOOL indentChildComments; // @synthesize indentChildComments=_indentChildComments;
@property(nonatomic) BOOL showSelectionButton; // @synthesize showSelectionButton=_showSelectionButton;
@property(copy, nonatomic) CDUnknownBlockType refreshCommentBlock; // @synthesize refreshCommentBlock=_refreshCommentBlock;
@property(nonatomic) BOOL lastRow; // @synthesize lastRow=_lastRow;
@property(nonatomic) BOOL firstRow; // @synthesize firstRow=_firstRow;
@property(nonatomic) __weak id <FLUMediaCommentTableCellViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) FLUComment *comment; // @synthesize comment=_comment;
- (void).cxx_destruct;
- (void)updateTrackingAreas;
- (void)showNewCommentHighlight;
- (void)refreshView;
- (void)didPressSelectionButton:(id)arg1;
- (void)didPressReportItem:(id)arg1;
- (void)didPressDeleteCommentItem:(id)arg1;
- (void)didPressResendCommentItem:(id)arg1;
- (void)didPressReplyItem:(id)arg1;
- (void)didPressLikeItem:(id)arg1;
- (void)didPressDeleteButton:(id)arg1;
- (void)didPressResendButton:(id)arg1;
- (void)didPressReportButton:(id)arg1;
- (void)didPressReplyButton:(id)arg1;
- (void)didPressLikeButton:(id)arg1;
- (void)didPressViewAllRepliesButton:(id)arg1;
- (void)didPressCommentLikesButton:(id)arg1;
- (void)didPressAvatarButton:(id)arg1;
- (void)didPressOpenTranslationProviderURL:(id)arg1;
- (void)didPressTranslateTextItem:(id)arg1;
- (void)didPressCopyTextItem:(id)arg1;
- (BOOL)textView:(id)arg1 clickedOnLink:(id)arg2 atIndex:(unsigned long long)arg3;
- (id)replyAttributes;
- (id)likeAttributes;
- (id)timestampAttributes;
- (void)updateFrames;
- (void)updateFramesForOptionsViewAnimated:(BOOL)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setComment:(id)arg1 animated:(BOOL)arg2;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)hideOptionsView;
- (void)showOptionsView;
- (void)mouseExited:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (void)rightMouseDown:(id)arg1;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (void)copy:(id)arg1;
- (id)menuForEvent:(id)arg1;
- (void)menuDidClose:(id)arg1;
- (void)didChangeDesignModeOption:(id)arg1;
- (void)setupAccessibility;
- (void)prepareForReuse;
- (void)dealloc;
- (void)setup;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

