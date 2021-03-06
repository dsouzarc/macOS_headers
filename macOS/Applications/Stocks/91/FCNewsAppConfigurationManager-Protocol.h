//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSNumber, NSString, OS_dispatch_queue;
@protocol FCNewsAppConfiguration, FCNewsAppConfigurationObserving;

@protocol FCNewsAppConfigurationManager <NSObject>
- (void)removeAppConfigObserver:(id <FCNewsAppConfigurationObserving>)arg1;
- (void)addAppConfigObserver:(id <FCNewsAppConfigurationObserving>)arg1;
- (void)fetchTrendingSearchesIfNeededWithCompletion:(void (^)(NSArray *, NSError *))arg1;
- (void)refreshAppConfigurationIfNeededWithCompletionQueue:(OS_dispatch_queue *)arg1 refreshCompletion:(void (^)(id <FCNewsAppConfiguration>, NSError *))arg2;
- (void)fetchAppConfigurationIfNeededWithCompletionQueue:(OS_dispatch_queue *)arg1 completion:(void (^)(id <FCNewsAppConfiguration>, NSError *))arg2;
- (void)fetchAppConfigurationIfNeededWithCompletion:(void (^)(id <FCNewsAppConfiguration>, NSError *))arg1;
@property(nonatomic, readonly) id <FCNewsAppConfiguration> appConfiguration;

@optional
@property(nonatomic, readonly) NSArray *availableExperiments;
@property(nonatomic, readonly) NSNumber *currentModdedBucketID;
- (void)overrideConfigWithTreatment:(NSNumber *)arg1;
@property(nonatomic, readonly) NSString *feldsparID;
@property(nonatomic, readonly) NSArray *segmentSetIDs;
@property(nonatomic, readonly) NSArray *treatmentIDs;
- (void)fetchAppWidgetConfigurationUseBackgroundRefreshRate:(BOOL)arg1 completion:(void (^)(id <FCNewsAppConfiguration>, NSData *, NSError *))arg2;
@end

