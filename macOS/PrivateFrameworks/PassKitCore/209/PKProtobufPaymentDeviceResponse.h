//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSMutableArray;

@interface PKProtobufPaymentDeviceResponse : PBCodable <NSCopying>
{
    unsigned int _defaultPaymentInstrumentIndex;
    int _nearby;
    NSMutableArray *_paymentInstruments;
    unsigned int _protocolVersion;
    NSMutableArray *_supportedSetupFeatures;
    BOOL _deviceDisabled;
    BOOL _locked;
    BOOL _supportsFaceID;
    BOOL _userDisabled;
    struct {
        unsigned int defaultPaymentInstrumentIndex:1;
        unsigned int nearby:1;
        unsigned int protocolVersion:1;
        unsigned int deviceDisabled:1;
        unsigned int locked:1;
        unsigned int supportsFaceID:1;
        unsigned int userDisabled:1;
    } _has;
}

+ (Class)supportedSetupFeaturesType;
+ (Class)paymentInstrumentsType;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *supportedSetupFeatures; // @synthesize supportedSetupFeatures=_supportedSetupFeatures;
@property(nonatomic) BOOL supportsFaceID; // @synthesize supportsFaceID=_supportsFaceID;
@property(nonatomic) unsigned int protocolVersion; // @synthesize protocolVersion=_protocolVersion;
@property(nonatomic) BOOL deviceDisabled; // @synthesize deviceDisabled=_deviceDisabled;
@property(nonatomic) BOOL userDisabled; // @synthesize userDisabled=_userDisabled;
@property(nonatomic) unsigned int defaultPaymentInstrumentIndex; // @synthesize defaultPaymentInstrumentIndex=_defaultPaymentInstrumentIndex;
@property(retain, nonatomic) NSMutableArray *paymentInstruments; // @synthesize paymentInstruments=_paymentInstruments;
@property(nonatomic) BOOL locked; // @synthesize locked=_locked;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)supportedSetupFeaturesAtIndex:(unsigned long long)arg1;
- (unsigned long long)supportedSetupFeaturesCount;
- (void)addSupportedSetupFeatures:(id)arg1;
- (void)clearSupportedSetupFeatures;
@property(nonatomic) BOOL hasSupportsFaceID;
@property(nonatomic) BOOL hasProtocolVersion;
- (int)StringAsNearby:(id)arg1;
- (id)nearbyAsString:(int)arg1;
@property(nonatomic) BOOL hasNearby;
@property(nonatomic) int nearby; // @synthesize nearby=_nearby;
@property(nonatomic) BOOL hasDeviceDisabled;
@property(nonatomic) BOOL hasUserDisabled;
@property(nonatomic) BOOL hasDefaultPaymentInstrumentIndex;
- (id)paymentInstrumentsAtIndex:(unsigned long long)arg1;
- (unsigned long long)paymentInstrumentsCount;
- (void)addPaymentInstruments:(id)arg1;
- (void)clearPaymentInstruments;
@property(nonatomic) BOOL hasLocked;

@end

