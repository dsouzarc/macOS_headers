//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "EKChangeListenerDelegate-Protocol.h"

@class CALMainController, NSMutableDictionary, NSMutableSet, NSString;

@interface CalUISelectionManager : NSObject <EKChangeListenerDelegate>
{
    BOOL _notificationIsPending;
    CALMainController *_mainController;
    NSMutableDictionary *_selectedEventsIndex;
    NSMutableSet *_modifiedEventOccIDs;
    NSMutableDictionary *_proposedEventSelectionStates;
}

@property(retain, nonatomic) NSMutableDictionary *proposedEventSelectionStates; // @synthesize proposedEventSelectionStates=_proposedEventSelectionStates;
@property(retain) NSMutableSet *modifiedEventOccIDs; // @synthesize modifiedEventOccIDs=_modifiedEventOccIDs;
@property(retain) NSMutableDictionary *selectedEventsIndex; // @synthesize selectedEventsIndex=_selectedEventsIndex;
@property BOOL notificationIsPending; // @synthesize notificationIsPending=_notificationIsPending;
@property __weak CALMainController *mainController; // @synthesize mainController=_mainController;
- (void).cxx_destruct;
- (void)_removeEventFromProposedSelection:(id)arg1 isProposal:(BOOL)arg2;
- (void)_addEventToProposedSelection:(id)arg1 isProposal:(BOOL)arg2;
- (void)_updateProposedSelectionStateWithEvent:(id)arg1 selection:(BOOL)arg2 extendSelection:(BOOL)arg3 occurrence:(id)arg4;
- (BOOL)hasSelectedProposedOccurrenceForEvent:(id)arg1;
- (void)refetchEvents;
- (BOOL)updateSelectionForUIOccurrence:(id)arg1 fromMouseEvent:(id)arg2;
- (long long)numberOfSelectedEvents;
- (id)selectedEventOccurrenceIDs;
- (id)selectedEvents;
- (BOOL)isEventOccurrenceIDSelected:(id)arg1;
- (BOOL)isUIOccurrenceSelected:(id)arg1;
- (BOOL)hasSelectedEvents;
- (void)selectEvents:(id)arg1;
- (void)_selectEvent:(id)arg1 extendSelection:(BOOL)arg2;
- (void)selectEvent:(id)arg1 extendSelection:(BOOL)arg2 withOccurrence:(id)arg3;
- (void)selectEvent:(id)arg1 extendSelection:(BOOL)arg2;
- (void)selectEvent:(id)arg1;
- (void)selectEventOccurrenceIDs:(id)arg1 andNotify:(BOOL)arg2;
- (void)selectEventOccurrenceIDs:(id)arg1;
- (void)selectEventOccurrenceID:(id)arg1;
- (id)eventForEventOccurrenceID:(id)arg1;
- (void)deselectEventOccurrenceIDs:(id)arg1;
- (void)deselectEvent:(id)arg1 withOccurrence:(id)arg2;
- (void)deselectEvent:(id)arg1;
- (void)clearSelection;
- (void)_clearSelectionExceptEventOccurrenceIDs:(id)arg1;
- (void)postSelectionChangedNotification;
- (void)postSelectionChangedNotificationForEventOccurrenceIDs:(id)arg1;
- (void)actuallyPostSelectionChangedNotification;
- (id)calendarsForSelectedEvents;
- (id)calendarForSelectedEvents;
- (void)_removeAnyoneWhoIsPointingToEvent:(id)arg1;
- (void)trackedObjectsDidUpdate:(id)arg1;
- (id)trackedObjectMap;
- (id)trackedObjects;
- (void)checkedCalendarsDidChange;
- (void)_invalidateRestorableState;
- (void)dealloc;
- (id)initWithMainController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

