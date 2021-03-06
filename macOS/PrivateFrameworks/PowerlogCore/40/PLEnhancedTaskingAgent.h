//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PowerlogCore/PLAgent.h>

@interface PLEnhancedTaskingAgent : PLAgent
{
}

+ (BOOL)shouldLogAggregatedDataFromSignpost;
+ (void)logAggregatedDataFromSignpostWithStartDate:(id)arg1 withEndDate:(id)arg2;
+ (id)entryEventIntervalDefinitionScrollView;
+ (id)entryEventIntervalDefinitionUITabBarController;
+ (id)entryEventIntervalDefinitionUINavigationController;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventNoneDefinitionAppSwitchTrigger;
+ (id)entryEventNoneDefinitions;
+ (id)defaults;
+ (void)load;
- (int)getSignpostNameValueGroupTypeFor:(id)arg1;
- (void)logAggregatedDataFromSignpostWithPayload:(id)arg1 withStartDate:(id)arg2 withEndDate:(id)arg3;
- (void)log;
- (void)initTaskOperatorDependancies;
- (void)initOperatorDependancies;
- (id)init;

@end

