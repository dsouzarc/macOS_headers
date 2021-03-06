//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlayer/MPMediaPredicate.h>

@class NSSet, NSString;

@interface MPMediaContainmentPredicate : MPMediaPredicate
{
    NSString *_property;
    NSSet *_values;
}

+ (BOOL)supportsSecureCoding;
+ (id)predicateWithProperty:(id)arg1 values:(id)arg2;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSSet *values; // @synthesize values=_values;
@property(readonly, copy, nonatomic) NSString *property; // @synthesize property=_property;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

