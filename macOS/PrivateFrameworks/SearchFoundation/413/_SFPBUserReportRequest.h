//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSSecureCoding.h"
#import "_SFPBUserReportRequest.h"

@class NSArray, NSData, NSString;

@interface _SFPBUserReportRequest : PBCodable <_SFPBUserReportRequest, NSSecureCoding>
{
    NSString *_affordanceText;
    NSString *_title;
    NSString *_dismissText;
    NSArray *_userReportOptions;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *userReportOptions; // @synthesize userReportOptions=_userReportOptions;
@property(copy, nonatomic) NSString *dismissText; // @synthesize dismissText=_dismissText;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *affordanceText; // @synthesize affordanceText=_affordanceText;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)userReportOptionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)userReportOptionsCount;
- (void)addUserReportOptions:(id)arg1;
- (void)clearUserReportOptions;
- (id)initWithFacade:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

