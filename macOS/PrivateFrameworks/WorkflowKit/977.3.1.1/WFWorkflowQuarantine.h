//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <WorkflowKit/NSCopying-Protocol.h>

@class NSDate, NSString;

@interface WFWorkflowQuarantine : NSObject <NSCopying>
{
    NSString *_sourceAppIdentifier;
    NSDate *_importDate;
}

@property(readonly, nonatomic) NSDate *importDate; // @synthesize importDate=_importDate;
@property(readonly, copy, nonatomic) NSString *sourceAppIdentifier; // @synthesize sourceAppIdentifier=_sourceAppIdentifier;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)serializedRepresentation;
- (id)serializedData;
- (id)initWithSerializedData:(id)arg1;
- (id)initWithSourceAppIdentifier:(id)arg1 importDate:(id)arg2;

@end

