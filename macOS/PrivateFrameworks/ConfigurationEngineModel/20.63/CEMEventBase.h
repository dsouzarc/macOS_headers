//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSString;

@interface CEMEventBase : CEMPayloadBase
{
    NSString *_payloadType;
}

+ (id)eventForPayload:(id)arg1 error:(id *)arg2;
@property(copy, nonatomic) NSString *payloadType; // @synthesize payloadType=_payloadType;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

