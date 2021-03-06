//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

#import "VisualTabPickerCloudDeviceViewDataSource.h"
#import "VisualTabPickerCloudDeviceViewDelegate.h"

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface VisualTabPickerCloudTabsView : NSView <VisualTabPickerCloudDeviceViewDataSource, VisualTabPickerCloudDeviceViewDelegate>
{
    NSMutableArray *_deviceViews;
    BOOL _hasDeviceViewsConstraints;
    id <VisualTabPickerCloudTabsViewDataSource> _dataSource;
    id <VisualTabPickerCloudTabsViewDelegate> _delegate;
}

+ (BOOL)requiresConstraintBasedLayout;
@property(nonatomic) __weak id <VisualTabPickerCloudTabsViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <VisualTabPickerCloudTabsViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (void)_reloadData;
- (void)didRemoveAllCloudTabsForVisualTabPickerCloudDeviceView:(id)arg1;
- (void)visualTabPickerCloudDeviceView:(id)arg1 didRemoveCloudTabAtIndex:(unsigned long long)arg2;
- (void)visualTabPickerCloudDeviceView:(id)arg1 didSelectCloudTabAtIndex:(unsigned long long)arg2;
- (id)visualTabPickerCloudDeviceView:(id)arg1 titleOfTabAtIndex:(unsigned long long)arg2;
- (unsigned long long)numberOfTabsForVisualTabPickerCloudDeviceView:(id)arg1;
- (id)nameOfDeviceForVisualTabPickerCloudDeviceView:(id)arg1;
- (void)updateConstraints;
- (void)layout;
- (void)reloadData;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

