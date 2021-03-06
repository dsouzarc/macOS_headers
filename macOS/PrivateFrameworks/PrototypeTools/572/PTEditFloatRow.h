//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PrototypeTools/PTSRow.h>

@interface PTEditFloatRow : PTSRow
{
    unsigned long long _precision;
    double _minValue;
    double _maxValue;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) double maxValue; // @synthesize maxValue=_maxValue;
@property(nonatomic) double minValue; // @synthesize minValue=_minValue;
@property(nonatomic) unsigned long long precision; // @synthesize precision=_precision;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)_validatedValue:(id)arg1;
- (id)init;
- (id)between:(double)arg1 and:(double)arg2;
- (id)precision:(unsigned long long)arg1;

@end

