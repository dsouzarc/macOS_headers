//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "ABPreferencesModule.h"

@class ABDefaultAccountPopupController, ABShortNamePreferencesController, NSMatrix, NSPopUpButton, NSUserDefaultsController;

@interface ABGeneralPreferencesModule : ABPreferencesModule
{
    NSUserDefaultsController *_userDefaultsController;
    NSMatrix *_nameDisplayMatrix;
    NSPopUpButton *_nameSortingPopup;
    NSPopUpButton *_addressFormatsPopup;
    ABDefaultAccountPopupController *_defaultAccountController;
    ABShortNamePreferencesController *_shortNamePreferencesController;
}

@property(retain) ABShortNamePreferencesController *shortNamePreferencesController; // @synthesize shortNamePreferencesController=_shortNamePreferencesController;
@property ABDefaultAccountPopupController *defaultAccountController; // @synthesize defaultAccountController=_defaultAccountController;
@property NSPopUpButton *addressFormatsPopup; // @synthesize addressFormatsPopup=_addressFormatsPopup;
@property NSPopUpButton *nameSortingPopup; // @synthesize nameSortingPopup=_nameSortingPopup;
@property NSMatrix *nameDisplayMatrix; // @synthesize nameDisplayMatrix=_nameDisplayMatrix;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)updateDefaultCountryCode:(id)arg1;
- (void)populatePopupButton:(id)arg1 withContentsOfPlist:(id)arg2 preferenceKeyBinding:(id)arg3;
- (void)willBeDisplayed;
- (void)awakeFromNib;
- (BOOL)isResizable;
- (id)imageForPreferenceNamed:(id)arg1;
- (void)help:(id)arg1;
- (void)dealloc;

@end

