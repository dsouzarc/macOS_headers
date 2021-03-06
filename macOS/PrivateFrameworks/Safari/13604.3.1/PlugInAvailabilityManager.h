//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface PlugInAvailabilityManager : NSObject
{
    BOOL _isUnitTesting;
    BOOL _needsTurnOffOffByDefaultPlugIns;
}

+ (BOOL)test_plugInInitializedAsEnabled:(id)arg1;
+ (id)test_plugInIsEnabledKey;
+ (id)test_plugInStateModifiedVersionStringKey;
+ (id)test_plugInStateModifiedDateKey;
+ (id)test_disabledPlugInVersionStringKey;
+ (id)test_disabledPlugInDisableDateKey;
+ (id)sharedManager;
@property(nonatomic) BOOL needsTurnOffOffByDefaultPlugIns; // @synthesize needsTurnOffOffByDefaultPlugIns=_needsTurnOffOffByDefaultPlugIns;
- (BOOL)test_shouldDisablePlugIn:(id)arg1 updateInfo:(id)arg2;
- (id)test_updatePlugInInfo:(id)arg1 plugInInfo:(id)arg2 getNameOfNewlyInstalledPlugIn:(id *)arg3 andBundleIdentifier:(id *)arg4;
- (BOOL)test_shouldEnablePlugInWhenMigratingFromDisabledDictionaryToAllPlugInsDictionary:(id)arg1;
- (void)test_removePlugInWithBundleIdentifier:(id)arg1;
- (id)test_migratedPlugInDictionaryForPlugins:(id)arg1 withDisabledPlugInInfo:(id)arg2;
- (id)test_modifiedPlugInInfoWithBundleIdentifier:(id)arg1 versionString:(id)arg2 inExistingPlugInInfo:(id)arg3 onState:(BOOL)arg4 modifiedDate:(id)arg5;
- (id)test_modifiedPlugInInfoWithBundleIdentifier:(id)arg1 versionString:(id)arg2 inExistingPlugInInfo:(id)arg3 onState:(BOOL)arg4;
- (id)test_lastUserUpdateDateForPlugInWithBundleIdentifier:(id)arg1 fromUpdateInfoDictionary:(id)arg2;
- (id)test_disabledPlugInInfoByEnablingPlugInWithBundleIdentifier:(id)arg1 inExistingDisabledPlugInInfo:(id)arg2;
- (id)test_disabledPlugInInfoByDisablingPlugInWithBundleIdentifier:(id)arg1 versionString:(id)arg2 inExistingDisabledPlugInInfo:(id)arg3;
- (void)test_addPlugIn:(id)arg1 onState:(BOOL)arg2;
- (id)test_init;
- (void)_determineFlashAvailabilityRefreshingPlugInsStateIfNeeded:(CDUnknownBlockType)arg1;
- (void)_refreshPagesRequiringFlashIfFlashBecameAvailable;
- (void)applicationWasTerminated:(id)arg1;
- (id)_updatePlugInInfo:(id)arg1 plugInInfo:(id)arg2 getNameOfNewlyInstalledPlugIn:(id *)arg3 andBundleIdentifier:(id *)arg4;
- (id)_versionStringForPlugInWithBundleIdentifier:(id)arg1 fromDisabledPlugInInfo:(id)arg2;
- (id)_disableDateForPlugInWithBundleIdentifier:(id)arg1 fromDisabledPlugInInfo:(id)arg2;
- (id)_lastPlugInEnabledStateModifiedDateForPlugInWithBundleIdentifier:(id)arg1 fromUpdateInfoDictionary:(id)arg2;
- (id)_lastUserUpdateDateForPlugInWithBundleIdentifier:(id)arg1 fromUpdateInfoDictionary:(id)arg2;
- (id)_lastUserUpdateOrModifiedDateForPlugInWithBudleIdentifier:(id)arg1 path:(id)arg2 updateInfo:(id)arg3;
- (id)_modifiedPlugInInfoWithBundleIdentifier:(id)arg1 versionString:(id)arg2 inExistingPlugInInfo:(id)arg3 onState:(BOOL)arg4 modifiedDate:(id)arg5;
- (id)_modifiedPlugInInfoWithBundleIdentifier:(id)arg1 versionString:(id)arg2 inExistingPlugInInfo:(id)arg3 onState:(BOOL)arg4;
- (id)_plugInInfoKeyForBundleIdentifier:(id)arg1;
- (id)_lastModifiedDateForPlugInWithBundleAtPath:(id)arg1;
- (id)_disabledPlugInInfoByEnablingPlugInWithBundleIdentifier:(id)arg1 inExistingDisabledPlugInInfo:(id)arg2;
- (id)_disabledPlugInInfoByDisablingPlugInWithBundleIdentifier:(id)arg1 versionString:(id)arg2 inExistingDisabledPlugInInfo:(id)arg3;
- (id)_plugInInfoFromCurrentUser;
- (id)_persistedPlugInInfo;
- (void)_plugInWasUpdatedByUser:(id)arg1;
- (void)updatePlugInsStateIfNeededShowingNewlyInstalledDialogIfNeeded;
- (void)updatePlugInsStateIfNeededShowingNewlyInstalledDialog:(BOOL)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)migrateToListAllPlugInsInDictionaryIfNecessary;
- (id)_migratedPlugInDictionaryForPlugins:(id)arg1 withDisabledPlugInInfo:(id)arg2;
- (BOOL)_shouldEnablePlugInWhenMigratingFromDisabledDictionaryToAllPlugInsDictionary:(id)arg1;
- (void)turnOffPlugInsIfNeeded;
- (BOOL)_showNewlyInstalledPlugInDialogWithPlugInName:(id)arg1 bundleIdentifier:(id)arg2;
- (BOOL)_shouldDisablePlugIn:(id)arg1 updateInfo:(id)arg2;
- (void)turnOnPlugInWithBundleIdentifier:(id)arg1 versionString:(id)arg2 notifyManagedPlugInsController:(BOOL)arg3;
- (void)turnOffPlugInWithBundleIdentifier:(id)arg1 versionString:(id)arg2;
- (BOOL)isPlugInEnabled:(id)arg1;
- (void)dealloc;
- (id)_init;

@end

