//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ContactsUI/NSObject-Protocol.h>

@class CNCardPropertyGroup, CNContactViewCache, CNPropertyCell, CNPropertyGroupItem, NSString;
@protocol CNUIUserActionListDataSource;

@protocol CNPropertyCellDelegate <NSObject>
- (CNContactViewCache *)contactViewCache;
- (void)propertyCellDidChangeLayout:(CNPropertyCell *)arg1;
- (void)propertyCell:(CNPropertyCell *)arg1 performActionForItem:(CNPropertyGroupItem *)arg2 withTransportType:(long long)arg3;
- (void)propertyCell:(CNPropertyCell *)arg1 didDeleteLabel:(NSString *)arg2 forGroup:(CNCardPropertyGroup *)arg3;
- (void)propertyCell:(CNPropertyCell *)arg1 didUpdateItem:(CNPropertyGroupItem *)arg2 withNewValue:(id)arg3;
- (void)propertyCell:(CNPropertyCell *)arg1 didUpdateItem:(CNPropertyGroupItem *)arg2 withNewLabel:(NSString *)arg3;

@optional
- (id <CNUIUserActionListDataSource>)sharedActionsDataSource;
@end

