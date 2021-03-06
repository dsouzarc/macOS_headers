//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSSet;

@interface BMRule : NSObject
{
    struct NSSet *_antecedent;
    struct NSSet *_consequent;
    double _support;
    double _confidence;
}

@property(nonatomic) double confidence; // @synthesize confidence=_confidence;
@property(nonatomic) double support; // @synthesize support=_support;
@property(retain, nonatomic) NSSet *consequent; // @synthesize consequent=_consequent;
@property(retain, nonatomic) NSSet *antecedent; // @synthesize antecedent=_antecedent;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)initWithAntecedent:(struct NSSet *)arg1 consequent:(struct NSSet *)arg2 support:(double)arg3 confidence:(double)arg4;

@end

