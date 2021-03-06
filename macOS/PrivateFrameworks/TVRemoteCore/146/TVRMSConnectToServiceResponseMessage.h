//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class TVRMSControlInterfaceMessage;

@interface TVRMSConnectToServiceResponseMessage : PBCodable <NSCopying>
{
    TVRMSControlInterfaceMessage *_controlInterface;
    int _responseCode;
    int _sessionIdentifier;
    CDStruct_377099b8 _has;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TVRMSControlInterfaceMessage *controlInterface; // @synthesize controlInterface=_controlInterface;
@property(nonatomic) int sessionIdentifier; // @synthesize sessionIdentifier=_sessionIdentifier;
@property(nonatomic) int responseCode; // @synthesize responseCode=_responseCode;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasControlInterface;
@property(nonatomic) BOOL hasSessionIdentifier;
@property(nonatomic) BOOL hasResponseCode;

@end

