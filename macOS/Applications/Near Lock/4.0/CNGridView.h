//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class CNSelectionFrameView, NSColor, NSMenu, NSMutableArray, NSMutableDictionary, NSNotificationCenter, NSString, NSTimer, NSTrackingArea;
@protocol CNGridViewDataSource, CNGridViewDelegate;

@interface CNGridView : NSView
{
    NSMutableDictionary *keyedVisibleItems;
    NSMutableDictionary *reuseableItems;
    NSMutableDictionary *selectedItems;
    NSMutableDictionary *selectedItemsBySelectionFrame;
    CNSelectionFrameView *selectionFrameView;
    NSNotificationCenter *nc;
    NSMutableArray *clickEvents;
    NSTrackingArea *gridViewTrackingArea;
    NSTimer *clickTimer;
    long long lastHoveredIndex;
    long long lastSelectedItemIndex;
    long long numberOfItems;
    struct CGPoint selectionFrameInitialPoint;
    BOOL isInitialCall;
    BOOL mouseHasDragged;
    BOOL abortSelection;
    double _contentInset;
    struct CGPoint _lastUpdatePoint;
    BOOL _scrollElasticity;
    BOOL _allowsSelection;
    BOOL _allowsMultipleSelection;
    BOOL _allowsMultipleSelectionWithDrag;
    BOOL _useSelectionRing;
    BOOL _useHover;
    BOOL _useCenterAlignment;
    id <CNGridViewDelegate> _delegate;
    id <CNGridViewDataSource> _dataSource;
    NSString *_gridViewTitle;
    NSColor *_backgroundColor;
    NSMenu *_itemContextMenu;
    NSView *_headerView;
    struct CGSize _itemSize;
}

@property(nonatomic) BOOL useCenterAlignment; // @synthesize useCenterAlignment=_useCenterAlignment;
@property(retain, nonatomic) NSView *headerView; // @synthesize headerView=_headerView;
@property(nonatomic) NSMenu *itemContextMenu; // @synthesize itemContextMenu=_itemContextMenu;
@property(nonatomic) BOOL useHover; // @synthesize useHover=_useHover;
@property(nonatomic) BOOL useSelectionRing; // @synthesize useSelectionRing=_useSelectionRing;
@property(nonatomic) BOOL allowsMultipleSelectionWithDrag; // @synthesize allowsMultipleSelectionWithDrag=_allowsMultipleSelectionWithDrag;
@property(nonatomic) BOOL allowsMultipleSelection; // @synthesize allowsMultipleSelection=_allowsMultipleSelection;
@property(nonatomic) BOOL allowsSelection; // @synthesize allowsSelection=_allowsSelection;
@property(nonatomic) struct CGSize itemSize; // @synthesize itemSize=_itemSize;
@property(nonatomic) BOOL scrollElasticity; // @synthesize scrollElasticity=_scrollElasticity;
@property(retain, nonatomic) NSColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(retain, nonatomic) NSString *gridViewTitle; // @synthesize gridViewTitle=_gridViewTitle;
@property(nonatomic) id <CNGridViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) id <CNGridViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)sectionIndexTitlesForGridView:(id)arg1;
- (id)gridView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (unsigned long long)numberOfSectionsInGridView:(id)arg1;
- (id)gridView:(id)arg1 itemAtIndex:(long long)arg2 inSection:(long long)arg3;
- (unsigned long long)gridView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)gridView:(id)arg1 didActivateContextMenuWithIndexes:(id)arg2 inSection:(unsigned long long)arg3;
- (void)gridView:(id)arg1 didDoubleClickItemAtIndex:(unsigned long long)arg2 inSection:(unsigned long long)arg3;
- (void)gridView:(id)arg1 didClickItemAtIndex:(unsigned long long)arg2 inSection:(unsigned long long)arg3;
- (void)gridViewDidDeselectAllItems:(id)arg1;
- (void)gridView:(id)arg1 willDeselectAllItems:(id)arg2;
- (void)gridView:(id)arg1 didDeselectItemAtIndex:(unsigned long long)arg2 inSection:(unsigned long long)arg3;
- (void)gridView:(id)arg1 willDeselectItemAtIndex:(unsigned long long)arg2 inSection:(unsigned long long)arg3;
- (void)gridView:(id)arg1 didSelectItemAtIndex:(unsigned long long)arg2 inSection:(unsigned long long)arg3;
- (void)gridView:(id)arg1 willSelectItemAtIndex:(unsigned long long)arg2 inSection:(unsigned long long)arg3;
- (void)gridView:(id)arg1 willUnhoverItemAtIndex:(unsigned long long)arg2 inSection:(unsigned long long)arg3;
- (void)gridView:(id)arg1 willHoverItemAtIndex:(unsigned long long)arg2 inSection:(unsigned long long)arg3;
- (void)keyDown:(id)arg1;
- (void)rightMouseDown:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (void)mouseExited:(id)arg1;
- (BOOL)acceptsFirstResponder;
- (BOOL)canBecomeKeyView;
- (void)updateTrackingAreas;
- (void)setFrame:(struct CGRect)arg1;
- (BOOL)isFlipped;
- (unsigned long long)numberOfVisibleItems;
- (void)selectItemsCoveredBySelectionFrame:(struct CGRect)arg1 usingModifierFlags:(unsigned long long)arg2;
- (unsigned long long)boundIndexForItemAtLocation:(struct CGPoint)arg1;
- (void)drawSelectionFrameForMousePointerAtLocation:(struct CGPoint)arg1;
- (void)handleDoubleClickForItemAtIndex:(unsigned long long)arg1;
- (void)handleSingleClickForItemAtIndex:(unsigned long long)arg1;
- (void)handleClicks:(id)arg1;
- (id)visibleIndexes;
- (id)selectedIndexes;
- (id)selectedItems;
- (void)deSelectItem:(id)arg1;
- (void)selectItem:(id)arg1;
- (void)deselectAllItems;
- (void)selectAllItems;
- (void)selectItemAtIndex:(unsigned long long)arg1 usingModifierFlags:(unsigned long long)arg2;
- (void)selectItemAtIndex:(unsigned long long)arg1;
- (void)unHoverItemAtIndex:(long long)arg1;
- (void)hoverItemAtIndex:(long long)arg1;
- (void)endUpdates;
- (void)beginUpdates;
- (void)removeItemsAtIndexes:(id)arg1 animated:(BOOL)arg2;
- (void)reloadItemsAtIndexes:(id)arg1 animated:(BOOL)arg2;
- (void)insertItemsAtIndexes:(id)arg1 animated:(BOOL)arg2;
- (void)insertItemAtIndex:(long long)arg1 animated:(BOOL)arg2;
- (void)reloadDataAnimated:(BOOL)arg1;
- (void)reloadData;
- (id)dequeueReusableItemWithIdentifier:(id)arg1;
- (struct CNItemPoint)locationForItemAtIndex:(unsigned long long)arg1;
- (unsigned long long)indexForItemAtLocation:(struct CGPoint)arg1;
- (struct CGRect)clippedRect;
- (unsigned long long)visibleRowsInGridView;
- (unsigned long long)allOverRowsInGridView;
- (unsigned long long)columnsInGridView;
- (struct CGRect)rectForItemAtIndex:(unsigned long long)arg1;
- (struct _NSRange)visibleItemRangeForVerticalScrolling;
- (struct _NSRange)visibleItemRangeForHorizontalScrolling;
- (struct _NSRange)visibleItemRange;
- (void)arrangeGridViewItemsAnimated:(BOOL)arg1;
- (id)indexesForVisibleItems;
- (void)didFinishUpdatingVisibleItems;
- (void)updateVisibleItems;
- (void)updateReuseableItems;
- (void)refreshGridViewAnimated:(BOOL)arg1 initialCall:(BOOL)arg2;
- (BOOL)shouldUpdateScrollViewItems;
- (void)updateVisibleRect;
- (void)_refreshInset;
- (void)setTransparentBackground;
- (void)setupDefaults;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

