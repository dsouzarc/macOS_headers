//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface SGJournal : NSObject
{
    NSMutableArray *_calendarObservers;
    NSMutableArray *_contactsObservers;
    NSMutableArray *_remindersObservers;
    NSMutableArray *_queuedOperations;
    BOOL _observersFrozen;
}

- (void).cxx_destruct;
- (BOOL)hasObserver:(id)arg1;
- (void)thawObserversForTesting;
- (void)freezeObservers;
- (void)addRemindersObserver:(id)arg1;
- (void)addContactsObserver:(id)arg1;
- (void)addCalendarObserver:(id)arg1;
- (void)addEntries:(id)arg1;
- (unsigned long long)_eventBatchOperationSupportedForEntries:(id)arg1;
- (void)addEntry:(id)arg1;
- (void)_callCalendarObservers:(id)arg1 contactsObservers:(id)arg2 remindersObservers:(id)arg3 withEntry:(id)arg4;
- (id)init;

@end

