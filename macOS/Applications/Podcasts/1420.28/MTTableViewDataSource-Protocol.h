//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"
#import "UITableViewDataSource-Protocol.h"

@class MTTableView, NSIndexPath, UIView;

@protocol MTTableViewDataSource <UITableViewDataSource, NSObject>

@optional
- (UIView *)tableView:(MTTableView *)arg1 popoverDetailViewForRowAtIndexPath:(NSIndexPath *)arg2;
@end

