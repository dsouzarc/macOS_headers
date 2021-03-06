//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

@class NSButton, NSImageView, NSLayoutConstraint, NSMenuItem, NSPopUpButton, NSSlider, NSString, NSTextField, NSWindow, SKDisk, SKFilesystem, SUBaseProgressSheet, SUPasswordEntryDialog;

@interface SUEraseSheetController : NSWindowController
{
    _Bool _willSecureErase;
    _Bool _didInternalStorageFormatWarning;
    _Bool _isPhysicalDisk;
    _Bool _isSDCard;
    NSWindow *_parentWindow;
    SUBaseProgressSheet *_eraseProgressSheet;
    NSImageView *_diskIconView;
    NSTextField *_sheetTitle;
    NSTextField *_sheetDescription;
    NSTextField *_volumeName;
    NSPopUpButton *_eraseFormatPopup;
    NSTextField *_partitionFormatLabel;
    NSPopUpButton *_schemeFormatPopup;
    NSLayoutConstraint *_collapseSchemeConstraint;
    NSWindow *_secureOptionsWindow;
    NSButton *_secureEraseOptionButton;
    NSButton *_eraseButton;
    NSSlider *_secureEraseSlider;
    NSTextField *_secureEraseDescription;
    SUPasswordEntryDialog *_passwordEntrySheet;
    SKDisk *_targetDisk;
    NSString *_targetTitle;
    NSString *_displayDiskIdentifier;
    NSMenuItem *_unknownItem;
    NSString *_password;
    NSString *_passwordHint;
    SKFilesystem *_previouslySelectedFormat;
}

@property _Bool isSDCard; // @synthesize isSDCard=_isSDCard;
@property _Bool isPhysicalDisk; // @synthesize isPhysicalDisk=_isPhysicalDisk;
@property _Bool didInternalStorageFormatWarning; // @synthesize didInternalStorageFormatWarning=_didInternalStorageFormatWarning;
@property(retain) SKFilesystem *previouslySelectedFormat; // @synthesize previouslySelectedFormat=_previouslySelectedFormat;
@property(retain) NSString *passwordHint; // @synthesize passwordHint=_passwordHint;
@property(retain) NSString *password; // @synthesize password=_password;
@property(retain) NSMenuItem *unknownItem; // @synthesize unknownItem=_unknownItem;
@property(retain) NSString *displayDiskIdentifier; // @synthesize displayDiskIdentifier=_displayDiskIdentifier;
@property(retain) NSString *targetTitle; // @synthesize targetTitle=_targetTitle;
@property(retain) SKDisk *targetDisk; // @synthesize targetDisk=_targetDisk;
@property(retain) SUPasswordEntryDialog *passwordEntrySheet; // @synthesize passwordEntrySheet=_passwordEntrySheet;
@property __weak NSTextField *secureEraseDescription; // @synthesize secureEraseDescription=_secureEraseDescription;
@property __weak NSSlider *secureEraseSlider; // @synthesize secureEraseSlider=_secureEraseSlider;
@property _Bool willSecureErase; // @synthesize willSecureErase=_willSecureErase;
@property __weak NSButton *eraseButton; // @synthesize eraseButton=_eraseButton;
@property __weak NSButton *secureEraseOptionButton; // @synthesize secureEraseOptionButton=_secureEraseOptionButton;
@property __weak NSWindow *secureOptionsWindow; // @synthesize secureOptionsWindow=_secureOptionsWindow;
@property __weak NSLayoutConstraint *collapseSchemeConstraint; // @synthesize collapseSchemeConstraint=_collapseSchemeConstraint;
@property __weak NSPopUpButton *schemeFormatPopup; // @synthesize schemeFormatPopup=_schemeFormatPopup;
@property __weak NSTextField *partitionFormatLabel; // @synthesize partitionFormatLabel=_partitionFormatLabel;
@property __weak NSPopUpButton *eraseFormatPopup; // @synthesize eraseFormatPopup=_eraseFormatPopup;
@property __weak NSTextField *volumeName; // @synthesize volumeName=_volumeName;
@property __weak NSTextField *sheetDescription; // @synthesize sheetDescription=_sheetDescription;
@property __weak NSTextField *sheetTitle; // @synthesize sheetTitle=_sheetTitle;
@property __weak NSImageView *diskIconView; // @synthesize diskIconView=_diskIconView;
@property(retain) SUBaseProgressSheet *eraseProgressSheet; // @synthesize eraseProgressSheet=_eraseProgressSheet;
@property(retain) NSWindow *parentWindow; // @synthesize parentWindow=_parentWindow;
- (void).cxx_destruct;
- (void)closeSecurityOptions:(id)arg1;
- (void)securityOptionsClicked:(id)arg1;
- (void)sliderValueChanged:(id)arg1;
- (void)cancelClicked:(id)arg1;
- (void)eraseClicked:(id)arg1;
- (void)partitionMapFormatChanged:(id)arg1;
- (void)formatChanged:(id)arg1;
- (void)updateEraseFormatPopup;
- (id)_partitionMapFormats;
- (void)showWindowWithParentWindow:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)_validateEraseButtonEnabledFormatChanged:(BOOL)arg1;
- (BOOL)_validateNameFormatChanged:(BOOL)arg1;
- (void)volumeNameUpdated:(id)arg1;
- (void)windowDidLoad;
- (id)initWithTargetDisk:(id)arg1;

@end

