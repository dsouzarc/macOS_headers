//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <WiFiPolicy/WiFiCandidateNetwork-Protocol.h>

@class NSSet, NSString;
@protocol TBNetwork, TBScore;

@interface WiFi3BarsNetwork : NSObject <WiFiCandidateNetwork>
{
    NSString *_SSID;
    NSString *password;
    NSSet *_attributes;
    id <TBScore> _qualityScore;
    id <TBScore> _popularityScore;
    NSString *_uniqueIdentifier;
    id <TBNetwork> _network;
}

@property(retain, nonatomic) id <TBNetwork> network; // @synthesize network=_network;
@property(copy, nonatomic) NSString *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property(readonly, nonatomic) id <TBScore> popularityScore; // @synthesize popularityScore=_popularityScore;
@property(readonly, nonatomic) id <TBScore> qualityScore; // @synthesize qualityScore=_qualityScore;
@property(readonly, nonatomic) NSSet *attributes; // @synthesize attributes=_attributes;
@property(readonly, copy, nonatomic) NSString *password; // @synthesize password;
@property(copy, nonatomic) NSString *SSID; // @synthesize SSID=_SSID;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (BOOL)containsAccessPointMatchingBSSIDs:(id)arg1;
@property(readonly, nonatomic) long long source;
@property(readonly, nonatomic) NSSet *accessPoints;
- (id)initWithNetwork:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

