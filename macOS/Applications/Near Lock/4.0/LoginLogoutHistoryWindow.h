//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NearLockListViewWindow.h"

#import "FilterControllerDelegate-Protocol.h"
#import "PXListViewDelegate-Protocol.h"

@class FilterController, LoginLogoutFilterModel, NSArray, NSString;
@protocol LoginLogoutHistoryWindowDelegate;

@interface LoginLogoutHistoryWindow : NearLockListViewWindow <PXListViewDelegate, FilterControllerDelegate>
{
    id <LoginLogoutHistoryWindowDelegate> _delegate;
    NSArray *_listViewArray;
    LoginLogoutFilterModel *_filterModel;
    FilterController *_filterController;
}

@property(retain, nonatomic) FilterController *filterController; // @synthesize filterController=_filterController;
@property(retain, nonatomic) LoginLogoutFilterModel *filterModel; // @synthesize filterModel=_filterModel;
@property(retain, nonatomic) NSArray *listViewArray; // @synthesize listViewArray=_listViewArray;
@property(nonatomic) __weak id <LoginLogoutHistoryWindowDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dealloc;
- (void)deleteAllTrackEntries;
- (void)exportLoginLogoutDataToDesktop;
- (void)didToggleButtonCenterButton:(id)arg1;
- (void)didToggleButtonRightButton:(id)arg1;
- (void)infoButtonToggled:(id)arg1;
- (void)listViewSelectionDidChange:(id)arg1;
- (double)listView:(id)arg1 heightOfRow:(unsigned long long)arg2;
- (id)listView:(id)arg1 cellForRow:(unsigned long long)arg2;
- (unsigned long long)numberOfRowsInListView:(id)arg1;
- (void)reloadDatsourceWithCompletion:(CDUnknownBlockType)arg1;
- (void)scrollToLastRow;
- (void)awakeFromNib;
- (void)filterControllerDidUpdateFilter:(id)arg1;
- (void)showWindow;
- (void)windowDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

