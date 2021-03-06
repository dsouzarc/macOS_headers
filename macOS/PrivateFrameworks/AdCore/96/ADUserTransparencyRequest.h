//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBRequest.h"

#import "NSCopying.h"

@class NSData, NSString;

@interface ADUserTransparencyRequest : PBRequest <NSCopying>
{
    NSData *_contentiAdID;
    NSData *_dPID;
    NSData *_iAdID;
    NSString *_iTunesStore;
    NSString *_localeIdentifier;
    BOOL _isSignedInToiTunes;
    BOOL _limitAdTracking;
    struct {
        unsigned int isSignedInToiTunes:1;
        unsigned int limitAdTracking:1;
    } _has;
}

+ (id)options;
- (void).cxx_destruct;
@property(nonatomic) BOOL isSignedInToiTunes; // @synthesize isSignedInToiTunes=_isSignedInToiTunes;
@property(nonatomic) BOOL limitAdTracking; // @synthesize limitAdTracking=_limitAdTracking;
@property(retain, nonatomic) NSString *iTunesStore; // @synthesize iTunesStore=_iTunesStore;
@property(retain, nonatomic) NSData *contentiAdID; // @synthesize contentiAdID=_contentiAdID;
@property(retain, nonatomic) NSData *iAdID; // @synthesize iAdID=_iAdID;
@property(retain, nonatomic) NSString *localeIdentifier; // @synthesize localeIdentifier=_localeIdentifier;
@property(retain, nonatomic) NSData *dPID; // @synthesize dPID=_dPID;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasIsSignedInToiTunes;
@property(nonatomic) BOOL hasLimitAdTracking;
@property(readonly, nonatomic) BOOL hasITunesStore;
@property(readonly, nonatomic) BOOL hasContentiAdID;
@property(readonly, nonatomic) BOOL hasIAdID;
@property(readonly, nonatomic) BOOL hasLocaleIdentifier;
@property(readonly, nonatomic) BOOL hasDPID;

@end

