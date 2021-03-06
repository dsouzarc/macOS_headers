//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <EventKitUI/CUIKSingleDayTimelineViewItem-Protocol.h>

@class EKCalendarDate, EKDayOccurrenceContentPayload, EKDayOccurrenceState, EKDayOccurrenceView, EKEvent, NSDate, NSString;

@interface EKDayViewContentItem : NSObject <CUIKSingleDayTimelineViewItem>
{
    struct CGRect _stagedFrame;
    struct CGRect _unPinnedViewFrame;
    double _visibleHeight;
    BOOL _visibleHeightLocked;
    double _travelTimeHeight;
    long long _sizeClass;
    long long _currentRequestId;
    EKDayOccurrenceContentPayload *_stagedPayload;
    BOOL _usesSmallText;
    BOOL _isProposedTime;
    BOOL _isLoadingAsync;
    EKEvent *_event;
    unsigned long long _eventIndex;
    EKDayOccurrenceView *_view;
    EKCalendarDate *_startDate;
    EKCalendarDate *_endDate;
    double _travelTime;
    double _topPinningProximity;
    double _bottomPinningProximity;
    EKDayOccurrenceState *_currentState;
}

+ (double)barToBarHorizontalDistanceIncludingBarWidth;
@property(readonly, nonatomic) EKDayOccurrenceState *currentState; // @synthesize currentState=_currentState;
@property(nonatomic) double bottomPinningProximity; // @synthesize bottomPinningProximity=_bottomPinningProximity;
@property(nonatomic) double topPinningProximity; // @synthesize topPinningProximity=_topPinningProximity;
@property(nonatomic) double travelTime; // @synthesize travelTime=_travelTime;
@property(copy, nonatomic) EKCalendarDate *endDate; // @synthesize endDate=_endDate;
@property(copy, nonatomic) EKCalendarDate *startDate; // @synthesize startDate=_startDate;
@property(retain, nonatomic) EKDayOccurrenceView *view; // @synthesize view=_view;
@property(readonly, nonatomic) unsigned long long eventIndex; // @synthesize eventIndex=_eventIndex;
@property(nonatomic) BOOL isLoadingAsync; // @synthesize isLoadingAsync=_isLoadingAsync;
@property(nonatomic) BOOL isProposedTime; // @synthesize isProposedTime=_isProposedTime;
@property(nonatomic) BOOL usesSmallText; // @synthesize usesSmallText=_usesSmallText;
@property(retain, nonatomic) EKEvent *event; // @synthesize event=_event;
- (void).cxx_destruct;
- (void)_updateWithPayload:(id)arg1;
- (void)_requestPayload:(BOOL)arg1;
@property(nonatomic) double travelTimeHeight;
@property(nonatomic) double visibleHeight;
@property(readonly) BOOL visibleHeightLocked;
@property struct CGRect unPinnedViewFrame;
- (void)setStagedFrame:(struct CGRect)arg1;
- (struct CGRect)stagedFrame;
@property(readonly, nonatomic) BOOL hideTravelTime;
@property(readonly, nonatomic) double viewMaxNaturalTextHeight;
@property(readonly, nonatomic) double enoughHeightForOneLine;
@property(readonly, nonatomic) NSDate *end;
@property(readonly, nonatomic) NSDate *start;
@property(readonly, nonatomic) NSDate *startWithTravelTime;
- (void)resetVisibleHeight;
- (BOOL)isPinned;
@property(readonly, copy, nonatomic) EKCalendarDate *startDateIncludingTravelTime;
@property(readonly, copy) NSString *description;
- (BOOL)isEqual:(id)arg1;
- (id)initWithEventIndex:(unsigned long long)arg1 sizeClass:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

