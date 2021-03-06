//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CPAnalyticsDestination.h"

@class CPAnalyticsEventMatcherSet, NSDictionary;

@interface CPAnalyticsMetricsDestination : NSObject <CPAnalyticsDestination>
{
    NSDictionary *_eventRoutes;
    CPAnalyticsEventMatcherSet *_matcherSet;
}

@property(retain, nonatomic) CPAnalyticsEventMatcherSet *matcherSet; // @synthesize matcherSet=_matcherSet;
@property(retain, nonatomic) NSDictionary *eventRoutes; // @synthesize eventRoutes=_eventRoutes;
- (void).cxx_destruct;
- (void)_sendCoreAnalyticsEvent:(id)arg1 eventPayload:(id)arg2;
- (id)_buildCustomCoreAnalyticsPayloadForEvent:(id)arg1 withPropertiesToInclude:(id)arg2;
- (void)_sendCoreAnalyticsEventWithCustomConfig:(id)arg1;
- (BOOL)_hasCustomConfigForEvent:(id)arg1;
- (void)processEvent:(id)arg1;
- (id)initWithConfig:(id)arg1 cpAnalyticsInstance:(id)arg2;

@end

