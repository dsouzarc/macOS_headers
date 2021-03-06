//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface IMMetrics : NSObject
{
}

+ (void)recordEvent:(id)arg1 dataSource:(id)arg2 data:(id)arg3 topic:(id)arg4;
+ (void)recordEvent:(id)arg1 dataSource:(id)arg2 data:(id)arg3;
+ (void)recordEvent:(id)arg1 with:(id)arg2;
+ (void)recordEvent:(id)arg1 topic:(id)arg2;
+ (void)recordEvent:(id)arg1;
+ (void)recordMemory:(id)arg1;
+ (void)setupEvent:(id)arg1 forDataSource:(id)arg2;
+ (id)keyForTimerName:(id)arg1 dataSource:(id)arg2;
+ (double)endTimer:(id)arg1 dataSource:(id)arg2 withData:(id)arg3;
+ (double)endTimer:(id)arg1 dataSource:(id)arg2;
+ (double)endTimer:(id)arg1;
+ (void)startTimer:(id)arg1 dataSource:(id)arg2;
+ (void)startTimer:(id)arg1;
+ (void)recordUserAction:(id)arg1 dataSource:(id)arg2 withData:(id)arg3;
+ (void)recordUserAction:(id)arg1 dataSource:(id)arg2;
+ (void)recordUserAction:(id)arg1;
+ (void)setLogLevel:(int)arg1;
+ (id)metricsControllerForTopic:(id)arg1;
+ (id)defaultMetricsController;
+ (void)removeMetricsController:(id)arg1;
+ (void)addMetricsController:(id)arg1;
+ (void)setDefaultMetricsController:(id)arg1;
+ (void)disable;
+ (void)enable;
+ (BOOL)canRecordEvent;
+ (void)cancelFlush;
+ (void)flushImmediately;
+ (void)initialize;

@end

