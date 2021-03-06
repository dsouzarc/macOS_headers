//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

#import "NSCandidateListTouchBarItemDelegate-Protocol.h"
#import "NSComboBoxDelegate-Protocol.h"
#import "NSScrubberDataSource-Protocol.h"
#import "NSScrubberDelegate-Protocol.h"
#import "NSTouchBarDelegate-Protocol.h"
#import "NSWindowDelegate-Protocol.h"
#import "PSMTabBarControlDelegate-Protocol.h"
#import "PSMTabViewDelegate-Protocol.h"
#import "PTYWindowDelegateProtocol-Protocol.h"
#import "WindowControllerInterface-Protocol.h"
#import "iTermInstantReplayDelegate-Protocol.h"
#import "iTermPasswordManagerDelegate-Protocol.h"
#import "iTermRootTerminalViewDelegate-Protocol.h"
#import "iTermTabBarControlViewDelegate-Protocol.h"
#import "iTermToolbeltViewDelegate-Protocol.h"
#import "iTermWeaklyReferenceable-Protocol.h"
#import "iTermWindowController-Protocol.h"

@class AutocompleteView, CommandHistoryPopupWindowController, DirectoriesPopupWindowController, NSArray, NSButton, NSCandidateListTouchBarItem, NSColor, NSComboBox, NSCustomTouchBarItem, NSDictionary, NSMutableSet, NSPanel, NSScreen, NSString, NSTextField, PasteboardHistoryWindowController, iTermInstantReplayWindowController, iTermPasswordManagerWindowController, iTermRateLimitedUpdate, iTermRootTerminalView;

@interface PseudoTerminal : NSWindowController <NSCandidateListTouchBarItemDelegate, NSTouchBarDelegate, NSScrubberDelegate, NSScrubberDataSource, iTermTabBarControlViewDelegate, iTermPasswordManagerDelegate, iTermRootTerminalViewDelegate, iTermToolbeltViewDelegate, NSComboBoxDelegate, iTermInstantReplayDelegate, iTermWeaklyReferenceable, iTermWindowController, NSWindowDelegate, PSMTabBarControlDelegate, PSMTabViewDelegate, PTYWindowDelegateProtocol, WindowControllerInterface>
{
    struct CGPoint preferredOrigin_;
    NSTextField *parameterName;
    NSPanel *parameterPanel;
    NSTextField *parameterValue;
    NSTextField *parameterPrompt;
    iTermInstantReplayWindowController *_instantReplayWindowController;
    int tabViewItemsBeingAdded;
    BOOL useTransparency_;
    BOOL _fullScreen;
    struct CGRect oldFrame_;
    BOOL oldFrameSizeIsBogus_;
    BOOL oldUseTransparency_;
    BOOL restoreUseTransparency_;
    long long broadcastMode_;
    NSColor *normalBackgroundColor;
    BOOL _resizeInProgressFlag;
    int uniqueNumber_;
    BOOL togglingFullScreen_;
    BOOL togglingLionFullScreen_;
    PasteboardHistoryWindowController *pbHistoryView;
    CommandHistoryPopupWindowController *commandHistoryPopup;
    DirectoriesPopupWindowController *_directoriesPopupWindowController;
    AutocompleteView *autocompleteView;
    int nextSessionRows_;
    int nextSessionColumns_;
    int windowType_;
    int savedWindowType_;
    BOOL _isAnchoredToScreen;
    int _anchoredScreenNumber;
    int _screenNumberFromFirstProfile;
    int number_;
    BOOL wasDraggedFromAnotherWindow_;
    BOOL zooming_;
    double lastResizeTime_;
    NSMutableSet *broadcastViewIds_;
    double findCursorStartTime_;
    double cumulativeMag_;
    double lastMagChangeTime_;
    BOOL lionFullScreen_;
    NSPanel *coprocesssPanel_;
    NSButton *coprocessOkButton_;
    NSComboBox *coprocessCommand_;
    NSButton *coprocessIgnoreErrors_;
    NSDictionary *lastArrangement_;
    BOOL exitingLionFullscreen_;
    int tmuxOriginatedResizeInProgress_;
    BOOL liveResize_;
    BOOL postponedTmuxTabLayoutChange_;
    BOOL hideAfterOpening_;
    BOOL doNotSetRestorableState_;
    int desiredRows_;
    int desiredColumns_;
    BOOL hidingToolbeltShouldResizeWindow_;
    BOOL hidingToolbeltShouldResizeWindowInitialized_;
    BOOL _haveDelayedEnterFullScreenMode;
    BOOL _parameterPanelCanceled;
    long long _previousNumberOfTabs;
    BOOL _expectingDecodeOfRestorableState;
    BOOL _inWindowDidChangeScreen;
    iTermPasswordManagerWindowController *_passwordManagerWindowController;
    iTermRateLimitedUpdate *_touchBarRateLimitedUpdate;
    NSString *_previousTouchBarWord;
    BOOL _windowWasJustCreated;
    BOOL _windowInitialized;
    BOOL _disablePromptForSubstitutions;
    BOOL _restoringWindow;
    BOOL _restorableStateDecodePending;
    BOOL _openInCurrentSpace;
    BOOL _wellFormed;
    CDUnknownBlockType _didEnterLionFullscreen;
    unsigned long long _hotkeyWindowType;
    NSString *_terminalGuid;
    NSString *_autoCommandHistorySessionGuid;
    double _timeOfLastResize;
    NSString *_desiredTitle;
    NSCustomTouchBarItem *_tabsTouchBarItem;
    NSCandidateListTouchBarItem *_autocompleteCandidateListItem;
    iTermRootTerminalView *_contentView;
}

+ (id)repairedArrangement:(id)arg1 replacingProfileWithGUID:(id)arg2 withProfile:(id)arg3;
+ (id)terminalWithArrangement:(id)arg1 forceOpeningHotKeyWindow:(BOOL)arg2;
+ (id)terminalWithArrangement:(id)arg1 sessions:(id)arg2 forceOpeningHotKeyWindow:(BOOL)arg3;
+ (id)bareTerminalWithArrangement:(id)arg1 forceOpeningHotKeyWindow:(BOOL)arg2;
+ (BOOL)shouldRestoreHotKeyWindowWithGUID:(id)arg1;
+ (BOOL)arrangementIsLionFullScreen:(id)arg1;
+ (BOOL)anyWindowIsEnteringLionFullScreen;
+ (BOOL)willAutoFullScreenNewWindow;
+ (void)drawArrangementPreview:(id)arg1 screenFrames:(id)arg2;
+ (int)_screenIndexForArrangement:(id)arg1;
+ (int)_windowTypeForArrangement:(id)arg1;
+ (BOOL)useElCapitanFullScreenLogic;
+ (int)screenNumberForPreferredScreenNumber:(int)arg1 windowType:(int)arg2 defaultScreen:(id)arg3;
+ (long long)styleMaskForWindowType:(int)arg1 hotkeyWindowType:(unsigned long long)arg2;
+ (void)registerSessionsInArrangement:(id)arg1;
@property(readonly, nonatomic) iTermRootTerminalView *contentView; // @synthesize contentView=_contentView;
@property(readonly, nonatomic) BOOL wellFormed; // @synthesize wellFormed=_wellFormed;
@property(retain, nonatomic) NSCandidateListTouchBarItem *autocompleteCandidateListItem; // @synthesize autocompleteCandidateListItem=_autocompleteCandidateListItem;
@property(retain, nonatomic) NSCustomTouchBarItem *tabsTouchBarItem; // @synthesize tabsTouchBarItem=_tabsTouchBarItem;
@property(copy, nonatomic) NSString *desiredTitle; // @synthesize desiredTitle=_desiredTitle;
@property(nonatomic) double timeOfLastResize; // @synthesize timeOfLastResize=_timeOfLastResize;
@property(copy, nonatomic) NSString *autoCommandHistorySessionGuid; // @synthesize autoCommandHistorySessionGuid=_autoCommandHistorySessionGuid;
@property(readonly, nonatomic) BOOL openInCurrentSpace; // @synthesize openInCurrentSpace=_openInCurrentSpace;
@property(nonatomic) BOOL restorableStateDecodePending; // @synthesize restorableStateDecodePending=_restorableStateDecodePending;
@property(nonatomic) BOOL restoringWindow; // @synthesize restoringWindow=_restoringWindow;
@property(nonatomic) BOOL disablePromptForSubstitutions; // @synthesize disablePromptForSubstitutions=_disablePromptForSubstitutions;
@property(nonatomic) BOOL windowInitialized; // @synthesize windowInitialized=_windowInitialized;
@property(copy, nonatomic) NSString *terminalGuid; // @synthesize terminalGuid=_terminalGuid;
@property(nonatomic) unsigned long long hotkeyWindowType; // @synthesize hotkeyWindowType=_hotkeyWindowType;
@property(copy, nonatomic) CDUnknownBlockType didEnterLionFullscreen; // @synthesize didEnterLionFullscreen=_didEnterLionFullscreen;
- (void)controlTextDidChange:(id)arg1;
- (void)endPreviewPanelControl:(id)arg1;
- (void)beginPreviewPanelControl:(id)arg1;
- (BOOL)acceptsPreviewPanelControl:(id)arg1;
- (id)toolbeltCommandUsesForCurrentSession;
- (BOOL)toolbeltCurrentSessionHasGuid:(id)arg1;
- (void)toolbeltActivateTriggerForCapturedOutputInCurrentSession:(id)arg1;
- (void)toolbeltDidSelectMark:(id)arg1;
- (id)toolbeltLastCommandMark;
- (int)toolbeltCurrentShellProcessId;
- (id)toolbeltCurrentHost;
- (void)toolbeltInsertText:(id)arg1;
- (void)toolbeltUpdateMouseCursor;
- (void)currentSessionWordAtCursorDidBecome:(id)arg1;
- (void)tab:(id)arg1 didSetMetalEnabled:(BOOL)arg2;
- (void)tab:(id)arg1 didChangeToState:(unsigned long long)arg2;
- (void)tabKeyLabelsDidChangeForSession:(id)arg1;
- (void)tabRemoveTab:(id)arg1;
- (void)tabDidChangeTmuxLayout:(id)arg1;
- (void)tab:(id)arg1 currentLocationDidChange:(id)arg2;
- (void)tab:(id)arg1 didChangeObjectCount:(long long)arg2;
- (void)tab:(id)arg1 didChangeIcon:(id)arg2;
- (void)tab:(id)arg1 didChangeProcessingStatus:(BOOL)arg2;
- (void)iTermPasswordManagerEnterPassword:(id)arg1;
- (BOOL)iTermPasswordManagerCanEnterPassword;
- (void)jumpToSelection:(id)arg1;
- (void)findWithSelection:(id)arg1;
- (void)findNext:(id)arg1;
- (void)findPrevious:(id)arg1;
- (void)showFindPanel:(id)arg1;
- (void)moveToPreferredScreen;
- (void)openSelection:(id)arg1;
- (void)sessionDidTerminate:(id)arg1;
- (void)addSessionInNewTab:(id)arg1;
- (id)createSessionWithProfile:(id)arg1 withURL:(id)arg2 forObjectType:(long long)arg3 serverConnection:(CDStruct_0b102396 *)arg4;
- (unsigned long long)window:(id)arg1 willUseFullScreenPresentationOptions:(unsigned long long)arg2;
- (void)window:(id)arg1 willEncodeRestorableState:(id)arg2;
- (BOOL)allTabsAreTmuxTabs;
- (void)window:(id)arg1 didDecodeRestorableState:(id)arg2;
- (id)createTabWithProfile:(id)arg1 withCommand:(id)arg2;
- (void)iTermTabBarDidFinishFlash;
- (void)iTermTabBarWillBeginFlash;
- (BOOL)iTermTabBarShouldFlashAutomatically;
- (BOOL)eligibleForFullScreenTabBarToFlash;
- (void)sessionHostDidChange:(id)arg1 to:(id)arg2;
- (void)incrementBadge;
- (unsigned long long)validModesForFontPanel:(id)arg1;
- (void)_loadFindStringFromSharedPasteboard;
- (BOOL)runCommandInSession:(id)arg1 inCwd:(id)arg2 forObjectType:(long long)arg3;
- (id)newSessionWithBookmark:(id)arg1;
- (id)allSessions;
- (long long)timestampForFraction:(float)arg1;
- (void)parameterPanelEnd:(id)arg1;
- (void)reloadBookmarks;
- (void)closeWindow:(id)arg1;
- (void)changeTabColorToMenuAction:(id)arg1;
- (void)moveTabToNewWindowContextualMenuAction:(id)arg1;
- (void)closeTabsToTheRight:(id)arg1;
- (void)closeOtherTabs:(id)arg1;
- (void)saveTabAsWindowArrangement:(id)arg1;
- (void)duplicateTab:(id)arg1;
- (void)closeTabContextualMenuAction:(id)arg1;
- (id)tabBarControl;
- (BOOL)showCloseWindow;
- (void)fitTabsToWindow;
- (void)enableSendInputToAllTabs:(id)arg1;
- (void)disableBroadcasting:(id)arg1;
- (void)enableSendInputToAllPanes:(id)arg1;
- (void)toggleAutoCommandHistory:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (void)addRevivedSession:(id)arg1;
- (void)logStop:(id)arg1;
- (void)logStart:(id)arg1;
- (void)clearScrollbackBuffer:(id)arg1;
- (void)clearBuffer:(id)arg1;
- (void)resetCharset:(id)arg1;
- (void)reset:(id)arg1;
- (void)startProgram:(id)arg1 environment:(id)arg2 isUTF8:(BOOL)arg3 inSession:(id)arg4 substitutions:(id)arg5;
- (void)assignUniqueNumberToWindow;
- (void)setName:(id)arg1 forSession:(id)arg2;
- (id)currentSessionName;
- (void)insertSession:(id)arg1 atIndex:(int)arg2;
- (void)insertTab:(id)arg1 atIndex:(int)arg2;
- (void)fitTabToWindow:(id)arg1;
- (void)safelySetSessionSize:(id)arg1 rows:(int)arg2 columns:(int)arg3;
- (struct CGRect)maxFrame;
- (void)moveSessionToWindow:(id)arg1;
- (void)setupSession:(id)arg1 title:(id)arg2 withSize:(struct CGSize *)arg3;
- (void)copySettingsFrom:(id)arg1;
- (float)tallestSessionHeight:(int *)arg1;
- (float)widestSessionWidth:(int *)arg1;
- (float)maxCharHeight:(int *)arg1;
- (float)maxCharWidth:(int *)arg1;
- (void)repositionWidgets;
- (void)flagsChanged:(id)arg1;
- (struct CGSize)windowDecorationSize;
- (BOOL)haveRightBorder;
- (BOOL)haveTopBorder;
- (BOOL)haveBottomBorder;
- (BOOL)haveLeftBorder;
- (BOOL)exitingLionFullscreen;
- (void)setInstantReplayBarVisible:(BOOL)arg1;
- (void)setFrameSize:(struct CGSize)arg1;
- (void)showMenuBar;
- (void)showMenuBarHideDock;
- (void)hideMenuBar;
- (void)updateTabBarStyle;
- (void)refreshTerminal:(id)arg1;
- (void)_scrollerStyleChanged:(id)arg1;
- (void)updateWindowNumberVisibility:(id)arg1;
- (int)_screenAtPoint:(struct CGPoint)arg1;
- (void)setDimmingForSessions;
- (void)setDimmingForSession:(id)arg1;
- (void)refreshTmuxLayoutsAndWindow;
- (void)decreaseWidth:(id)arg1;
- (void)increaseWidth:(id)arg1;
- (void)decreaseHeight:(id)arg1;
- (void)increaseHeight:(id)arg1;
- (void)moveTabRight:(id)arg1;
- (void)moveTabLeft:(id)arg1;
- (void)setSplitSelectionMode:(BOOL)arg1 excludingSession:(id)arg2 move:(BOOL)arg3;
- (void)toggleBroadcastingInputToSession:(id)arg1;
- (void)setBroadcastMode:(long long)arg1;
- (long long)broadcastMode;
- (id)lastResizeTime;
@property(readonly, nonatomic) NSArray *tabs;
- (id)substitutionsForCommand:(id)arg1 sessionName:(id)arg2 baseSubstitutions:(id)arg3;
- (id)promptForParameter:(id)arg1;
- (void)addTabAtAutomaticallyDeterminedLocation:(id)arg1;
- (void)appendTab:(id)arg1;
- (float)minWidth;
- (void)sessionWasRemoved;
- (void)toggleAlertOnNextMark:(id)arg1;
- (void)previousMarkOrNote:(id)arg1;
- (void)nextMarkOrNote:(id)arg1;
- (void)addNoteAtCursor:(id)arg1;
- (void)swapPaneDown;
- (void)swapPaneUp;
- (void)swapPaneRight;
- (void)swapPaneLeft;
- (void)movePaneDividerUp:(id)arg1;
- (void)movePaneDividerDown:(id)arg1;
- (void)movePaneDividerLeft:(id)arg1;
- (void)movePaneDividerRight:(id)arg1;
- (void)selectPaneDown:(id)arg1;
- (void)selectPaneUp:(id)arg1;
- (void)selectPaneRight:(id)arg1;
- (void)selectPaneLeft:(id)arg1;
- (BOOL)fitWindowToTabSize:(struct CGSize)arg1;
- (void)fitWindowToTabsExcludingTmuxTabs:(BOOL)arg1;
- (void)fitWindowToTabs;
- (void)tabActiveSessionDidChange;
- (void)splitHorizontally:(id)arg1;
- (void)splitVertically:(id)arg1;
- (id)_bookmarkToSplit;
- (id)splitVertically:(BOOL)arg1 before:(BOOL)arg2 profile:(id)arg3 targetSession:(id)arg4;
- (id)splitVertically:(BOOL)arg1 withBookmark:(id)arg2 targetSession:(id)arg3;
- (void)willSplitTmuxPane;
- (void)splitVertically:(BOOL)arg1 before:(BOOL)arg2 addingSession:(id)arg3 targetSession:(id)arg4 performSetup:(BOOL)arg5;
- (id)splitVertically:(BOOL)arg1 withBookmarkGuid:(id)arg2;
- (id)splitVertically:(BOOL)arg1 withProfile:(id)arg2;
- (int)indexForTabWithPredecessors:(id)arg1;
- (unsigned long long)indexOfTabWithUniqueId:(int)arg1;
- (void)addTabWithArrangement:(id)arg1 uniqueId:(int)arg2 sessions:(id)arg3 predecessors:(id)arg4;
- (void)recreateTab:(id)arg1 withArrangement:(id)arg2 sessions:(id)arg3 revive:(BOOL)arg4;
- (void)newTabWithBookmarkGuid:(id)arg1;
- (void)newWindowWithBookmarkGuid:(id)arg1;
- (void)toggleMaximizeActivePane;
- (BOOL)canSplitPaneVertically:(BOOL)arg1 withBookmark:(id)arg2;
- (void)openAutocomplete:(id)arg1;
- (BOOL)autoCommandHistoryIsOpenForSession:(id)arg1;
- (void)reallyShowAutoCommandHistoryForSession:(id)arg1;
- (void)showAutoCommandHistoryForSession:(id)arg1;
- (void)updateAutoCommandHistoryForPrefix:(id)arg1 inSession:(id)arg2 popIfNeeded:(BOOL)arg3;
- (void)hideAutoCommandHistoryForSession:(id)arg1;
- (void)hideAutoCommandHistory;
- (void)openDirectories:(id)arg1;
- (void)openCommandHistory:(id)arg1;
- (void)openPasteHistory:(id)arg1;
- (void)openSplitVerticallySheet:(id)arg1;
- (void)openSplitHorizontallySheet:(id)arg1;
- (void)coprocessHelp:(id)arg1;
- (void)coprocessPanelEnd:(id)arg1;
- (void)runCoprocess:(id)arg1;
- (void)stopCoprocess:(id)arg1;
- (void)_openSplitSheetForVertical:(BOOL)arg1;
- (void)irNext:(id)arg1;
- (void)irPrev:(id)arg1;
- (id)windowScreen;
- (struct CGRect)windowFrame;
- (BOOL)windowIsMiniaturized;
- (void)windowOrderBack:(id)arg1;
- (void)windowOrderFront:(id)arg1;
- (void)windowDeminiaturize:(id)arg1;
- (void)windowPerformMiniaturize:(id)arg1;
- (void)windowSetFrameTopLeftPoint:(struct CGPoint)arg1;
- (void)showLiveSession:(id)arg1 inPlaceOf:(id)arg2;
- (void)showRangeOfLines:(struct _NSRange)arg1 inSession:(id)arg2;
- (void)copyModeShortcuts:(id)arg1;
- (void)toggleCopyMode:(id)arg1;
- (void)zoomOnSelection:(id)arg1;
- (void)zoomOut:(id)arg1;
- (void)captureNextMetalFrame:(id)arg1;
- (void)replaySession:(id)arg1;
- (id)syntheticSessionForSession:(id)arg1;
- (BOOL)sendInputToAllSessions;
- (void)fitWindowToTab:(id)arg1;
- (void)closeInstantReplay:(id)arg1;
- (void)showHideInstantReplay;
- (struct CGPoint)originForAccessoryOfSize:(struct CGSize)arg1;
- (BOOL)inInstantReplay;
- (void)irAdvance:(int)arg1;
- (void)instantReplayStep:(int)arg1;
- (void)instantReplaySeekTo:(float)arg1;
- (void)replaceSyntheticActiveSessionWithLiveSessionIfNeeded;
- (long long)instantReplayLastTimestamp;
- (long long)instantReplayFirstTimestamp;
- (long long)instantReplayCurrentTimestamp;
- (void)genericCloseSheet:(id)arg1 returnCode:(int)arg2 contextInfo:(id)arg3;
- (void)openPasswordManagerToAccountName:(id)arg1 inSession:(id)arg2;
- (id)accessoryTextColor;
- (void)fillPath:(id)arg1;
- (BOOL)isInitialized;
- (id)tabView;
- (void)tabsDidReorder;
- (void)setBackgroundColor:(id)arg1;
- (void)updateTabColors;
- (void)tabView:(id)arg1 updateStateForTabViewItem:(id)arg2;
- (void)tabViewDoubleClickTabBar:(id)arg1;
- (void)tabView:(id)arg1 doubleClickTabViewItem:(id)arg2;
- (id)tabView:(id)arg1 toolTipForTabViewItem:(id)arg2;
- (BOOL)tabView:(id)arg1 shouldAcceptDragFromSender:(id)arg2;
- (id)tabView:(id)arg1 unknownObjectWasDropped:(id)arg2;
- (unsigned long long)tabView:(id)arg1 draggingEnteredTabBarForSender:(id)arg2;
- (id)allowedDraggedTypesForTabView:(id)arg1;
- (id)tabView:(id)arg1 newTabBarForDraggedTabViewItem:(id)arg2 atPoint:(struct CGPoint)arg3;
- (id)tabView:(id)arg1 menuForTabViewItem:(id)arg2;
- (void)tabViewDidChangeNumberOfTabViewItems:(id)arg1;
- (id)tabView:(id)arg1 imageForTabViewItem:(id)arg2 offset:(struct CGSize *)arg3 styleMask:(unsigned int *)arg4;
- (void)tabView:(id)arg1 closeWindowForLastTabViewItem:(id)arg2;
- (void)tabView:(id)arg1 didDropTabViewItem:(id)arg2 inTabBar:(id)arg3;
- (void)_updateTabObjectCounts;
- (void)tabView:(id)arg1 willDropTabViewItem:(id)arg2 inTabBar:(id)arg3;
- (BOOL)tabView:(id)arg1 shouldDropTabViewItem:(id)arg2 inTabBar:(id)arg3;
- (BOOL)tabView:(id)arg1 shouldDragTabViewItem:(id)arg2 fromTabBar:(id)arg3;
- (BOOL)tabView:(id)arg1 shouldCloseTabViewItem:(id)arg2 suppressConfirmation:(BOOL)arg3;
- (BOOL)tabView:(id)arg1 shouldCloseTabViewItem:(id)arg2;
- (void)tabView:(id)arg1 willInsertTabViewItem:(id)arg2 atIndex:(int)arg3;
- (void)tabView:(id)arg1 willAddTabViewItem:(id)arg2;
- (void)tabView:(id)arg1 willRemoveTabViewItem:(id)arg2;
- (void)saveAffinitiesLater:(id)arg1;
- (void)saveAffinitiesAndOriginsForController:(id)arg1;
- (void)showOrHideInstantReplayBar;
- (void)notifyTmuxOfTabChange;
- (void)updateCurrentLocation;
- (void)updateUseMetalInAllTabs;
- (void)tabView:(id)arg1 didSelectTabViewItem:(id)arg2;
- (void)disableBlur;
- (void)enableBlur:(double)arg1;
- (void)tabView:(id)arg1 willSelectTabViewItem:(id)arg2;
- (void)tabView:(id)arg1 closeTab:(id)arg2;
- (void)menuForEvent:(id)arg1 menu:(id)arg2;
- (void)editSession:(id)arg1 makeKey:(BOOL)arg2;
- (void)editCurrentSession:(id)arg1;
- (void)editSession:(id)arg1;
- (void)sessionInitiatedResize:(id)arg1 width:(int)arg2 height:(int)arg3;
- (void)windowWillShowInitial;
- (struct CGRect)windowWillUseStandardFrame:(id)arg1 defaultFrame:(struct CGRect)arg2;
- (void)windowDidExitFullScreen:(id)arg1;
- (void)windowWillExitFullScreen:(id)arg1;
- (void)windowDidEnterFullScreen:(id)arg1;
- (void)windowWillEnterFullScreen:(id)arg1;
- (void)windowDidEndLiveResize:(id)arg1;
- (void)windowWillStartLiveResize:(id)arg1;
- (BOOL)scrollbarShouldBeVisible;
- (long long)scrollerStyle;
- (BOOL)tabBarShouldBeVisibleWithAdditionalTabs:(int)arg1;
- (BOOL)tabBarShouldBeVisible;
- (BOOL)fullScreen;
- (void)toggleTraditionalFullScreenMode;
- (struct CGSize)preferredWindowFrameToPerfectlyFitCurrentSessionInInitialConfiguration;
- (unsigned long long)styleMask;
- (BOOL)updateSessionScrollbars;
- (void)delayedEnterFullscreen;
- (void)toggleFullScreenMode:(id)arg1;
@property(readonly, nonatomic) BOOL togglingLionFullScreen;
- (void)enterTraditionalFullScreenMode;
- (struct CGRect)traditionalFullScreenFrameForScreen:(id)arg1;
- (BOOL)menuBarVisibleInFullScreen;
- (struct CGRect)traditionalFullScreenFrame;
- (void)enterFullScreenMode;
- (BOOL)useTransparency;
- (void)toggleUseTransparency:(id)arg1;
- (void)updateUseTransparency;
- (BOOL)isShowingTransientTitle;
- (void)clearTransientTitle;
- (void)windowDidResize:(id)arg1;
- (void)windowDidMove:(id)arg1;
- (void)windowDidChangeScreen:(id)arg1;
- (void)saveTmuxWindowOrigins;
- (void)tmuxTabLayoutDidChange:(BOOL)arg1;
- (id)uniqueTmuxControllers;
- (void)invalidateRestorableState;
- (struct CGSize)windowWillResize:(id)arg1 toSize:(struct CGSize)arg2;
- (BOOL)lionFullScreen;
- (BOOL)anyFullScreen;
- (BOOL)isEdgeWindow;
- (void)windowDidResignMain:(id)arg1;
- (void)windowDidBecomeMain:(id)arg1;
- (void)windowDidResignKey:(id)arg1;
- (void)screenParametersDidChange;
- (struct CGRect)canonicalFrameForScreen:(id)arg1 windowFrame:(struct CGRect)arg2 preserveSize:(BOOL)arg3;
- (struct CGRect)screenFrameForEdgeSpanningWindows:(id)arg1;
- (struct CGRect)canonicalFrameForScreen:(id)arg1;
- (void)canonicalizeWindowFrame;
- (void)toolbeltDidFinishGrowing;
- (double)growToolbeltBy:(double)arg1;
- (BOOL)disableFocusFollowsMouse;
- (void)makeCurrentSessionFirstResponder;
- (void)windowDidBecomeKey:(id)arg1;
- (void)windowWillMiniaturize:(id)arg1;
- (void)windowWillClose:(id)arg1;
- (void)closeInstantReplayWindow;
- (BOOL)windowShouldClose:(id)arg1;
- (int)numRunningSessions;
- (void)refreshTools;
- (id)toolbelt;
- (id)promptOnCloseReason;
- (void)windowDidDeminiaturize:(id)arg1;
- (id)arrangement;
- (id)arrangementWithTabs:(id)arg1 includingContents:(BOOL)arg2;
- (id)arrangementExcludingTmuxTabs:(BOOL)arg1 includingContents:(BOOL)arg2;
- (BOOL)restoreTabsFromArrangement:(id)arg1 sessions:(id)arg2;
- (BOOL)loadArrangement:(id)arg1 sessions:(id)arg2;
- (BOOL)loadArrangement:(id)arg1;
- (void)hideAfterOpening;
- (void)endTmuxOriginatedResize;
- (void)beginTmuxOriginatedResize;
- (void)loadTmuxLayout:(id)arg1 window:(int)arg2 tmuxController:(id)arg3 name:(id)arg4;
- (struct CGSize)tmuxCompatibleSize;
- (void)newTmuxTab:(id)arg1;
- (void)newTmuxWindow:(id)arg1;
- (id)currentTmuxController;
- (void)detachTmux:(id)arg1;
- (void)findUrls:(id)arg1;
- (BOOL)broadcastInputToSession:(id)arg1;
- (void)sendInputToAllSessions:(id)arg1 encoding:(unsigned long long)arg2 forceEncoding:(BOOL)arg3;
- (id)broadcastSessions;
- (void)setWindowTitle:(id)arg1;
- (void)setWindowTitle;
- (id)currentSession;
- (void)makeSessionActive:(id)arg1;
- (id)currentTab;
- (int)numberOfTabs;
- (void)nextPane:(id)arg1;
- (void)previousPane:(id)arg1;
- (void)nextTab:(id)arg1;
- (void)previousTab:(id)arg1;
- (void)restartSessionWithConfirmation:(id)arg1;
- (void)restartSession:(id)arg1;
- (void)closeSessionWithConfirmation:(id)arg1;
- (void)closeCurrentSession:(id)arg1;
- (void)closeTabIfConfirmed:(id)arg1;
- (void)closeCurrentTab:(id)arg1;
- (void)colorPresetsDidChange:(id)arg1;
- (void)keyBindingsDidChange:(id)arg1;
- (void)activeSpaceDidChange:(id)arg1;
- (void)updateFullScreenTabBar:(id)arg1;
- (BOOL)hasSavedScrollPosition;
- (void)jumpToSavedScrollPosition:(id)arg1;
- (void)saveScrollPosition:(id)arg1;
- (void)toggleSelectionRespectsSoftBoundaries:(id)arg1;
- (void)toggleCursorGuide:(id)arg1;
- (void)findCursor:(id)arg1;
- (void)removeTab:(id)arg1;
- (id)restorableSessionForTab:(id)arg1;
- (void)storeWindowStateInRestorableSession:(id)arg1;
- (id)restorableSessionForSession:(id)arg1;
- (void)closeTab:(id)arg1;
- (void)closeTab:(id)arg1 soft:(BOOL)arg2;
- (BOOL)willShowTmuxWarningWhenClosingTab:(id)arg1;
- (BOOL)tabIsAttachedTmuxTabWithSessions:(id)arg1;
- (void)performClose:(id)arg1;
- (BOOL)confirmCloseTab:(id)arg1 suppressConfirmation:(BOOL)arg2;
- (BOOL)confirmCloseForSessions:(id)arg1 identifier:(id)arg2 genericName:(id)arg3;
- (id)prettyListOfStrings:(id)arg1;
- (id)uniqWithCounts:(id)arg1;
- (int)windowType;
- (void)softCloseSession:(id)arg1;
- (void)closeSession:(id)arg1;
- (BOOL)terminalWindowShouldConstrainFrameToScreen;
- (void)tabTitleDidChange:(id)arg1;
- (id)tabForSession:(id)arg1;
- (void)closeSession:(id)arg1 soft:(BOOL)arg2;
- (void)newSessionInTabAtIndex:(id)arg1;
- (long long)indexOfTab:(id)arg1;
- (void)selectSessionAtIndexAction:(id)arg1;
- (void)swipeWithEvent:(id)arg1;
- (void)magnifyWithEvent:(id)arg1;
@property(readonly, nonatomic) NSScreen *screen;
- (id)tabWithUniqueId:(int)arg1;
- (id)ptyWindow;
- (void)setFrameValue:(id)arg1;
- (int)number;
- (id)terminalDraggedFromAnotherWindowAtPoint:(struct CGPoint)arg1;
- (void)tmuxFontDidChange:(id)arg1;
- (void)popupWillClose:(id)arg1;
- (void)toggleToolbeltVisibility:(id)arg1;
- (void)setDefaultToolbeltWidth:(id)arg1;
- (void)hideToolbelt;
@property(readonly, nonatomic) BOOL windowIsResizing;
@property(readonly, nonatomic) BOOL shouldShowToolbelt;
- (void)notifyTmuxOfWindowResize;
- (void)toggleBroadcastingToCurrentSession:(id)arg1;
- (double)tabviewWidth;
- (void)rootTerminalViewDidResizeContentArea;
- (BOOL)divisionViewShouldBeVisible;
- (BOOL)tabBarVisibleOnTop;
@property(readonly, copy) NSString *description;
- (void)iterm_dealloc;
- (void)dealloc;
- (id)weakSelf;
- (void)finishToolbeltInitialization;
- (BOOL)isFloatingHotKeyWindow;
- (BOOL)isHotKeyWindow;
- (void)finishInitializationWithSmartLayout:(BOOL)arg1 windowType:(int)arg2 savedWindowType:(int)arg3 screen:(int)arg4 hotkeyWindowType:(unsigned long long)arg5;
- (id)anchorToScreenNumber:(int)arg1;
- (id)initWithSmartLayout:(BOOL)arg1 windowType:(int)arg2 savedWindowType:(int)arg3 screen:(int)arg4 hotkeyWindowType:(unsigned long long)arg5;
- (id)initWithSmartLayout:(BOOL)arg1 windowType:(int)arg2 savedWindowType:(int)arg3 screen:(int)arg4;
- (id)initWithWindowNibName:(id)arg1;
- (struct CGSize)scrubber:(id)arg1 layout:(id)arg2 sizeForItemAtIndex:(long long)arg3;
- (id)scrubber:(id)arg1 viewForItemAtIndex:(long long)arg2;
- (id)scrubber:(id)arg1 labelAtIndex:(long long)arg2;
- (long long)numberOfItemsForScrubber:(id)arg1;
- (void)scrubber:(id)arg1 didSelectItemAtIndex:(long long)arg2;
- (void)candidateListTouchBarItem:(id)arg1 endSelectingCandidateAtIndex:(long long)arg2;
- (void)sendFunctionKeyToCurrentSession:(long long)arg1;
- (void)functionKeyTouchBarItemSelected:(id)arg1;
- (void)colorPresetTouchBarItemSelected:(id)arg1;
- (void)statusTouchBarItemSelected:(id)arg1;
- (void)manPageTouchBarItemSelected:(id)arg1;
- (void)previousMarkTouchBarItemSelected:(id)arg1;
- (void)nextMarkTouchBarItemSelected:(id)arg1;
- (void)addMarkTouchBarItemSelected:(id)arg1;
- (void)touchBarItemSelected:(id)arg1;
- (id)touchBar:(id)arg1 makeItemForIdentifier:(id)arg2;
- (id)colorPresetsScrollViewTouchBarItem;
- (void)addButtonsToColorPresetsDocumentView:(id)arg1;
- (void)constrainButton:(id)arg1 toRightOfSuperview:(id)arg2;
- (void)addConstraintsToButton:(id)arg1 superView:(id)arg2 previous:(id)arg3;
- (id)functionKeysTouchBarItem;
- (void)updateManPageButton:(id)arg1 word:(id)arg2;
- (id)amendTouchBar:(id)arg1;
- (void)updateTouchBarIfNeeded:(BOOL)arg1;
- (id)makeGenericTouchBar;
- (void)updateTouchBarFunctionKeyLabelsInScrollView:(id)arg1;
- (void)updateStatus;
- (void)updateTouchBarWithWordAtCursor:(id)arg1;
- (void)updateColorPresets;
- (void)updateTouchBarFunctionKeyLabels;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

