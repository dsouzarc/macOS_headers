//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FImmutableTree;

@interface FTrackedQueryManager : NSObject
{
    FImmutableTree *_trackedQueryTree;
    id <FStorageEngine> _storageEngine;
    id <FClock> _clock;
    unsigned long long _currentQueryId;
}

+ (id)normalizeQuery:(id)arg1;
+ (void)assertValidTrackedQuery:(id)arg1;
@property(nonatomic) unsigned long long currentQueryId; // @synthesize currentQueryId=_currentQueryId;
@property(retain, nonatomic) id <FClock> clock; // @synthesize clock=_clock;
@property(retain, nonatomic) id <FStorageEngine> storageEngine; // @synthesize storageEngine=_storageEngine;
@property(retain, nonatomic) FImmutableTree *trackedQueryTree; // @synthesize trackedQueryTree=_trackedQueryTree;
- (void).cxx_destruct;
- (void)verifyCache;
- (id)knownCompleteChildrenAtPath:(id)arg1;
- (id)filteredQueryIdsAtPath:(id)arg1;
- (unsigned long long)numberOfPrunableQueries;
- (id)pruneOldQueries:(id)arg1;
- (unsigned long long)numberOfQueriesToPrune:(id)arg1 prunableCount:(unsigned long long)arg2;
- (void)cacheTrackedQuery:(id)arg1;
- (BOOL)isIncludedInDefaultCompleteQuery:(id)arg1;
- (void)ensureCompleteTrackedQueryAtPath:(id)arg1;
- (BOOL)hasActiveDefaultQueryAtPath:(id)arg1;
- (BOOL)isQueryComplete:(id)arg1;
- (void)setQueriesCompleteAtPath:(id)arg1;
- (void)setQueryComplete:(id)arg1;
- (void)setQueryActive:(BOOL)arg1 forQuery:(id)arg2;
- (void)setQueryInactive:(id)arg1;
- (void)setQueryActive:(id)arg1;
- (void)removeTrackedQuery:(id)arg1;
- (id)findTrackedQuery:(id)arg1;
- (id)initWithStorageEngine:(id)arg1 clock:(id)arg2;

@end

