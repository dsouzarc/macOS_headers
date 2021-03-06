//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"
#import "_INPBActivateCarSignalIntent.h"

@class NSString, _INPBDataString, _INPBIntentMetadata;

@interface _INPBActivateCarSignalIntent : PBCodable <_INPBActivateCarSignalIntent, NSSecureCoding, NSCopying>
{
    CDStruct_95bda58d _signals;
    struct _has;
    BOOL __encodeLegacyGloryData;
    _INPBDataString *_carName;
    _INPBIntentMetadata *_intentMetadata;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic, setter=_setEncodeLegacyGloryData:) BOOL _encodeLegacyGloryData; // @synthesize _encodeLegacyGloryData=__encodeLegacyGloryData;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata; // @synthesize intentMetadata=_intentMetadata;
@property(retain, nonatomic) _INPBDataString *carName; // @synthesize carName=_carName;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (int)StringAsSignals:(id)arg1;
- (id)signalsAsString:(int)arg1;
- (int)signalsAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long signalsCount;
- (void)addSignals:(int)arg1;
- (void)clearSignals;
@property(readonly, nonatomic) int *signals;
- (void)setSignals:(int *)arg1 count:(unsigned long long)arg2;
@property(readonly, nonatomic) BOOL hasIntentMetadata;
@property(readonly, nonatomic) BOOL hasCarName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

