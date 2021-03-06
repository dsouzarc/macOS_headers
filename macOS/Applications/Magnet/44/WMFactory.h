//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AXSystemElement, NSStatusItem, NSUserDefaults, WMAppSettings, WMBezelController, WMDragObserver, WMFactoryBlacklist, WMFocusObserver, WMRatingReminderController, WMTrialController, WMUserBlackList, WMWindowManager;

@interface WMFactory : NSObject
{
    WMTrialController *_trialController;
    WMAppSettings *_settings;
    WMWindowManager *_windowManager;
    NSUserDefaults *_userDefaults;
    AXSystemElement *_inspector;
    WMFocusObserver *_focusObserver;
    WMFactoryBlacklist *_factoryBlacklist;
    WMRatingReminderController *_ratingReminder;
    WMUserBlackList *_userBlacklist;
    WMDragObserver *_dragObserver;
    WMBezelController *_bezelController;
    NSStatusItem *_appStatusItem;
}

@property(retain) NSStatusItem *appStatusItem; // @synthesize appStatusItem=_appStatusItem;
@property(retain) WMBezelController *bezelController; // @synthesize bezelController=_bezelController;
@property(retain) WMDragObserver *dragObserver; // @synthesize dragObserver=_dragObserver;
@property(retain) WMUserBlackList *userBlacklist; // @synthesize userBlacklist=_userBlacklist;
@property(retain) WMRatingReminderController *ratingReminder; // @synthesize ratingReminder=_ratingReminder;
@property(retain) WMFactoryBlacklist *factoryBlacklist; // @synthesize factoryBlacklist=_factoryBlacklist;
@property(retain) WMFocusObserver *focusObserver; // @synthesize focusObserver=_focusObserver;
@property(retain) AXSystemElement *inspector; // @synthesize inspector=_inspector;
@property(retain) NSUserDefaults *userDefaults; // @synthesize userDefaults=_userDefaults;
@property(retain) WMWindowManager *windowManager; // @synthesize windowManager=_windowManager;
@property(retain) WMAppSettings *settings; // @synthesize settings=_settings;
@property(retain) WMTrialController *trialController; // @synthesize trialController=_trialController;
- (void).cxx_destruct;
- (id)wireTrialController;
- (id)wireRatingReminder;
- (id)wireDragController;
- (id)wireHotKeyController;
- (id)wireAppMenuController;
- (id)wireBezelController;
- (id)wireDragObserver;
- (id)wireFocusObserver;
- (id)wireUserBlacklist;
- (id)wireFactoryBlacklist;
- (id)wireWindowManager;
- (id)wireAboutController;
- (id)wireSettingsWideScreenController;
- (id)wireSettingsController;
- (id)wireSettings;
- (id)init;

@end

