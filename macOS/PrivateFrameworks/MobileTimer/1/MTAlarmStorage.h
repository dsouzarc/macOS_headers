//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MobileTimer/MTAlarmScheduleDelegate-Protocol.h>
#import <MobileTimer/MTAlarmStorage-Protocol.h>

@class MTAlarm, MTAlarmMigrator, MTAlarmScheduler, NSArray, NSDate, NSHashTable, NSMutableArray, NSString;
@protocol MTPersistence, NAScheduler;

@interface MTAlarmStorage : NSObject <MTAlarmScheduleDelegate, MTAlarmStorage>
{
    MTAlarmScheduler *_scheduler;
    NSMutableArray *_orderedAlarms;
    MTAlarm *_sleepAlarm;
    NSDate *_lastModifiedDate;
    id <NAScheduler> _serializer;
    NSHashTable *_observers;
    MTAlarmMigrator *_migrator;
    id <MTPersistence> _persistence;
    CDUnknownBlockType _currentDateProvider;
}

+ (id)_diagnosticDictionaryForAlarm:(id)arg1;
+ (id)_alarmsByMergingAlarms:(id)arg1 withAlarms:(id)arg2 addedAlarms:(id)arg3 updatedAlarms:(id)arg4;
+ (id)alarmsByMergingAlarms:(id)arg1 withAlarms:(id)arg2;
@property(readonly, copy, nonatomic) CDUnknownBlockType currentDateProvider; // @synthesize currentDateProvider=_currentDateProvider;
@property(retain, nonatomic) id <MTPersistence> persistence; // @synthesize persistence=_persistence;
@property(retain, nonatomic) MTAlarmMigrator *migrator; // @synthesize migrator=_migrator;
@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) id <NAScheduler> serializer; // @synthesize serializer=_serializer;
@property(retain, nonatomic) NSDate *lastModifiedDate; // @synthesize lastModifiedDate=_lastModifiedDate;
@property(retain, nonatomic) MTAlarm *sleepAlarm; // @synthesize sleepAlarm=_sleepAlarm;
@property(retain, nonatomic) NSMutableArray *orderedAlarms; // @synthesize orderedAlarms=_orderedAlarms;
@property(nonatomic) __weak MTAlarmScheduler *scheduler; // @synthesize scheduler=_scheduler;
- (void).cxx_destruct;
- (id)_diagnosticAlarmDictionary;
- (id)gatherDiagnostics;
- (void)printDiagnostics;
- (void)handleF5Reset;
- (void)_queue_persistAlarms;
- (BOOL)_queue_hasMatchingAlarm:(id)arg1;
- (id)_queue_alarmMatchingAlarmIdentifier:(id)arg1;
- (id)_queue_alarmMatchingAlarm:(id)arg1;
- (void)scheduler:(id)arg1 didFireAlarm:(id)arg2;
- (void)scheduler:(id)arg1 didChangeNextAlarm:(id)arg2;
- (void)_notifyObserversForNextAlarmChange:(id)arg1 source:(id)arg2;
- (void)_notifyObserversForAlarmFire:(id)arg1 triggerType:(unsigned long long)arg2 source:(id)arg3;
- (void)_notifyObserversForAlarmDismiss:(id)arg1 dismissAction:(unsigned long long)arg2 source:(id)arg3;
- (void)_notifyObserversForAlarmSnooze:(id)arg1 snoozeAction:(unsigned long long)arg2 source:(id)arg3;
- (void)_notifyObserversForAlarmRemoval:(id)arg1 source:(id)arg2;
- (void)_notifyObserversForAlarmChange:(id)arg1 source:(id)arg2;
- (void)_notifyObserversForAlarmAdd:(id)arg1 source:(id)arg2;
- (void)_notifyObserversWithBlock:(CDUnknownBlockType)arg1;
- (void)registerObserver:(id)arg1;
- (void)_queue_sortAlarms;
- (void)_queue_dismissAlarmWithIdentifier:(id)arg1 dismissDate:(id)arg2 dismissAction:(unsigned long long)arg3 withCompletion:(CDUnknownBlockType)arg4 source:(id)arg5;
- (void)_queue_snoozeAlarmWithIdentifier:(id)arg1 snoozeDate:(id)arg2 snoozeAction:(unsigned long long)arg3 withCompletion:(CDUnknownBlockType)arg4 source:(id)arg5;
- (void)_queue_mergeAlarms:(id)arg1 sleepAlarm:(id)arg2 source:(id)arg3;
- (void)_queue_setAllAlarms:(id)arg1 sleepAlarm:(id)arg2 source:(id)arg3 persist:(BOOL)arg4 notify:(BOOL)arg5;
- (void)_queue_setAllAlarms:(id)arg1 sleepAlarm:(id)arg2 source:(id)arg3;
- (void)_queue_removeAllAlarmsForSource:(id)arg1;
- (id)_applyNecessaryChangesFromOldAlarm:(id)arg1 currentAlarm:(id)arg2;
- (id)_queuePersistAlarm:(id)arg1 replacingAlarm:(id)arg2;
- (void)_queue_actuallyRemoveAlarm:(id)arg1 withCompletion:(CDUnknownBlockType)arg2 source:(id)arg3;
- (void)_queue_removeAlarmWithIdentifier:(id)arg1 withCompletion:(CDUnknownBlockType)arg2 source:(id)arg3;
- (void)_queue_removeAlarm:(id)arg1 withCompletion:(CDUnknownBlockType)arg2 source:(id)arg3;
- (void)_queue_updateAlarm:(id)arg1 withCompletion:(CDUnknownBlockType)arg2 source:(id)arg3;
- (void)_queue_addAlarm:(id)arg1 withCompletion:(CDUnknownBlockType)arg2 source:(id)arg3;
- (void)dismissAlarmWithIdentifier:(id)arg1 dismissDate:(id)arg2 dismissAction:(unsigned long long)arg3 withCompletion:(CDUnknownBlockType)arg4 source:(id)arg5;
- (void)dismissAlarmWithIdentifier:(id)arg1 dismissAction:(unsigned long long)arg2 withCompletion:(CDUnknownBlockType)arg3 source:(id)arg4;
- (void)snoozeAlarmWithIdentifier:(id)arg1 snoozeDate:(id)arg2 snoozeAction:(unsigned long long)arg3 withCompletion:(CDUnknownBlockType)arg4 source:(id)arg5;
- (void)snoozeAlarmWithIdentifier:(id)arg1 snoozeAction:(unsigned long long)arg2 withCompletion:(CDUnknownBlockType)arg3 source:(id)arg4;
- (void)mergeAlarms:(id)arg1 sleepAlarm:(id)arg2 source:(id)arg3;
- (void)setAllAlarms:(id)arg1 sleepAlarm:(id)arg2 source:(id)arg3;
- (void)removeAllAlarmsForSource:(id)arg1;
- (void)removeAlarmWithIdentifier:(id)arg1 withCompletion:(CDUnknownBlockType)arg2 source:(id)arg3;
- (void)removeAlarm:(id)arg1 withCompletion:(CDUnknownBlockType)arg2 source:(id)arg3;
- (void)updateAlarm:(id)arg1 withCompletion:(CDUnknownBlockType)arg2 source:(id)arg3;
- (void)addAlarm:(id)arg1 withCompletion:(CDUnknownBlockType)arg2 source:(id)arg3;
@property(readonly, nonatomic) MTAlarm *nextAlarm;
- (void)getAlarmsWithCompletion:(CDUnknownBlockType)arg1;
- (id)_queue_allAlarms;
@property(readonly, nonatomic) NSArray *allAlarms;
@property(readonly, nonatomic) NSArray *alarms;
- (void)_queue_resetAlarmsTo:(id)arg1 sleepAlarm:(id)arg2;
- (void)_loadAlarmsWithCompletion:(CDUnknownBlockType)arg1;
- (void)loadAlarmsSync;
- (void)loadAlarms;
- (id)_cleanUpForInternalBuild:(id)arg1;
- (id)initWithPersistence:(id)arg1 migrator:(id)arg2 scheduler:(id)arg3 currentDateProvider:(CDUnknownBlockType)arg4;
- (id)initWithPersistence:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

