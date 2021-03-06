//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSExport.h"
#import "NSObject.h"

@class INContactEventTrigger, INIntent, INSpatialEventTrigger, INTaskList, INTemporalEventTrigger, NSArray;

@protocol INAddTasksIntentExport <NSObject, JSExport>
@property(copy) INIntent *intent;
@property(copy) INContactEventTrigger *contactEventTrigger;
@property long long priority;
@property(copy) INTemporalEventTrigger *temporalEventTrigger;
@property(copy) INSpatialEventTrigger *spatialEventTrigger;
@property(copy) NSArray *taskTitles;
@property(copy) INTaskList *targetTaskList;
@property(copy) NSArray *targetTaskListMembers;
@property long long taskReference;
- (id)init;
@end

