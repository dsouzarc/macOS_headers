//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, SAHAAttributeValue;

@interface HMDAssistantCharacteristicTuple : NSObject
{
    NSString *_attribute;
    SAHAAttributeValue *_value;
}

@property(readonly, nonatomic) SAHAAttributeValue *value; // @synthesize value=_value;
@property(readonly, nonatomic) NSString *attribute; // @synthesize attribute=_attribute;
- (void).cxx_destruct;
- (id)initWithAttribute:(id)arg1 value:(id)arg2;
- (id)init;

@end

