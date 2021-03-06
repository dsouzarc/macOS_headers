//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class NSArray, NSSet;

@protocol HMDNetworkRouterFirewallRuleManager <NSObject>
@property(readonly, nonatomic) NSSet *interestedAccessories;
- (void)fetchRulesForAccessories:(NSArray *)arg1 completion:(void (^)(NSError *, NSArray *))arg2;
- (void)fetchCloudChangesWithCompletion:(void (^)(NSError *))arg1;
- (void)removeInterestedAccessories:(NSArray *)arg1;
- (void)addInterestedAccessories:(NSArray *)arg1;
- (void)shutdownWithCompletion:(void (^)(NSError *))arg1;
- (void)startupWithCompletion:(void (^)(NSError *))arg1;
@end

