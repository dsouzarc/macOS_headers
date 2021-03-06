//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@interface GEOURLCamera : PBCodable <NSCopying>
{
    double _altitude;
    double _heading;
    double _latitude;
    double _longitude;
    double _pitch;
    struct {
        unsigned int has_altitude:1;
        unsigned int has_heading:1;
        unsigned int has_latitude:1;
        unsigned int has_longitude:1;
        unsigned int has_pitch:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)readAll:(BOOL)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasAltitude;
@property(nonatomic) double altitude;
@property(nonatomic) BOOL hasPitch;
@property(nonatomic) double pitch;
@property(nonatomic) BOOL hasHeading;
@property(nonatomic) double heading;
@property(nonatomic) BOOL hasLongitude;
@property(nonatomic) double longitude;
@property(nonatomic) BOOL hasLatitude;
@property(nonatomic) double latitude;

@end

