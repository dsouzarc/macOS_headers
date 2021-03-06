//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CNFAuditToken, NSNumber;

@interface CNFAccessAuthorization : NSObject
{
    id <CNTCC> _tcc;
    CNFAuditToken *_auditToken;
    long long _addressBookPreflightStatus;
    long long _contactsFullPreflightStatus;
    long long _contactsLimitedPreflightStatus;
    NSNumber *_isClientLegacyImpl;
    NSNumber *_isNotesAccessGrantedCachedValue;
}

+ (id)sharedInstance;
+ (id)os_log;
- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *isNotesAccessGrantedCachedValue; // @synthesize isNotesAccessGrantedCachedValue=_isNotesAccessGrantedCachedValue;
@property(retain, nonatomic) NSNumber *isClientLegacyImpl; // @synthesize isClientLegacyImpl=_isClientLegacyImpl;
@property(nonatomic) long long contactsLimitedPreflightStatus; // @synthesize contactsLimitedPreflightStatus=_contactsLimitedPreflightStatus;
@property(nonatomic) long long contactsFullPreflightStatus; // @synthesize contactsFullPreflightStatus=_contactsFullPreflightStatus;
@property(nonatomic) long long addressBookPreflightStatus; // @synthesize addressBookPreflightStatus=_addressBookPreflightStatus;
@property(retain, nonatomic) CNFAuditToken *auditToken; // @synthesize auditToken=_auditToken;
@property(retain, nonatomic) id <CNTCC> tcc; // @synthesize tcc=_tcc;
- (id)_readFileData:(int)arg1 offset:(int)arg2 size:(unsigned long long)arg3;
- (BOOL)_isPid:(int)arg1 linkedOnOrAfter:(CDStruct_c0454aff)arg2;
@property(readonly, nonatomic) BOOL isClientLegacy;
@property(readonly, nonatomic) BOOL isClientWhitelisted;
- (BOOL)doesClientHaveNotesEntitlement;
- (id)resolveFuture:(id)arg1;
- (BOOL)isAccessGrantedRequestingAccessIfNeeded;
- (void)updatePreflightStatus:(long long)arg1 forService:(long long)arg2;
- (id)accessGrantedFutureForService:(long long)arg1;
- (id)sharedAccessGrantedFutureForRequest:(long long)arg1;
- (BOOL)isAccessGrantedWithError:(id *)arg1;
- (void)requestAuthorizationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)_checkIfNotesAccessGranted;
@property(readonly, nonatomic) BOOL isNotesAccessGranted;
- (BOOL)isAddressBookAccessGranted;
@property(readonly, nonatomic) BOOL isFullAccessGranted;
@property(readonly, nonatomic) BOOL isLimitedAccessGranted;
@property(readonly, nonatomic) BOOL isAccessGranted;
- (void)requestAuthorization:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) BOOL isAccessRestricted;
@property(readonly, nonatomic) long long authorizationStatus;
- (id)initWithAuditToken:(id)arg1 tcc:(id)arg2;
- (id)initWithAuditToken:(id)arg1;
- (id)init;

@end

