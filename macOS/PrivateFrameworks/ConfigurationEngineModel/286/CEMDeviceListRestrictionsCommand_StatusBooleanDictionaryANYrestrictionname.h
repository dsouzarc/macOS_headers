//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSNumber;

@interface CEMDeviceListRestrictionsCommand_StatusBooleanDictionaryANYrestrictionname : CEMPayloadBase
{
    NSNumber *_statusValue;
}

+ (id)buildRequiredOnlyWithValue:(id)arg1;
+ (id)buildWithValue:(id)arg1;
+ (id)allowedStatusKeys;
- (void).cxx_destruct;
@property(copy, nonatomic) NSNumber *statusValue; // @synthesize statusValue=_statusValue;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializePayload;
- (BOOL)loadPayload:(id)arg1 error:(id *)arg2;

@end

