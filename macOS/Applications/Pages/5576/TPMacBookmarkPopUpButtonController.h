//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSMenuDelegate-Protocol.h"

@class NSMenuItem, NSPopUpButton, NSString, TPBookmarkController;
@protocol TSWPBookmarkEntry;

@interface TPMacBookmarkPopUpButtonController : NSObject <NSMenuDelegate>
{
    NSMenuItem *_noneMenuItem;
    NSMenuItem *_styleSectionSeperatorItem;
    NSMenuItem *_styleSectionHeaderItem;
    NSMenuItem *_editSuggestionsMenuItem;
    NSPopUpButton *_popUpButton;
    id <TSWPBookmarkEntry> _bookmarkToSelect;
    TPBookmarkController *_bookmarkController;
}

- (void).cxx_destruct;
- (void)menuDidClose:(id)arg1;
- (void)menuWillOpen:(id)arg1;
- (void)p_bookmarksDidChange:(id)arg1;
- (id)p_headerMenuItemWithTitle:(id)arg1;
- (void)p_removeMenuItemForBookmark:(id)arg1;
- (void)p_addMenuItemForBookmark:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)p_updateMenuItemsPageForBookmarks:(id)arg1;
- (void)p_updateMenuItemsNameForBookmarks:(id)arg1;
- (void)p_removeMenuItemsForBookmarks:(id)arg1;
- (void)p_addMenuItemsForStyleBookmarks:(id)arg1;
- (void)p_addMenuItemsForManualBookmarks:(id)arg1;
- (void)p_selectNoneMenuItem;
- (long long)p_firstSuggestedBookmarkIndex;
- (void)p_selectMenuItemForBookmark:(id)arg1;
- (void)dealloc;
- (void)setSuggestedBookmarksEnabled:(BOOL)arg1;
- (void)selectMenuItemForURL:(id)arg1;
- (id)initWithPopUpButton:(id)arg1 bookmarkController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

