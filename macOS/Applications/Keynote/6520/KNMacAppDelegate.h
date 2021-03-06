//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TMAApplicationDelegate.h"

#import "NSMenuDelegate.h"
#import "TMAFirstLaunchDelegate.h"

@class KNMacShareToolbarMenuController, NSMenu, NSRunningApplication, NSSet, NSString;

@interface KNMacAppDelegate : TMAApplicationDelegate <TMAFirstLaunchDelegate, NSMenuDelegate>
{
    KNMacShareToolbarMenuController *_shareToolbarMenuController;
    NSSet *_fileAdvancedMenuAppendedItems;
    BOOL _fileAdvancedMenuAppended;
    NSRunningApplication *_observedRunningApplication;
    NSMenu *_playMenu;
    NSMenu *_fileAdvancedMenu;
}

+ (id)sharedDelegate;
@property(retain, nonatomic) NSMenu *fileAdvancedMenu; // @synthesize fileAdvancedMenu=_fileAdvancedMenu;
@property(retain, nonatomic) NSMenu *playMenu; // @synthesize playMenu=_playMenu;
- (void).cxx_destruct;
- (id)appPreferencesMovieSettingsLearnMoreAPDID;
- (id)reduceFileSizeLearnMoreAPDID;
@property(readonly, nonatomic) NSString *showcastAPDID;
- (id)shareSettingsAPDID;
- (id)keyboardShortcutAPDID;
- (void)importPresenterDisplayConfigurations:(id)arg1;
- (void)exportPresenterDisplayConfigurations:(id)arg1;
- (id)boxOptInImage;
- (void)menuNeedsUpdate:(id)arg1;
- (void)removePhoneticsMenuIfNecessary;
- (id)shareToolbarMenuController;
- (void)sendACopySubmenu:(CDUnknownBlockType)arg1;
- (id)aboutPanelCopyrightNotice;
- (void)applicationWillTerminate:(id)arg1;
- (void)applicationWillBecomeActive:(id)arg1;
- (BOOL)applicationShouldHandleReopen:(id)arg1 hasVisibleWindows:(BOOL)arg2;
- (BOOL)applicationShouldOpenUntitledFile:(id)arg1;
- (void)p_registerForMediaKeys;
- (void)applicationDidFinishLaunching:(id)arg1;
- (void)applicationWillFinishLaunching:(id)arg1;
- (id)createStringsProvider;
- (id)createDownloadDelegate;
- (id)createTemplateManagerDelegate;
- (id)createBaseApplicationDelegate;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)init;
- (id)whatsNewMicaFilename;
- (id)whatsNewFeatureListLinkString;
- (id)whatsNewReleaseNotesURLString;
- (id)whatsNewFeatureCaptionStrings;
- (id)whatsNewFeatureHeadingStrings;
- (id)whatsNewTitleString;
- (double)firstLaunchFeaturesContentWidth;
- (id)firstLaunchFeatureItemCaptionStrings;
- (id)firstLaunchFeatureItemHeadingStrings;
- (id)firstLaunchWelcomeLicenseString;
- (id)firstLaunchWelcomeSubtitleString;
- (id)firstLaunchWelcomeTitleString;
- (id)firstLaunchViewDocumentsButtonTitleString;
- (id)firstLaunchCreateDocumentButtonTitleString;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

