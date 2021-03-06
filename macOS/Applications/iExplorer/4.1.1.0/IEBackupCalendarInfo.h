//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;

__attribute__((visibility("hidden")))
@interface IEBackupCalendarInfo : NSObject
{
    NSArray *calendars;
    NSMutableArray *tasks;
    NSMutableArray *events;
}

@property(readonly, nonatomic) NSMutableArray *events; // @synthesize events;
@property(readonly, nonatomic) NSMutableArray *tasks; // @synthesize tasks;
@property(readonly, nonatomic) NSArray *calendars; // @synthesize calendars;
- (void).cxx_destruct;
- (void)loadCalendarsWithDBPath:(id)arg1;
- (void)loadIOS5CalendarsWithDBPath:(id)arg1;
- (void)loadOlderCalendarsWithDBPath:(id)arg1;
- (id)init;

@end

