//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "_DKEventStatsCounterInternalProperty.h"

@class _DKEventStatsCounterInternal;

@interface _DKEventStatsTimerCounter : NSObject <_DKEventStatsCounterInternalProperty>
{
    _DKEventStatsCounterInternal *_internal;
}

+ (id)counterInCollection:(id)arg1 withEventName:(id)arg2;
@property(retain) _DKEventStatsCounterInternal *internal; // @synthesize internal=_internal;
- (void).cxx_destruct;
- (unsigned long long)count;
- (void)addTimingWithStartDate:(id)arg1 endDate:(id)arg2;
- (void)addTimingWithTimeInterval:(double)arg1;
- (id)eventName;

@end

