//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class GEORPFeedbackResult, PBUnknownFields;

@interface GEORPFeedbackResponse : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    GEORPFeedbackResult *_feedbackResult;
    int _feedbackRequestType;
    int _status;
    struct {
        unsigned int has_feedbackRequestType:1;
        unsigned int has_status:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
- (void).cxx_destruct;
- (void)clearUnknownFields:(BOOL)arg1;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
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
@property(retain, nonatomic) GEORPFeedbackResult *feedbackResult;
@property(readonly, nonatomic) BOOL hasFeedbackResult;
- (int)StringAsFeedbackRequestType:(id)arg1;
- (id)feedbackRequestTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasFeedbackRequestType;
@property(nonatomic) int feedbackRequestType;
- (int)StringAsStatus:(id)arg1;
- (id)statusAsString:(int)arg1;
@property(nonatomic) BOOL hasStatus;
@property(nonatomic) int status;

@end

