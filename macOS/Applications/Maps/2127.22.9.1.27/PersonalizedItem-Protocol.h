//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AddressBookAddress, MKMapItem, MapsLocationOfInterest, NSArray, NSDate, NSSet, ParkedCar, PersonalizedItemPrioritizedStringAdornment, PersonalizedItemSource, PersonalizedItemStyleAttributesAdornment, SearchResult, VKLabelMarker;

@protocol PersonalizedItem <NSObject>
@property(readonly, nonatomic) BOOL mustRefineMapItem;
@property(readonly, nonatomic) BOOL shouldBeHiddenFromMap;
@property(readonly, nonatomic) NSArray *searchableStrings;
@property(readonly, nonatomic) AddressBookAddress *address;
@property(readonly, nonatomic) VKLabelMarker *sourceLabelMarker;
@property(readonly, nonatomic) SearchResult *searchResult;
@property(readonly, nonatomic) BOOL showsBalloonCallout;
@property(readonly, nonatomic) BOOL shouldBeClustered;
@property(readonly, nonatomic) PersonalizedItemStyleAttributesAdornment *styleAttributes;
@property(readonly, nonatomic) unsigned long long sortOrder;
@property(readonly, nonatomic) PersonalizedItemPrioritizedStringAdornment *subtitle;
@property(readonly, nonatomic) PersonalizedItemPrioritizedStringAdornment *title;
@property(readonly, nonatomic) PersonalizedItemPrioritizedStringAdornment *prefix;
@property(readonly, nonatomic) struct CLLocationCoordinate2D coordinate;
@property(nonatomic) __weak PersonalizedItemSource *source;
@property(readonly, nonatomic) MKMapItem *mapItem;
@property(readonly, nonatomic) unsigned long long priority;
@property(readonly, nonatomic) NSSet *keys;

@optional
@property(readonly, nonatomic) BOOL wantsDisplayedSearchResultsTypePoints;
@property(readonly, nonatomic) MapsLocationOfInterest *locationOfInterest;
@property(readonly, nonatomic) ParkedCar *parkedCar;
@property(readonly, nonatomic) NSDate *eventDate;
@property(readonly, nonatomic) BOOL needsToPreserveSelection;
@property(readonly, nonatomic) BOOL isRouteStartOrEnd;
@end

