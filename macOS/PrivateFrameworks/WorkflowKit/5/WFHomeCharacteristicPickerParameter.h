//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <WorkflowKit/WFEnumerationParameter.h>

@class HMService, NSArray, NSString;

@interface WFHomeCharacteristicPickerParameter : WFEnumerationParameter
{
    NSArray *_possibleStates;
    HMService *_service;
    NSString *_homeIdentifier;
}

@property(copy, nonatomic) NSString *homeIdentifier; // @synthesize homeIdentifier=_homeIdentifier;
@property(retain, nonatomic) HMService *service; // @synthesize service=_service;
- (void).cxx_destruct;
- (void)updatePossibleStates;
- (BOOL)isHidden;
- (id)defaultSerializedRepresentation;
@property(readonly, nonatomic) NSArray *possibleStates; // @synthesize possibleStates=_possibleStates;
- (id)localizedLabelForPossibleState:(id)arg1;
- (Class)singleStateClass;
- (void)setService:(id)arg1 homeIdentifier:(id)arg2;

@end

