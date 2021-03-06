//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface FIRStoragePath : NSObject
{
    NSString *_bucket;
    NSString *_object;
}

+ (id)pathFromHTTPURL:(id)arg1;
+ (id)pathFromGSURI:(id)arg1;
+ (id)pathFromString:(id)arg1;
@property(copy, nonatomic) NSString *object; // @synthesize object=_object;
@property(copy, nonatomic) NSString *bucket; // @synthesize bucket=_bucket;
- (void).cxx_destruct;
- (id)standardizedPathForString:(id)arg1;
- (id)root;
- (id)parent;
- (id)child:(id)arg1;
- (id)stringValue;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqualToFIRStoragePath:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithBucket:(id)arg1 object:(id)arg2;

@end

