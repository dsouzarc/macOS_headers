//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsUI/CNUICoreParentContainerProvider-Protocol.h>

@class CNCache, CNContactStore, NSString;

__attribute__((visibility("hidden")))
@interface CNContactViewCache : NSObject <CNUICoreParentContainerProvider>
{
    CNCache *_cachedContainers;
    CNCache *_cachedPolicies;
    CNCache *_cachedAccounts;
    CNContactStore *_contactStore;
}

+ (BOOL)isCandidatePolicy:(id)arg1 ofContactInCandidateContainerWithType:(long long)arg2 preferredOverPolicy:(id)arg3 ofContactInContainerWithType:(long long)arg4;
+ (BOOL)shouldIgnorePolicyOfContactInGuarianRestrictedContainer:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
@property(retain, nonatomic) CNCache *cachedAccounts; // @synthesize cachedAccounts=_cachedAccounts;
@property(retain, nonatomic) CNCache *cachedPolicies; // @synthesize cachedPolicies=_cachedPolicies;
@property(retain, nonatomic) CNCache *cachedContainers; // @synthesize cachedContainers=_cachedContainers;
- (id)_accountForContact:(id)arg1;
- (id)bestPolicyForContact:(id)arg1;
- (id)defaultContainerPolicy;
- (id)_policyForContact:(id)arg1;
- (id)containerForContact:(id)arg1;
- (void)resetCache;
- (id)accountForContact:(id)arg1;
- (id)policyForDefaultContainer;
- (id)policyForContact:(id)arg1;
- (id)nts_lazyContactStore;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

