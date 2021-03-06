//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Intents/INIntent.h>

#import "INPayBillIntentExport.h"

@class INBillPayee, INDateComponentsRange, INPaymentAccount, INPaymentAmount, NSString;

@interface INPayBillIntent : INIntent <INPayBillIntentExport>
{
}

- (void)setParametersByName:(id)arg1;
- (id)parametersByName;
- (void)setVerb:(id)arg1;
- (id)verb;
- (void)setDomain:(id)arg1;
- (id)domain;
- (BOOL)_isUserConfirmationRequired;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;
- (id)_dictionaryRepresentation;
- (void)setDueDate:(id)arg1;
@property(readonly, copy) INDateComponentsRange *dueDate;
- (void)setBillType:(long long)arg1;
@property(readonly) long long billType;
- (void)setTransactionNote:(id)arg1;
@property(readonly, copy) NSString *transactionNote;
- (void)setTransactionScheduledDate:(id)arg1;
@property(readonly, copy) INDateComponentsRange *transactionScheduledDate;
- (void)setTransactionAmount:(id)arg1;
@property(readonly, copy) INPaymentAmount *transactionAmount;
- (void)setFromAccount:(id)arg1;
@property(readonly, copy) INPaymentAccount *fromAccount;
- (void)setBillPayee:(id)arg1;
@property(readonly, copy) INBillPayee *billPayee;
- (id)initWithBillPayee:(id)arg1 fromAccount:(id)arg2 transactionAmount:(id)arg3 transactionScheduledDate:(id)arg4 transactionNote:(id)arg5 billType:(long long)arg6 dueDate:(id)arg7;
- (id)_categoryVerb;
- (long long)_intentCategory;
- (void)_setMetadata:(id)arg1;
- (id)_metadata;
- (id)_typedBackingStore;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

