//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

@class ITSwitch, NSButton, NSImageView, NSSwitch, NSTextField, NSTextView;

@interface ViewController : NSViewController
{
    BOOL _useTranslucency;
    NSImageView *_previewOne;
    NSImageView *_previewTwo;
    NSImageView *_previewThree;
    NSImageView *_previewFour;
    NSImageView *_previewFive;
    NSTextField *_nameLabel;
    NSButton *_authorButton;
    NSButton *_chooseButton;
    NSButton *_applyButton;
    NSButton *_removeButton;
    NSImageView *_profileImage;
    NSTextField *_versionLabel;
    NSImageView *_authOne;
    NSImageView *_authTwo;
    NSImageView *_graphics;
    NSTextView *_bundleIDField;
    ITSwitch *_darkModeSwitch;
    NSSwitch *_translucencySwitch;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL useTranslucency; // @synthesize useTranslucency=_useTranslucency;
@property __weak NSSwitch *translucencySwitch; // @synthesize translucencySwitch=_translucencySwitch;
@property __weak ITSwitch *darkModeSwitch; // @synthesize darkModeSwitch=_darkModeSwitch;
@property __weak NSTextView *bundleIDField; // @synthesize bundleIDField=_bundleIDField;
@property __weak NSImageView *graphics; // @synthesize graphics=_graphics;
@property __weak NSImageView *authTwo; // @synthesize authTwo=_authTwo;
@property __weak NSImageView *authOne; // @synthesize authOne=_authOne;
@property __weak NSTextField *versionLabel; // @synthesize versionLabel=_versionLabel;
@property __weak NSImageView *profileImage; // @synthesize profileImage=_profileImage;
@property __weak NSButton *removeButton; // @synthesize removeButton=_removeButton;
@property __weak NSButton *applyButton; // @synthesize applyButton=_applyButton;
@property __weak NSButton *chooseButton; // @synthesize chooseButton=_chooseButton;
@property __weak NSButton *authorButton; // @synthesize authorButton=_authorButton;
@property __weak NSTextField *nameLabel; // @synthesize nameLabel=_nameLabel;
@property __weak NSImageView *previewFive; // @synthesize previewFive=_previewFive;
@property __weak NSImageView *previewFour; // @synthesize previewFour=_previewFour;
@property __weak NSImageView *previewThree; // @synthesize previewThree=_previewThree;
@property __weak NSImageView *previewTwo; // @synthesize previewTwo=_previewTwo;
@property __weak NSImageView *previewOne; // @synthesize previewOne=_previewOne;
- (void)setThemeKitIcon:(int)arg1;
- (id)getAuthorURL;
- (void)openAuthorPage:(id)arg1;
- (void)killDock;
- (void)killFinder;
- (void)darkMode:(id)arg1;
- (void)handleAppDelegateDownloadURL:(id)arg1;
- (void)viewWillLayout;
- (void)reportBug:(id)arg1;
- (void)remount;
- (void)checkForRoot;
- (void)openThemes:(id)arg1;
- (void)openSupport:(id)arg1;
- (void)saveBundleIdentifiersToFile:(id)arg1;
- (void)dumpBundleIDs:(id)arg1;
- (void)clearCache:(BOOL)arg1;
- (void)github:(id)arg1;
- (void)ITSwitch:(id)arg1;
- (void)libraries:(id)arg1;
- (void)twitterThree:(id)arg1;
- (void)twitterTwo:(id)arg1;
- (void)twitter:(id)arg1;
- (void)setVersion;
- (void)setRepresentedObject:(id)arg1;
- (void)removeTheme;
- (id)completedApps:(id)arg1:(id)arg2;
- (void)sendNotification:(id)arg1;
- (void)applyTheme;
- (id)getBundleID:(id)arg1;
- (BOOL)isCatalina;
- (id)getCurrentTheme;
- (void)setCurrentTheme:(id)arg1;
- (BOOL)getUsesFeaturedIcons;
- (id)getCurrentAuthor;
- (id)getCurrentName;
- (void)setPreview;
- (BOOL)checkIfThemeEnabled;
- (void)createMainPlist;
- (void)setupDirectories;
- (void)runPriviledgedTask:(id)arg1:(id)arg2;
- (BOOL)runTask:(id)arg1:(id)arg2;
- (void)remove:(id)arg1;
- (void)apply:(id)arg1;
- (void)choose:(id)arg1;
- (void)viewDidLoad;

@end

