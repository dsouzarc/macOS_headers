//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

@class NSBox, NSLayoutConstraint, NSMenuItem, NSString, NSView, _TtC15screencaptureui13ToolbarButton, _TtC15screencaptureui23ToolbarWindowBackground;

@interface screencaptureui.ToolbarWindowController : NSWindowController
{
    // Error parsing type: , name: toolbarContainer
    // Error parsing type: , name: standardContainer
    // Error parsing type: , name: fsButton
    // Error parsing type: , name: windowButton
    // Error parsing type: , name: selectionButton
    // Error parsing type: , name: optionsButton
    // Error parsing type: , name: standardLeadingConstraint
    // Error parsing type: , name: standardTrailingConstraint
    // Error parsing type: , name: videoFSButton
    // Error parsing type: , name: videoSelectionButton
    // Error parsing type: , name: videoStopButton
    // Error parsing type: , name: videoFSWidthConstraint
    // Error parsing type: , name: videoSelectionWidthConstraint
    // Error parsing type: , name: videoStopWidthConstraint
    // Error parsing type: , name: line
    // Error parsing type: , name: saveToHeader
    // Error parsing type: , name: saveToDesktopMenu
    // Error parsing type: , name: saveToDocumentsMenu
    // Error parsing type: , name: saveToClipboardMenu
    // Error parsing type: , name: saveToMailMenu
    // Error parsing type: , name: saveToPreviewMenu
    // Error parsing type: , name: saveToMessages
    // Error parsing type: , name: timerHeader
    // Error parsing type: , name: timerNoneMenu
    // Error parsing type: , name: timer5Menu
    // Error parsing type: , name: timer10Menu
    // Error parsing type: , name: optionsHeader
    // Error parsing type: , name: showFloatingThumbnail
    // Error parsing type: , name: showMouseCursorItem
    // Error parsing type: , name: showMouseClicks
    // Error parsing type: , name: timerContainer
    // Error parsing type: , name: timerButton
    // Error parsing type: , name: stopForAnimation
    // Error parsing type: , name: timerLeadingConstraint
    // Error parsing type: , name: timerTrailingConstraint
    // Error parsing type: , name: timerCompressionConstraint
    // Error parsing type: , name: _menuNeedsRefresh
    // Error parsing type: , name: _countDownTimer
    // Error parsing type: , name: _countDownTimerTime
    // Error parsing type: , name: _labelWindow
    // Error parsing type: , name: _label
    // Error parsing type: , name: _labelXConstraint
    // Error parsing type: , name: _windowDragging
    // Error parsing type: , name: _toolbarButtonWidth
    // Error parsing type: , name: _dragMouseDownLocation
    // Error parsing type: , name: _dragMouseWindowLocation
    // Error parsing type: , name: _dragProxy
    // Error parsing type: , name: _isProxy
    // Error parsing type: , name: _lastIntersectionPerc
    // Error parsing type: , name: _selectedDisplay
    // Error parsing type: , name: _displaySelectionWindows
}

- (CDUnknownBlockType).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithWindow:(id)arg1;
@property(nonatomic, retain) _TtC15screencaptureui13ToolbarButton *stopForAnimation; // @synthesize stopForAnimation;
@property(nonatomic) __weak _TtC15screencaptureui13ToolbarButton *timerButton; // @synthesize timerButton;
@property(nonatomic, retain) NSView *timerContainer; // @synthesize timerContainer;
@property(nonatomic, retain) NSMenuItem *showMouseClicks; // @synthesize showMouseClicks;
@property(nonatomic, retain) NSMenuItem *showMouseCursorItem; // @synthesize showMouseCursorItem;
@property(nonatomic, retain) NSMenuItem *showFloatingThumbnail; // @synthesize showFloatingThumbnail;
@property(nonatomic, retain) NSMenuItem *optionsHeader; // @synthesize optionsHeader;
@property(nonatomic, retain) NSMenuItem *timer10Menu; // @synthesize timer10Menu;
@property(nonatomic, retain) NSMenuItem *timer5Menu; // @synthesize timer5Menu;
@property(nonatomic, retain) NSMenuItem *timerNoneMenu; // @synthesize timerNoneMenu;
@property(nonatomic, retain) NSMenuItem *timerHeader; // @synthesize timerHeader;
@property(nonatomic, retain) NSMenuItem *saveToMessages; // @synthesize saveToMessages;
@property(nonatomic, retain) NSMenuItem *saveToPreviewMenu; // @synthesize saveToPreviewMenu;
@property(nonatomic, retain) NSMenuItem *saveToMailMenu; // @synthesize saveToMailMenu;
@property(nonatomic, retain) NSMenuItem *saveToClipboardMenu; // @synthesize saveToClipboardMenu;
@property(nonatomic, retain) NSMenuItem *saveToDocumentsMenu; // @synthesize saveToDocumentsMenu;
@property(nonatomic, retain) NSMenuItem *saveToDesktopMenu; // @synthesize saveToDesktopMenu;
@property(nonatomic, retain) NSMenuItem *saveToHeader; // @synthesize saveToHeader;
@property(nonatomic) __weak NSBox *line; // @synthesize line;
@property(nonatomic) __weak NSLayoutConstraint *videoStopWidthConstraint; // @synthesize videoStopWidthConstraint;
@property(nonatomic) __weak NSLayoutConstraint *videoSelectionWidthConstraint; // @synthesize videoSelectionWidthConstraint;
@property(nonatomic) __weak NSLayoutConstraint *videoFSWidthConstraint; // @synthesize videoFSWidthConstraint;
@property(nonatomic) __weak _TtC15screencaptureui13ToolbarButton *videoStopButton; // @synthesize videoStopButton;
@property(nonatomic) __weak _TtC15screencaptureui13ToolbarButton *videoSelectionButton; // @synthesize videoSelectionButton;
@property(nonatomic) __weak _TtC15screencaptureui13ToolbarButton *videoFSButton; // @synthesize videoFSButton;
@property(nonatomic) __weak NSLayoutConstraint *standardTrailingConstraint; // @synthesize standardTrailingConstraint;
@property(nonatomic) __weak NSLayoutConstraint *standardLeadingConstraint; // @synthesize standardLeadingConstraint;
@property(nonatomic) __weak _TtC15screencaptureui13ToolbarButton *optionsButton; // @synthesize optionsButton;
@property(nonatomic) __weak _TtC15screencaptureui13ToolbarButton *selectionButton; // @synthesize selectionButton;
@property(nonatomic) __weak _TtC15screencaptureui13ToolbarButton *windowButton; // @synthesize windowButton;
@property(nonatomic) __weak _TtC15screencaptureui13ToolbarButton *fsButton; // @synthesize fsButton;
@property(nonatomic, retain) NSView *standardContainer; // @synthesize standardContainer;
@property(nonatomic) __weak _TtC15screencaptureui23ToolbarWindowBackground *toolbarContainer; // @synthesize toolbarContainer;
- (void)buttonMouseEnteredWithButton:(id)arg1 entered:(BOOL)arg2;
- (void)buttonHighlightedWithButton:(id)arg1 highlighted:(BOOL)arg2;
- (void)audioSourceSelected:(id)arg1;
- (void)cancelTimedCapture:(id)arg1;
- (void)optionsShowMouseClicks:(id)arg1;
- (void)optionsShowMouseCursor:(id)arg1;
- (void)optionsShowThumbnail:(id)arg1;
- (void)optionsTimer:(id)arg1;
- (void)optionsSaveTo:(id)arg1;
- (void)optionsPressed:(id)arg1;
- (void)videoRecordingStopPressed:(id)arg1;
- (void)videoSelectionButtonPressed:(id)arg1;
- (void)videoFSButtonPressed:(id)arg1;
- (void)selectionButtonPressed:(id)arg1;
- (void)windowButtonPressed:(id)arg1;
- (void)fsButtonPressed:(id)arg1;
- (void)closePressed:(id)arg1;
- (void)awakeFromNib;
@property(nonatomic, readonly) NSString *windowNibName;

@end

