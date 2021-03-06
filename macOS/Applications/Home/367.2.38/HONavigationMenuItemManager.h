//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Home/HFItemManager.h>

@class HFHomeItemProvider, HFRoomItemProvider, HFStaticItem, HFStaticItemProvider, NSArray;

@interface HONavigationMenuItemManager : HFItemManager
{
    HFStaticItem *_invitationItem;
    HFHomeItemProvider *_homeItemProvider;
    HFRoomItemProvider *_roomItemProvider;
    NSArray *_staticHomeSectionItems;
    HFStaticItemProvider *_staticItemProvider;
}

@property(retain, nonatomic) HFStaticItemProvider *staticItemProvider; // @synthesize staticItemProvider=_staticItemProvider;
@property(retain, nonatomic) NSArray *staticHomeSectionItems; // @synthesize staticHomeSectionItems=_staticHomeSectionItems;
@property(retain, nonatomic) HFRoomItemProvider *roomItemProvider; // @synthesize roomItemProvider=_roomItemProvider;
@property(retain, nonatomic) HFHomeItemProvider *homeItemProvider; // @synthesize homeItemProvider=_homeItemProvider;
@property(retain, nonatomic) HFStaticItem *invitationItem; // @synthesize invitationItem=_invitationItem;
- (void).cxx_destruct;
- (id)_buildSectionsWithDisplayedItems:(id)arg1;
- (void)homeManager:(id)arg1 didUpdateStatus:(unsigned long long)arg2;
- (void)homeManagerDidUpdateDataSyncState:(id)arg1;
- (id)_buildItemProvidersForHome:(id)arg1;
- (id)initWithDelegate:(id)arg1;

@end

