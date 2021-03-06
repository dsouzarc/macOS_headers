//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

#import "ConversionDelegate-Protocol.h"

@class ConversionController, LCDController, NSButton, NSDictionary, NSLayoutConstraint, NSMenu, NSMenuItem, NSMutableArray, NSMutableDictionary, NSSavePanel, NSString, PaperTapeController, SpeechController;

@interface CalculatorController : NSWindowController <ConversionDelegate>
{
    NSMenu *mConvertMenu;
    NSMenu *mPrecisionMenu;
    NSButton *mClearTapeButton;
    PaperTapeController *mTapeWindow;
    SpeechController *mSpeechController;
    NSMenuItem *mRecentConversionsMenuItem;
    NSMenu *mRecentConversionsMenu;
    NSMenuItem *mClearRecentConversionsMenuItem;
    NSMenuItem *mRPNMenuItem;
    NSMenuItem *mSeparatorsItem;
    NSMenuItem *mIEEEItem;
    NSMenuItem *mRPNContextualMenuItem;
    NSMenuItem *mCloseMenuItem;
    NSMenu *mDebugMenu;
    NSLayoutConstraint *parentLCDHeight;
    NSLayoutConstraint *parentLCDWidth;
    LCDController *mLCD;
    NSDictionary *mSpeakableItemsDict;
    NSMenu *_ViewsMenu;
    BOOL mZoomed;
    int mPreviousWindowSize;
    NSSavePanel *mSavePanel;
    NSMutableDictionary *mPlugins;
    BOOL g_RPN;
    ConversionController *_conversionController;
    NSString *__PreviousViewKey;
    id __CurrentView;
    NSMutableDictionary *__ViewControllerDict;
    NSMutableDictionary *__ViewControllerPathDict;
    NSMutableArray *__OrderedControllerNames;
    int __BackEndMode;
    NSString *mHandoffValue;
}

+ (void)restoreWindowWithIdentifier:(id)arg1 state:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)window:(id)arg1 willEncodeRestorableState:(id)arg2;
- (void)windowDidLoad;
- (void)windowWillClose:(id)arg1;
- (void)windowDidBecomeKey:(id)arg1;
- (void)windowDidMove:(id)arg1;
- (void)windowDidUpdate:(id)arg1;
- (struct CGSize)windowWillResize:(id)arg1 toSize:(struct CGSize)arg2;
- (BOOL)windowShouldZoom:(id)arg1 toFrame:(struct CGRect)arg2;
- (BOOL)applicationShouldTerminateAfterLastWindowClosed:(id)arg1;
- (void)_loadPlugins;
- (void)applicationDidFinishLaunching:(id)arg1;
- (void)processHandoffFromSpotlight:(id)arg1;
- (BOOL)applicationShouldHandleReopen:(id)arg1 hasVisibleWindows:(BOOL)arg2;
- (BOOL)applicationShouldOpenUntitledFile:(id)arg1;
- (void)handleConversion:(id)arg1;
- (BOOL)readyForConversion;
- (void)conversionCategoriesHaveChanged;
- (void)recentConversionsHaveChanged;
- (void)setCurrentView:(id)arg1;
- (void)adjustWindowPosition;
- (id)localizedValueForString:(id)arg1;
- (void)writeObject:(id)arg1 toPasteboard:(id)arg2;
- (void)copy:(id)arg1;
- (id)previousView:(id)arg1;
- (id)lcd:(id)arg1;
- (void)sendDataToCalcEngine:(id)arg1;
- (void)setBackEndMode:(int)arg1;
- (void)populateViewsMenu;
- (void)loadView:(id)arg1 asPrefetch:(BOOL)arg2;
- (id)pathsToPlugins;
- (void)initItemsWithStoredDefaults;
- (void)awakeFromNib;
- (void)populateConvertMenu;
- (void)updateRecentConversionsMenu;
- (BOOL)validateMenuItem:(id)arg1;
- (BOOL)languageIsFrench;
- (void)dumpStack:(id)arg1;
- (void)showAbout:(id)arg1;
- (void)prepareConversion:(id)arg1;
- (void)menuViewSelectionDidChange:(id)arg1;
- (void)toggleRPNMode:(id)arg1;
- (void)toggleSeparators:(id)arg1;
- (void)clearRecentConversionsMenu:(id)arg1;
- (void)convert:(id)arg1;
- (void)setPrecision:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

