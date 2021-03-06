//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HMFObject.h"

#import "HMDHomePresenceCheck.h"
#import "HMFLogging.h"

@class HMDDevice, HMDHome, NSArray, NSDictionary, NSString;

@interface HMDHomePresence : HMFObject <HMFLogging, HMDHomePresenceCheck>
{
    HMDHome *_home;
    NSDictionary *_userPresenceMap;
    HMDDevice *_lastUpdateByDevice;
}

+ (id)logCategory;
@property(readonly, nonatomic) HMDDevice *lastUpdateByDevice; // @synthesize lastUpdateByDevice=_lastUpdateByDevice;
@property(readonly, nonatomic) NSDictionary *userPresenceMap; // @synthesize userPresenceMap=_userPresenceMap;
@property(readonly, nonatomic) __weak HMDHome *home; // @synthesize home=_home;
- (void).cxx_destruct;
- (BOOL)areUsersNotAtHome:(id)arg1;
- (BOOL)areUsersAtHome:(id)arg1;
- (BOOL)isPresenceRegionKnownForUser:(id)arg1;
- (BOOL)isUserNotAtHome:(id)arg1;
- (BOOL)isUserAtHome:(id)arg1;
@property(readonly, nonatomic) BOOL hasPresenceRegionForAllUsers;
- (BOOL)isAnyUserAtHome;
- (BOOL)isNoUserAtHome;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)serializedIdentifierDictionary;
- (id)serializedUUIDDictionary;
@property(readonly, nonatomic) NSArray *authorizedUsers;
@property(readonly, copy) NSString *description;
- (id)logIdentifier;
- (id)initWithHome:(id)arg1 userPresenceMap:(id)arg2 lastUpdateByDevice:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

