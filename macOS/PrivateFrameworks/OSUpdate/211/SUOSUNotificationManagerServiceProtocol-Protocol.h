//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSArray, NSData, NSString;

@protocol SUOSUNotificationManagerServiceProtocol
- (void)postAndProceedWithAutoUpdateNotification:(void (^)(BOOL))arg1;
- (void)mdmMajorOSUpdateStatusWithCompletionHandler:(void (^)(NSDictionary *))arg1;
- (void)startInstallingMDMMajorOSUpdateWithBundleId:(NSString *)arg1 orVersion:(NSString *)arg2 completionHandler:(void (^)(void))arg3;
- (void)queueAutoUpdatesForLaterWithCompletionHandler:(void (^)(void))arg1;
- (void)startInstallingDoItLaterUpdatesWithCompletionHandler:(void (^)(void))arg1;
- (void)postDoItLaterOtherUsersLoggedInNotificationWithCompletionHandler:(void (^)(void))arg1;
- (void)postDoItLaterUpdatesFailedNotificationRestartRequired:(BOOL)arg1 offerLater:(BOOL)arg2 completionHandler:(void (^)(void))arg3;
- (void)postMajorOSUpdateMDMRequestedNotificationWithCompletionHandler:(void (^)(void))arg1;
- (void)quitAppsWithModalAlert:(NSArray *)arg1 completionHandler:(void (^)(BOOL, NSError *))arg2;
- (void)relaunchAnyQuitApps;
- (void)silentlyQuitApps:(NSArray *)arg1 completionHandler:(void (^)(BOOL, NSError *))arg2;
- (void)removeAllNotifications;
- (void)disarmRestartCountdownWithCompletionHandler:(void (^)(BOOL))arg1;
- (void)armRestartCountdownWithCompletionHandler:(void (^)(BOOL))arg1;
- (void)cancelRestartCountdownOperation;
- (void)cancelDownloadingUpdatesForRestartCountdown:(void (^)(BOOL))arg1;
- (void)startDownloadingUpdatesForRestartCountdown:(NSArray *)arg1 nowIsLater:(BOOL)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)setAuthorization:(NSData *)arg1 completionHandler:(void (^)(BOOL))arg2;
@end

