//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary, NSSet, WBSKeychainCredentialNotificationMonitor;
@protocol OS_dispatch_queue;

@interface WBSSavedPasswordStore : NSObject
{
    NSMutableDictionary *_domainToUsers;
    NSArray *_savedPasswords;
    WBSKeychainCredentialNotificationMonitor *_keychainMonitor;
    id _keychainNotificationRegistrationToken;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _hasPasswordsEligibleForAutoFill;
}

+ (void)removePassword:(id)arg1;
+ (id)sharedStore;
@property(readonly, nonatomic) BOOL hasPasswordsEligibleForAutoFill; // @synthesize hasPasswordsEligibleForAutoFill=_hasPasswordsEligibleForAutoFill;
- (void).cxx_destruct;
- (id)persistentIdentifierForCredential:(id)arg1 protectionSpace:(id)arg2;
- (void)_ensureDomainsToUsersExists;
- (void)_cleanUpRedundantCredentialsWithoutUsernames;
- (void)reset;
- (void)_postSavedPasswordStoreDidChangeNotification;
- (id)saveUser:(id)arg1 password:(id)arg2 forProtectionSpace:(id)arg3 highLevelDomain:(id)arg4;
- (BOOL)canSaveUser:(id)arg1 password:(id)arg2 forProtectionSpace:(id)arg3 highLevelDomain:(id)arg4;
- (BOOL)changeSavedPassword:(id)arg1 toUser:(id)arg2 password:(id)arg3;
- (BOOL)canChangeSavedPassword:(id)arg1 toUser:(id)arg2 password:(id)arg3;
- (void)removeSite:(id)arg1 fromPassword:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)removePassword:(id)arg1;
- (void)_removePassword:(id)arg1;
- (id)_savedPasswords;
@property(readonly, nonatomic) NSArray *savedPasswords;
@property(readonly, nonatomic) NSSet *highLevelDomainsOfAllSavedPasswordsExcludingNeverSaveMarkerPasswords;
@property(readonly, nonatomic) NSArray *savedPasswordsExcludingNeverSaveMarkerPasswords;
- (id)_allInternetPasswordEntriesFromKeychain;
- (id)savedPasswordForURL:(id)arg1 user:(id)arg2 password:(id)arg3;
- (void)dealloc;
- (id)init;

@end

