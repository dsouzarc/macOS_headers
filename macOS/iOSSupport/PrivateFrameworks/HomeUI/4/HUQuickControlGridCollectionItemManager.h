//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Home/HFItemManager.h>

#import <HomeUI/HUQuickControlCollectionItemManaging-Protocol.h>

@class HFAccessoryControlItem, HFItem, HFItemProvider, HFServiceItemProvider, NSMapTable, NSSet, NSString;
@protocol HFServiceLikeItem;

@interface HUQuickControlGridCollectionItemManager : HFItemManager <HUQuickControlCollectionItemManaging>
{
    HFItemProvider *_supplementaryItemProvider;
    HFItemProvider *_overflowItemProvider;
    HFAccessoryControlItem *_accessoryControlItem;
    HFItem<HFServiceLikeItem> *_sourceServiceLikeItem;
    NSSet *_controlItems;
    HFServiceItemProvider *_serviceItemProvider;
    HFItemProvider *_controlItemProvider;
    NSMapTable *_controlItemToViewControllerTable;
}

+ (CDUnknownBlockType)serviceItemComparator;
+ (unsigned long long)specialCaseSectionSortingForControlItem:(id)arg1 viewController:(id)arg2 fromControlItems:(id)arg3 primaryServiceType:(id)arg4;
+ (BOOL)isPrimaryOrBinaryStateControlItem:(id)arg1;
+ (unsigned long long)preferredControlForControlItem:(id)arg1 allControlItems:(id)arg2 isSupplementary:(BOOL)arg3;
@property(retain, nonatomic) NSMapTable *controlItemToViewControllerTable; // @synthesize controlItemToViewControllerTable=_controlItemToViewControllerTable;
@property(retain, nonatomic) HFItemProvider *controlItemProvider; // @synthesize controlItemProvider=_controlItemProvider;
@property(retain, nonatomic) HFServiceItemProvider *serviceItemProvider; // @synthesize serviceItemProvider=_serviceItemProvider;
@property(retain, nonatomic) NSSet *controlItems; // @synthesize controlItems=_controlItems;
@property(retain, nonatomic) HFItem<HFServiceLikeItem> *sourceServiceLikeItem; // @synthesize sourceServiceLikeItem=_sourceServiceLikeItem;
@property(copy, nonatomic) HFAccessoryControlItem *accessoryControlItem; // @synthesize accessoryControlItem=_accessoryControlItem;
@property(readonly, nonatomic) HFItemProvider *overflowItemProvider; // @synthesize overflowItemProvider=_overflowItemProvider;
@property(readonly, nonatomic) HFItemProvider *supplementaryItemProvider; // @synthesize supplementaryItemProvider=_supplementaryItemProvider;
- (void).cxx_destruct;
- (id)_composeIdentifierForService:(id)arg1 section:(unsigned long long)arg2;
- (BOOL)_catchAllLayoutForGridViewProfiles:(id)arg1 supplementaryViewProfiles:(id)arg2;
- (id)titleForItem:(id)arg1;
- (id)gridItemProvider;
- (id)viewControllerForItem:(id)arg1;
- (id)_generateViewControllersForControlItems:(id)arg1;
- (id)_buildSectionsWithDisplayedItems:(id)arg1;
- (id)_buildItemProvidersForHome:(id)arg1;
- (id)configuration;
- (id)sourceItem;
- (id)initWithDelegate:(id)arg1 sourceItem:(id)arg2;
- (id)initWithDelegate:(id)arg1 controlItems:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

