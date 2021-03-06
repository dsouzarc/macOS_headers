//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

#import "NSOpenSavePanelDelegate.h"

@class NSArrayController, NSButton, NSMutableArray, NSPopUpButton, NSString, NSTableView, NSTextField, SPDatabaseDocument, SPSplitView, SPTextView;

__attribute__((visibility("hidden")))
@interface SPQueryFavoriteManager : NSWindowController <NSOpenSavePanelDelegate>
{
    SPDatabaseDocument *tableDocumentInstance;
    NSPopUpButton *encodingPopUp;
    NSTableView *favoritesTableView;
    NSTextField *favoriteNameTextField;
    NSTextField *favoriteTabTriggerTextField;
    SPTextView *favoriteQueryTextView;
    SPSplitView *favoritesSplitView;
    NSButton *removeButton;
    NSArrayController *favoritesArrayController;
    NSMutableArray *favorites;
    BOOL isTableCellEditing;
}

- (void)dealloc;
- (void)_initWithNoSelection;
- (void)savePanelDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(id)arg3;
- (void)importPanelDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(id)arg3;
- (void)sheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(id)arg3;
- (BOOL)tableView:(id)arg1 acceptDrop:(id)arg2 row:(long long)arg3 dropOperation:(unsigned long long)arg4;
- (unsigned long long)tableView:(id)arg1 validateDrop:(id)arg2 proposedRow:(long long)arg3 proposedDropOperation:(unsigned long long)arg4;
- (BOOL)tableView:(id)arg1 writeRowsWithIndexes:(id)arg2 toPasteboard:(id)arg3;
- (BOOL)validateMenuItem:(id)arg1;
- (void)controlTextDidChange:(id)arg1;
- (void)controlTextDidEndEditing:(id)arg1;
- (BOOL)tableView:(id)arg1 isGroupRow:(long long)arg2;
- (void)tableView:(id)arg1 didClickTableColumn:(id)arg2;
- (BOOL)tableView:(id)arg1 shouldEditTableColumn:(id)arg2 row:(long long)arg3;
- (double)tableView:(id)arg1 heightOfRow:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (BOOL)tableView:(id)arg1 shouldSelectRow:(long long)arg2;
- (void)tableView:(id)arg1 setObjectValue:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)closeQueryManagerSheet:(id)arg1;
- (void)insertPlaceholder:(id)arg1;
- (void)importFavoritesByReplacing:(id)arg1;
- (void)importFavoritesByAdding:(id)arg1;
- (void)exportFavorites:(id)arg1;
- (void)saveFavoriteToFile:(id)arg1;
- (void)removeAllQueryFavorites:(id)arg1;
- (void)removeQueryFavorite:(id)arg1;
- (void)duplicateQueryFavorite:(id)arg1;
- (void)addQueryFavorite:(id)arg1;
- (id)customQueryInstance;
- (void)awakeFromNib;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

