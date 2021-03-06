//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "SSyncCEList.h"

@class NSArray, NSSet;

@interface SSyncExceptionList : SSyncCEList
{
}

+ (id)newExceptionListForSyncSet:(id)arg1;
- (id)setGlobalException:(id)arg1;
- (id)setException:(id)arg1 forNode:(id)arg2;
- (id)setException:(id)arg1 forJob:(id)arg2;
- (void)removeExceptionAtPath:(id)arg1;
- (void)clearAllGlobalExceptions;
@property(readonly, retain, nonatomic) NSSet *unresolvedExceptions;
@property(readonly, retain, nonatomic) NSArray *legacyExceptions;
@property(readonly, nonatomic) BOOL hasUnreportedNonGlobalErrors;
@property(readonly, nonatomic) BOOL hasUnreportedHardErrors;
@property(readonly, retain, nonatomic) NSSet *globalExceptions;
- (id)exceptionForPath:(id)arg1;
@property(readonly, retain, nonatomic) NSSet *allExceptions;

@end

