//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FFRolesMenuController, NSSet, NSString;

@protocol FFRolesMenuDelegate <NSObject>
- (void)rolesMenuController:(FFRolesMenuController *)arg1 shouldAddRole:(NSString *)arg2 toAnchoredObjects:(NSSet *)arg3;
- (NSSet *)anchoredObjectsForRolesMenuController:(FFRolesMenuController *)arg1;

@optional
- (void)shouldEditRolesForRolesMenuController:(FFRolesMenuController *)arg1;
@end

