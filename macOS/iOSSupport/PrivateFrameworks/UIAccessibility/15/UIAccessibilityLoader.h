//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface UIAccessibilityLoader : NSObject
{
}

+ (void)loadActualAccessibilityBundle:(id)arg1 didLoadCallback:(CDUnknownBlockType)arg2 loadSubbundles:(BOOL)arg3;
+ (void)loadAccessibilityBundle:(id)arg1 didLoadCallback:(CDUnknownBlockType)arg2 force:(BOOL)arg3 loadAllAccessibilityInfo:(BOOL)arg4;
+ (void)loadAccessibilityBundle:(id)arg1 didLoadCallback:(CDUnknownBlockType)arg2;
+ (void)_stringLocalizationStarted:(id)arg1;
+ (void)_didLoadPreboardAccessibilityBundle;
+ (void)_didLoadSystemAppAccessibilityBundle;
+ (id)_accessibilityBundlesForBundle:(id)arg1;
+ (void)loadAccessibilityBundle:(id)arg1 didLoadCallback:(CDUnknownBlockType)arg2 loadSubbundles:(BOOL)arg3;
+ (void)loadAccessibilityBundleForBundle:(id)arg1 didLoadCallback:(CDUnknownBlockType)arg2 forceLoad:(BOOL)arg3 loadSubbundles:(BOOL)arg4 loadAllAccessibilityInfo:(BOOL)arg5;
+ (void)loadAccessibilityBundleForBundle:(id)arg1 didLoadCallback:(CDUnknownBlockType)arg2 force:(BOOL)arg3 loadAllAccessibilityInfo:(BOOL)arg4;
+ (void)loadAccessibilityBundleForBundle:(id)arg1 didLoadCallback:(CDUnknownBlockType)arg2;
+ (void)_accessibilityInitializeSubclassRuntimeOverrides;
+ (void)_accessibilityInitializeRuntimeOverrides;
+ (BOOL)_accessibilityStringLocalizationCategoriesLoaded;
+ (BOOL)_accessibilityUIKitBundleLoaded;
+ (BOOL)_accessibilityServerStarted;
+ (void)_accessibilityStopServer;
+ (void)_accessibilityReenabled;
+ (void)_accessibilityStartMiniServer;
+ (void)_accessibilityStartServer;
+ (void)_performInitialAccessibilityBundleLoad:(BOOL)arg1 monitorForFutureLoadEvents:(BOOL)arg2 trackingMode:(long long)arg3;

@end

