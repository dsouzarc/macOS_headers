//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber;

@interface HMUserCameraAccess : NSObject
{
    unsigned long long _value;
}

+ (id)accessWithCoder:(id)arg1;
+ (id)accessWithDict:(id)arg1;
+ (id)accessWithMessage:(id)arg1;
+ (id)accessWithNumber:(id)arg1;
+ (id)accessWithValue:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long value; // @synthesize value=_value;
- (id)description;
- (BOOL)isEqual:(id)arg1;
@property(readonly, nonatomic) NSNumber *number;
- (void)addToPayload:(id)arg1;
- (void)addToCoder:(id)arg1;
- (id)initWithNumber:(id)arg1;

@end

