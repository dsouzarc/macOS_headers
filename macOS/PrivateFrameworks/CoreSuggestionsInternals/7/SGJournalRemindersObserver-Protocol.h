//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SGJournalBaseObserver.h"

@class SGStorageReminder;

@protocol SGJournalRemindersObserver <SGJournalBaseObserver>
- (void)orphanReminder:(SGStorageReminder *)arg1;
- (void)rejectReminderFromOtherDevice:(SGStorageReminder *)arg1;
- (void)confirmReminderFromOtherDevice:(SGStorageReminder *)arg1;
- (void)reminderAlarmTriggeredFromThisDevice:(SGStorageReminder *)arg1;
- (void)rejectReminderFromThisDevice:(SGStorageReminder *)arg1;
- (void)confirmReminderFromThisDevice:(SGStorageReminder *)arg1;
- (void)addReminder:(SGStorageReminder *)arg1;
@end

