//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HMFObject.h"

@class HMFNetAddress;

@interface HMDNetworkRouterFirewallRuleWANAddressRange : HMFObject
{
    HMFNetAddress *_addressStart;
    HMFNetAddress *_addressEnd;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) HMFNetAddress *addressEnd; // @synthesize addressEnd=_addressEnd;
@property(readonly, nonatomic) HMFNetAddress *addressStart; // @synthesize addressStart=_addressStart;
- (id)prettyJSONDictionary;
- (id)attributeDescriptions;
- (id)initWithAddressStart:(id)arg1 addressEnd:(id)arg2;

@end

