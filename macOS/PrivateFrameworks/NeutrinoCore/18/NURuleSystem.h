//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSArray, NSDictionary, NSMapTable, NSMutableArray, NSMutableDictionary, NSMutableString, NSString;

@interface NURuleSystem : NSObject <NSSecureCoding>
{
    NSMutableDictionary *_state;
    NSMutableDictionary *_constants;
    NSMutableArray *_rules;
    NSMutableArray *_agenda;
    NSMutableArray *_executed;
    NSMapTable *_gradeByFact;
    NSMutableString *_runLog;
    BOOL _enableLogging;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) BOOL enableLogging; // @synthesize enableLogging=_enableLogging;
@property(readonly, copy, nonatomic) NSDictionary *state; // @synthesize state=_state;
- (id)debugQuickLookObject;
- (id)debugDescription;
@property(readonly, copy, nonatomic) NSString *runLog;
- (void)reset;
- (void)retractFact:(id)arg1 grade:(double)arg2;
- (void)retractFact:(id)arg1;
- (void)assertFact:(id)arg1 grade:(double)arg2;
- (void)assertFact:(id)arg1;
- (double)maximumGradeForFacts:(id)arg1;
- (double)minimumGradeForFacts:(id)arg1;
- (double)gradeForFact:(id)arg1;
@property(readonly, copy, nonatomic) NSDictionary *facts;
- (void)removeAllRules;
- (void)addRulesFromArray:(id)arg1;
- (void)addRule:(id)arg1;
- (void)_addRuleToAgenda:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *executed;
@property(readonly, copy, nonatomic) NSArray *agenda;
@property(readonly, copy, nonatomic) NSArray *rules;
@property(copy, nonatomic) NSDictionary *constants;
- (void)setStateObject:(id)arg1 forKey:(id)arg2;
- (void)resetAndEvaluateWithInitialState:(id)arg1;
- (void)evaluate;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

