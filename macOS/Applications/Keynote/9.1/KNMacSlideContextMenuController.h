//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSMenuDelegate.h"

@class NSMenu, NSMenuItem, NSString;

@interface KNMacSlideContextMenuController : NSObject <NSMenuDelegate>
{
    BOOL _hideExpandAndCollapseMenuItems;
    NSMenu *_contextMenu;
    NSMenuItem *_p_expandMenuItem;
    NSMenuItem *_p_collapseMenuItem;
    NSMenuItem *_p_separatorMenuItem;
}

@property(nonatomic) NSMenuItem *p_separatorMenuItem; // @synthesize p_separatorMenuItem=_p_separatorMenuItem;
@property(nonatomic) NSMenuItem *p_collapseMenuItem; // @synthesize p_collapseMenuItem=_p_collapseMenuItem;
@property(nonatomic) NSMenuItem *p_expandMenuItem; // @synthesize p_expandMenuItem=_p_expandMenuItem;
@property(nonatomic) BOOL hideExpandAndCollapseMenuItems; // @synthesize hideExpandAndCollapseMenuItems=_hideExpandAndCollapseMenuItems;
@property(retain, nonatomic) NSMenu *contextMenu; // @synthesize contextMenu=_contextMenu;
- (void).cxx_destruct;
- (void)p_updateMenuItemVisibility;
- (void)p_loadMenuFromNibIfNecessary;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

