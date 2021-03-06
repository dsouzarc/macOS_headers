//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface FRPurchaseAdContextEntry : NSObject
{
    BOOL _arrivedFromAd;
    NSString *_identifier;
    NSString *_tagID;
    NSString *_purchaseID;
    NSString *_qToken;
    NSString *_adCampaignID;
    NSString *_price;
    NSDate *_purchaseInitiatedTime;
}

@property(nonatomic) BOOL arrivedFromAd; // @synthesize arrivedFromAd=_arrivedFromAd;
@property(copy, nonatomic) NSDate *purchaseInitiatedTime; // @synthesize purchaseInitiatedTime=_purchaseInitiatedTime;
@property(copy, nonatomic) NSString *price; // @synthesize price=_price;
@property(copy, nonatomic) NSString *adCampaignID; // @synthesize adCampaignID=_adCampaignID;
@property(copy, nonatomic) NSString *qToken; // @synthesize qToken=_qToken;
@property(copy, nonatomic) NSString *purchaseID; // @synthesize purchaseID=_purchaseID;
@property(copy, nonatomic) NSString *tagID; // @synthesize tagID=_tagID;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)initWithEntryID:(id)arg1 dictionaryRepresentation:(id)arg2;
- (id)initWithEntryID:(id)arg1 tagID:(id)arg2 purchaseID:(id)arg3 qToken:(id)arg4 adCampaignID:(id)arg5 price:(id)arg6 purchaseInitiatedTime:(id)arg7 arrivedFromAd:(BOOL)arg8;

@end

