//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <HomeKitDaemon/HMDNetworkRouterFirewallRuleManagerBackingStoreFetchHelper.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class CKServerChangeToken, HMBMirrorInput, NSSet, NSString;

@interface HMDNetworkRouterFirewallRuleCloudZoneFetchInfo : HMDNetworkRouterFirewallRuleManagerBackingStoreFetchHelper <HMFLogging>
{
    NSSet *_interestedRecordIDs;
    CKServerChangeToken *_changeToken;
    CKServerChangeToken *_originalChangeToken;
    HMBMirrorInput *_mirrorInput;
}

+ (id)logCategory;
@property(retain, nonatomic) HMBMirrorInput *mirrorInput; // @synthesize mirrorInput=_mirrorInput;
@property(readonly, nonatomic) CKServerChangeToken *originalChangeToken; // @synthesize originalChangeToken=_originalChangeToken;
@property(retain, nonatomic) CKServerChangeToken *changeToken; // @synthesize changeToken=_changeToken;
@property(readonly, nonatomic) NSSet *interestedRecordIDs; // @synthesize interestedRecordIDs=_interestedRecordIDs;
- (void).cxx_destruct;
- (void)finishWithError:(id)arg1;
- (id)initWithOptions:(id)arg1 changeToken:(id)arg2 promise:(id)arg3 database:(id)arg4 useAnonymousRequests:(BOOL)arg5 interestedRecordIDs:(id)arg6 mirrorInput:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

