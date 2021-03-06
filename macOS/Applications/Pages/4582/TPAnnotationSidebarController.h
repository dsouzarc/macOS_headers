//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import "NSTableViewDataSource-Protocol.h"
#import "NSTableViewDelegate-Protocol.h"
#import "TSAAnnotationControllerDataObserver-Protocol.h"
#import "TSDMacChangeTrackingViewDelegate-Protocol.h"
#import "TSDMacCommentThreadViewDelegate-Protocol.h"
#import "TSDMacHighlightViewDelegate-Protocol.h"

@class NSArray, NSCache, NSScrollView, NSString, NSTableView, NSView, TPAnnotationSidebarHeader, TPInteractiveCanvasController, TSAActivityLineDecorator, TSAAnnotationController, TSDMacChangeTrackingView, TSDMacCommentThreadView, TSDMacHighlightView;

@interface TPAnnotationSidebarController : NSViewController <TSDMacChangeTrackingViewDelegate, TSDMacCommentThreadViewDelegate, TSDMacHighlightViewDelegate, NSTableViewDelegate, NSTableViewDataSource, TSAAnnotationControllerDataObserver>
{
    BOOL _showChanges;
    BOOL _scrollingToRow;
    BOOL _viewHasAppeared;
    long long _groupType;
    TSAAnnotationController *_annotationController;
    TPInteractiveCanvasController *_icc;
    NSArray *_data;
    NSArray *_groups;
    TSAActivityLineDecorator *_activityLineDecorator;
    TSDMacCommentThreadView *_prototypeCommentThreadRowView;
    TSDMacChangeTrackingView *_prototypeChangeTrackingRowView;
    TSDMacHighlightView *_prototypeHighlightRowView;
    NSView *_prototypeGroupHeaderView;
    id _displayedAnnotationUUIDObserverToken;
    id _displayedAnnotationPinnedObserverToken;
    id _hoveredAnnotationUUIDObserverToken;
    id _commentTextSizeObserverToken;
    id _sharingStatusObserverToken;
    NSString *_hoveredRowId;
    NSString *_selectedRowId;
    NSString *_editingRowId;
    unsigned long long _activityLineRow;
    unsigned long long _hoveredRow;
    unsigned long long _selectedRow;
    NSCache *_rowHeightCache;
    TSDMacCommentThreadView *_selectedThreadRowView;
    struct CGPoint _currentMousePosition;
}

+ (id)tableBackgroundColor;
@property(nonatomic) BOOL viewHasAppeared; // @synthesize viewHasAppeared=_viewHasAppeared;
@property(retain, nonatomic) TSDMacCommentThreadView *selectedThreadRowView; // @synthesize selectedThreadRowView=_selectedThreadRowView;
@property(nonatomic) BOOL scrollingToRow; // @synthesize scrollingToRow=_scrollingToRow;
@property(retain, nonatomic) NSCache *rowHeightCache; // @synthesize rowHeightCache=_rowHeightCache;
@property(nonatomic) unsigned long long selectedRow; // @synthesize selectedRow=_selectedRow;
@property(nonatomic) unsigned long long hoveredRow; // @synthesize hoveredRow=_hoveredRow;
@property(nonatomic) unsigned long long activityLineRow; // @synthesize activityLineRow=_activityLineRow;
@property(copy, nonatomic) NSString *editingRowId; // @synthesize editingRowId=_editingRowId;
@property(copy, nonatomic) NSString *selectedRowId; // @synthesize selectedRowId=_selectedRowId;
@property(copy, nonatomic) NSString *hoveredRowId; // @synthesize hoveredRowId=_hoveredRowId;
@property(retain, nonatomic) id sharingStatusObserverToken; // @synthesize sharingStatusObserverToken=_sharingStatusObserverToken;
@property(retain, nonatomic) id commentTextSizeObserverToken; // @synthesize commentTextSizeObserverToken=_commentTextSizeObserverToken;
@property(retain, nonatomic) id hoveredAnnotationUUIDObserverToken; // @synthesize hoveredAnnotationUUIDObserverToken=_hoveredAnnotationUUIDObserverToken;
@property(retain, nonatomic) id displayedAnnotationPinnedObserverToken; // @synthesize displayedAnnotationPinnedObserverToken=_displayedAnnotationPinnedObserverToken;
@property(retain, nonatomic) id displayedAnnotationUUIDObserverToken; // @synthesize displayedAnnotationUUIDObserverToken=_displayedAnnotationUUIDObserverToken;
@property(retain, nonatomic) NSView *prototypeGroupHeaderView; // @synthesize prototypeGroupHeaderView=_prototypeGroupHeaderView;
@property(retain, nonatomic) TSDMacHighlightView *prototypeHighlightRowView; // @synthesize prototypeHighlightRowView=_prototypeHighlightRowView;
@property(retain, nonatomic) TSDMacChangeTrackingView *prototypeChangeTrackingRowView; // @synthesize prototypeChangeTrackingRowView=_prototypeChangeTrackingRowView;
@property(retain, nonatomic) TSDMacCommentThreadView *prototypeCommentThreadRowView; // @synthesize prototypeCommentThreadRowView=_prototypeCommentThreadRowView;
@property(nonatomic) struct CGPoint currentMousePosition; // @synthesize currentMousePosition=_currentMousePosition;
@property(retain, nonatomic) TSAActivityLineDecorator *activityLineDecorator; // @synthesize activityLineDecorator=_activityLineDecorator;
@property(retain, nonatomic) NSArray *groups; // @synthesize groups=_groups;
@property(retain, nonatomic) NSArray *data; // @synthesize data=_data;
@property(nonatomic) __weak TPInteractiveCanvasController *icc; // @synthesize icc=_icc;
@property(retain, nonatomic) TSAAnnotationController *annotationController; // @synthesize annotationController=_annotationController;
@property(nonatomic) long long groupType; // @synthesize groupType=_groupType;
@property(nonatomic) BOOL showChanges; // @synthesize showChanges=_showChanges;
- (void).cxx_destruct;
- (void)trackHoveredAnnotation;
- (void)trackDisplayedAnnotation;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (double)offsetForBottomOfHeader;
- (void)scrollEditingRowToVisible;
- (void)scrollToMatchCanvas;
- (unsigned long long)lastRowOfGroupForPage:(unsigned long long)arg1;
- (unsigned long long)firstRowOfGroupForPage:(unsigned long long)arg1 foundExactMatch:(char *)arg2;
- (void)contentViewBoundsChanged:(id)arg1;
- (BOOL)mouseIsInSidebar;
- (void)mouseExited:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)trackMouseAtLocation:(struct CGPoint)arg1 animated:(BOOL)arg2;
- (void)removeHoverHighlightForRow:(unsigned long long)arg1;
- (void)showHoverHighlightForRow:(unsigned long long)arg1;
- (void)removeSelectionForRow:(unsigned long long)arg1 shouldEndEditing:(BOOL)arg2;
- (void)showSelectionForRow:(unsigned long long)arg1;
- (unsigned long long)rowNumberForAnnotationWithId:(id)arg1;
- (void)updateActivityLine;
- (void)hideActivityLineForRow:(unsigned long long)arg1;
- (void)showActivityLineForRow:(unsigned long long)arg1;
- (void)viewDidDisappear;
- (void)viewDidAppear;
- (void)viewWillAppear;
- (void)stopObserving;
- (void)startObserving;
- (void)clearPrototypeRows;
- (void)reloadData;
- (BOOL)p_isChangeTrackingRow:(unsigned long long)arg1;
- (BOOL)p_isCommentRow:(unsigned long long)arg1;
- (BOOL)p_isHighlightRow:(unsigned long long)arg1;
- (BOOL)p_isGroupRow:(unsigned long long)arg1;
- (void)annotationControllerInvalidatedAnnotationVisibleDates:(id)arg1;
- (void)annotationController:(id)arg1 loadedAnnotations:(id)arg2;
- (void)annotationControllerInvalidatedAuthors:(id)arg1;
- (void)annotationController:(id)arg1 didSetAuthorFilterTo:(id)arg2;
- (BOOL)tableView:(id)arg1 shouldSelectRow:(long long)arg2;
- (BOOL)tableView:(id)arg1 isGroupRow:(long long)arg2;
- (void)tableView:(id)arg1 didAddRowView:(id)arg2 forRow:(long long)arg3;
- (id)tableView:(id)arg1 rowViewForRow:(long long)arg2;
- (double)tableView:(id)arg1 heightOfRow:(long long)arg2;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)highlightViewDelete:(id)arg1;
- (void)highlightViewConvertToComment:(id)arg1;
- (void)highlightViewPreviousAnnotation:(id)arg1;
- (void)highlightViewNextAnnotation:(id)arg1;
- (void)highlightView:(id)arg1 didUpdateHeight:(double)arg2;
- (void)threadView:(id)arg1 didUpdateHeight:(double)arg2;
- (void)changeTrackingViewRejectChangeDetail:(id)arg1;
- (void)changeTrackingViewAcceptChangeDetail:(id)arg1;
- (void)changeTrackingViewPreviousAnnotation:(id)arg1;
- (void)changeTrackingViewNextAnnotation:(id)arg1;
- (void)changeTrackingView:(id)arg1 didUpdateHeight:(double)arg2;
- (void)viewDidLoad;
- (double)proposedCellWidth;
@property(readonly, nonatomic) NSScrollView *enclosingScrollView;
@property(readonly, nonatomic) NSTableView *tableView;
@property(readonly, nonatomic) TPAnnotationSidebarHeader *tableHeaderView;
- (void)dealloc;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

