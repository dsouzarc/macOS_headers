//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import <Safari/BookmarksOutlineViewDelegate-Protocol.h>
#import <Safari/BookmarksSidebarTableCellViewDelegate-Protocol.h>
#import <Safari/CustomKeyViewLoop-Protocol.h>
#import <Safari/NSMenuDelegate-Protocol.h>
#import <Safari/NSOutlineViewDataSource-Protocol.h>
#import <Safari/SidebarContentFilterDelegate-Protocol.h>
#import <Safari/SidebarContentFiltering-Protocol.h>
#import <Safari/SidebarContentViewController-Protocol.h>
#import <Safari/SidebarScrollViewAccessibilityDelegate-Protocol.h>
#import <Safari/SidebarSearchFieldDelegate-Protocol.h>
#import <Safari/SidebarSearchFieldViewDelegate-Protocol.h>

@class BookmarksOutlineView, BookmarksSearcher, NSArray, NSButton, NSMenu, NSSearchField, NSString, SidebarScrollView;

__attribute__((visibility("hidden")))
@interface BookmarksSidebarViewController : NSViewController <SidebarSearchFieldDelegate, SidebarScrollViewAccessibilityDelegate, SidebarContentViewController, NSMenuDelegate, NSOutlineViewDataSource, BookmarksOutlineViewDelegate, BookmarksSidebarTableCellViewDelegate, CustomKeyViewLoop, SidebarContentFilterDelegate, SidebarContentFiltering, SidebarSearchFieldViewDelegate>
{
    SidebarScrollView *_scrollView;
    NSButton *_editButton;
    BookmarksSearcher *_searcher;
    NSMenu *_contextMenu;
    BOOL _deselectAfterRowClickIsPending;
    BookmarksOutlineView *_outlineView;
    NSArray *_draggedBookmarks;
}

@property(retain, nonatomic) NSArray *draggedBookmarks; // @synthesize draggedBookmarks=_draggedBookmarks;
@property(nonatomic) __weak BookmarksOutlineView *outlineView; // @synthesize outlineView=_outlineView;
- (void).cxx_destruct;
- (void)_didRecognizeImmediateAction:(id)arg1;
- (void)addBookmarkFolder:(id)arg1;
- (void)_addBookmarkFolderInBookmark:(id)arg1;
- (void)_editAddressOfBookmark:(id)arg1;
- (id)_contextMenuBuilderForRow:(long long)arg1;
- (BOOL)_canShowMenuForRow:(long long)arg1;
- (void)_openBookmarkAndGiveFocusToWebContent:(id)arg1;
- (void)_openSelectedLeafBookmarksUsingWindowPolicy;
- (void)_doubleClickAction:(id)arg1;
- (void)_deleteBookmarks:(id)arg1;
- (void)_deleteSelectedBookmarks;
- (void)_editTitleOfBookmark:(id)arg1;
- (id)_selectedBookmarks;
- (BOOL)_shouldDisplaySearchResults;
- (BOOL)_shouldDisplayBookmarkInSidebar:(id)arg1;
- (long long)_rowForBookmark:(id)arg1;
- (unsigned long long)_indexInParent:(id)arg1 forDisplayedBookmarkAtIndex:(unsigned long long)arg2;
- (id)_bookmarkAtIndex:(unsigned long long)arg1 forParentBookmark:(id)arg2;
- (unsigned long long)_numberOfChildrenForBookmark:(id)arg1;
- (void)_bookmarksWereReloaded:(id)arg1;
- (void)_bookmarksDidChange:(id)arg1;
- (void)_bookmarksWereRemoved:(id)arg1;
- (void)_bookmarksWereAdded:(id)arg1;
- (void)_reloadOutlineViewAndSearchResultsIfNecessary;
- (void)_pasteBookmarks;
- (BOOL)_canCutSelectedBookmarks;
- (BOOL)_canPasteBookmarks;
- (BOOL)_canCopySelectedBookmarks;
- (BOOL)_canCopyBookmark:(id)arg1;
- (void)_copyBookmarks:(id)arg1;
- (void)_copySelectedBookmarks;
- (BOOL)_canDeleteSelectedBookmarks;
- (BOOL)_canDeleteBookmark:(id)arg1;
- (BOOL)_canEditBookmark:(id)arg1;
- (id)_topLevelBookmark;
- (void)deleteForward:(id)arg1;
- (void)deleteBackward:(id)arg1;
- (void)delete:(id)arg1;
- (void)paste:(id)arg1;
- (void)copy:(id)arg1;
- (void)cut:(id)arg1;
- (id)sideBarScrollViewAccessibilityChildren:(id)arg1;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (id)safari_keyViews;
- (void)didPressRemoveButtonForTableCellView:(id)arg1;
- (void)didPressTableCellView:(id)arg1;
- (void)sidebarContentFilterDidCompleteFilterOperation:(id)arg1;
- (void)sidebarSearchFieldDidBecomeFirstResponder:(id)arg1;
- (BOOL)control:(id)arg1 textShouldEndEditing:(id)arg2;
- (void)sidebarSearchFieldViewSearchStringDidChange:(id)arg1;
- (void)wasInstalledBySidebarViewController:(id)arg1;
- (BOOL)outlineView:(id)arg1 shouldTypeSelectForEvent:(id)arg2 withCurrentSearchString:(id)arg3;
- (BOOL)outlineView:(id)arg1 keyDown:(id)arg2;
- (BOOL)outlineView:(id)arg1 shouldEditOnSingleClick:(id)arg2 inRow:(long long)arg3 tableColumn:(id)arg4;
- (BOOL)outlineView:(id)arg1 shouldEditOnDoubleClick:(id)arg2 inRow:(long long)arg3 tableColumn:(id)arg4;
- (void)outlineView:(id)arg1 didPressAndHoldToEditRowAtIndex:(long long)arg2;
- (BOOL)outlineView:(id)arg1 shouldSelectItem:(id)arg2;
- (id)outlineView:(id)arg1 menuForEvent:(id)arg2 inRow:(long long)arg3 tableColumn:(id)arg4;
- (BOOL)outlineView:(id)arg1 writeItems:(id)arg2 toPasteboard:(id)arg3;
- (void)outlineView:(id)arg1 draggingSession:(id)arg2 endedAtPoint:(struct CGPoint)arg3 operation:(unsigned long long)arg4;
- (id)outlineView:(id)arg1 namesOfPromisedFilesDroppedAtDestination:(id)arg2 forDraggedItems:(id)arg3;
- (BOOL)outlineView:(id)arg1 acceptDrop:(id)arg2 item:(id)arg3 childIndex:(long long)arg4;
- (unsigned long long)outlineView:(id)arg1 validateDrop:(id)arg2 proposedItem:(id)arg3 proposedChildIndex:(long long)arg4;
- (id)outlineView:(id)arg1 viewForTableColumn:(id)arg2 item:(id)arg3;
- (id)outlineView:(id)arg1 rowViewForItem:(id)arg2;
- (id)outlineView:(id)arg1 persistentObjectForItem:(id)arg2;
- (id)outlineView:(id)arg1 itemForPersistentObject:(id)arg2;
- (id)outlineView:(id)arg1 objectValueForTableColumn:(id)arg2 byItem:(id)arg3;
- (long long)outlineView:(id)arg1 numberOfChildrenOfItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 isItemExpandable:(id)arg2;
- (id)outlineView:(id)arg1 child:(long long)arg2 ofItem:(id)arg3;
- (void)sidebarWillClose:(id)arg1;
- (void)removedAllIcons:(id)arg1;
- (void)iconChanged:(id)arg1;
@property(readonly, nonatomic) NSArray *allFilteringControls;
@property(readonly, nonatomic) NSSearchField *searchField;
- (void)cancelDeselectAfterRowClicked;
- (void)deselectAfterRowClicked;
- (void)activateItem:(id)arg1;
- (void)rowClicked:(id)arg1;
- (void)dealloc;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

