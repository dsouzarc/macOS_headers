//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSObject<OS_dispatch_queue>;

@interface SignpostSupportMachTimeTranslator : NSObject
{
    BOOL _isMonitoringSleepWake;
    NSMutableArray *_translationRanges;
    NSMutableArray *_startMachAbsoluteTimes;
    NSMutableArray *_startMachContinuousTimes;
    unsigned long long _maxEntries;
    NSObject<OS_dispatch_queue> *_synchronizationQueue;
}

@property BOOL isMonitoringSleepWake; // @synthesize isMonitoringSleepWake=_isMonitoringSleepWake;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *synchronizationQueue; // @synthesize synchronizationQueue=_synchronizationQueue;
@property(nonatomic) unsigned long long maxEntries; // @synthesize maxEntries=_maxEntries;
@property(readonly, nonatomic) NSMutableArray *startMachContinuousTimes; // @synthesize startMachContinuousTimes=_startMachContinuousTimes;
@property(readonly, nonatomic) NSMutableArray *startMachAbsoluteTimes; // @synthesize startMachAbsoluteTimes=_startMachAbsoluteTimes;
@property(readonly, nonatomic) NSMutableArray *translationRanges; // @synthesize translationRanges=_translationRanges;
- (void).cxx_destruct;
- (unsigned long long)machContinuousTimeForMachAbsoluteTime:(unsigned long long)arg1;
- (unsigned long long)machAbsoluteTimeForMachContinuousTime:(unsigned long long)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)addTimestampPairWithMachAbsoluteTime:(unsigned long long)arg1 machContinuousTime:(unsigned long long)arg2;
- (id)serializableDictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithDataRepresentation:(id)arg1;
- (id)dataRepresentation;
@property(readonly, nonatomic) BOOL containsContinuousTimeJumps;
- (id)init;

@end

