//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CMWorkoutManagerInternal;

@interface CMWorkoutManager : NSObject
{
    CMWorkoutManagerInternal *_internal;
}

+ (BOOL)isAvailable;
@property(readonly, nonatomic) CMWorkoutManagerInternal *_internal; // @synthesize _internal;
- (void)userDismissedWorkoutAlert;
- (void)setSuggestedStopTimeout:(double)arg1;
- (void)getPromptsNeededForWorkoutType:(long long)arg1 handler:(CDUnknownBlockType)arg2;
- (unsigned long long)supportedMetricsForWorkoutType:(long long)arg1;
- (void)stopWorkout:(id)arg1;
- (void)startWorkout:(id)arg1;
@property(nonatomic) id <CMWorkoutManagerDelegate> delegate;
- (void)dealloc;
- (id)init;

@end

