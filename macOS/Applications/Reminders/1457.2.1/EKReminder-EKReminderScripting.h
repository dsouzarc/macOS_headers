//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <EventKit/EKReminder.h>

@interface EKReminder (EKReminderScripting)
+ (id)newScriptingReminderInList:(id)arg1 withProperties:(id)arg2;
- (void)setScriptingNotes:(id)arg1;
- (id)scriptingNotes;
- (void)setScriptingPriority:(long long)arg1;
- (long long)scriptingPriority;
- (id)scriptingLastModifiedDate;
- (id)scriptingCreationDate;
- (void)setScriptingDueDate:(id)arg1;
- (id)scriptingDueDate;
- (void)setScriptingTitle:(id)arg1;
- (id)scriptingTitle;
- (void)setScriptingCompletionDate:(id)arg1;
- (id)scriptingCompletionDate;
- (void)setScriptingCompleted:(BOOL)arg1;
- (BOOL)scriptingCompleted;
- (void)setScriptingRemindMeDate:(id)arg1;
- (id)scriptingRemindMeDate;
- (id)scriptingUUID;
- (id)scriptingContainer;
- (id)handleShowScriptCommand:(id)arg1;
- (id)objectSpecifier;
@end

