//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <EventKit/EKCalendar.h>

#import <CalendarUI/EKUIAlertable-Protocol.h>

@class NSDate, NSString;

@interface EKCalendar (Alertable) <EKUIAlertable>
@property(retain) NSString *personIdentifier;
- (void)setLocation:(id)arg1 addressString:(id)arg2 label:(id)arg3 radius:(double)arg4;
- (void)removeStructuredLocation;
- (id)completeLocationString;
- (id)preferredLocationString;
- (void)setProximity:(long long)arg1;
- (long long)proximity;
- (id)structuredLocation;
- (id)locationBasedAlarm;
@property(retain) NSDate *alarmTime;
- (id)timeBasedAlarm;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

