//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface GEOSortPriorityMappingEntry : NSObject
{
    long long _priority;
    long long _resultType;
    long long _resultSubtype;
}

@property(readonly, nonatomic) long long resultSubtype; // @synthesize resultSubtype=_resultSubtype;
@property(readonly, nonatomic) long long resultType; // @synthesize resultType=_resultType;
@property(readonly, nonatomic) long long priority; // @synthesize priority=_priority;
- (id)initWithPriority:(long long)arg1 resultType:(long long)arg2 resultSubtype:(long long)arg3;
- (id)init;

@end

