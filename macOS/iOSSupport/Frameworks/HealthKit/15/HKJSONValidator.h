//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol NSCopying;

@interface HKJSONValidator : NSObject
{
    NSMutableDictionary *_subschemaCache;
    id <NSCopying> _schema;
}

+ (BOOL)validateJSONObject:(id)arg1 withSchemaNamed:(id)arg2 bundle:(id)arg3 error:(out id *)arg4;
+ (id)searchPaths;
+ (void)registerSearchPath:(id)arg1;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) id <NSCopying> schema; // @synthesize schema=_schema;
- (id)_mismatchErrorFromKeyStack:(id)arg1;
- (id)_loadSubschemaNamed:(id)arg1;
- (BOOL)_validateValue:(id)arg1 subschemaNamed:(id)arg2 keyStack:(id)arg3;
- (BOOL)_validateURL:(id)arg1;
- (BOOL)_validateTimezone:(id)arg1;
- (BOOL)_validateFingerprintSHA256:(id)arg1;
- (BOOL)_validateBoolean:(id)arg1;
- (BOOL)_validatePrimitive:(id)arg1 schema:(id)arg2 keyStack:(id)arg3;
- (BOOL)_validateArray:(id)arg1 schema:(id)arg2 keyStack:(id)arg3;
- (BOOL)_validateDictionary:(id)arg1 schema:(id)arg2 keyStack:(id)arg3;
- (BOOL)_validateValue:(id)arg1 schema:(id)arg2 keyStack:(id)arg3 root:(BOOL)arg4;
- (BOOL)_validateJSONObject:(id)arg1 keyStack:(id)arg2;
- (BOOL)validateJSONObject:(id)arg1 error:(out id *)arg2;
- (id)initWithSchemaNamed:(id)arg1 bundle:(id)arg2;
- (id)initWithSchema:(id)arg1 subschemaCache:(id)arg2;
- (id)initWithSchema:(id)arg1;
- (id)init;

@end

