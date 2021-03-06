//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <FinderKit/FI_TViewController.h>

#import "ISpawnOriginDelegateProtocol.h"
#import "NSMenuDelegate.h"
#import "NSOutlineViewDataSource.h"
#import "QLSeamlessCloserDelegate.h"
#import "TMarkTornDown.h"
#import "TSidebarViewDelegate.h"

@class FI_TBrowserContainerController, FI_TContainerLayoutManager, FI_TSidebarView, NSString;

__attribute__((visibility("hidden")))
@interface FI_TSidebarViewController : FI_TViewController <NSOutlineViewDataSource, TSidebarViewDelegate, NSMenuDelegate, ISpawnOriginDelegateProtocol, QLSeamlessCloserDelegate, TMarkTornDown>
{
    FI_TSidebarView *_sidebarView;
    struct TNSWeakPtr<FI_TBrowserContainerController, void> _weakContainerController;
    vector_5db024cf _localDataSourceCopyZones;
    map_25537475 _localDataSourceCopy;
    _Bool _observingShared;
    _Bool _repopulating;
    _Bool _suppressSelectionUpdate;
    _Bool _selectionChangingProgramatically;
    _Bool _suspendRepopulation;
    _Bool _suspendedRepopulationPending;
    _Bool _restoringExpandedState;
    _Bool _drawForChasingArrowAnimationFrame;
    _Bool _animationsSuspended;
    long long _runningAnimationFrame;
    int _dragClickStartZone;
    struct TFENode _privateDragNode;
    _Bool _privateDrag;
    struct CGPoint _dragStartGlobalPoint;
    double _dragStartTime;
    struct TFENode _nodeToIncludeInDrop;
    _Bool _isCurrentDragARemove;
    double _optimalWidthCache;
    function_b1fce659 _sidebarUpdateCallback;
    struct TFENodeVector _animatedCells;
    struct vector<TNSRef<NSWindow, void>, std::__1::allocator<TNSRef<NSWindow, void>>> _animatedCellViews;
    long long _rowSizeStyleForOptimalWidthCache;
    unsigned long long _mediaBrowserShownTypes;
    struct TFENode _nodeBeingClicked;
    struct TNSRef<NSMutableIndexSet, void> _hiddenZones;
    struct vector<TNotificationCenterObserver, std::__1::allocator<TNotificationCenterObserver>> _notificationCenterObservers;
    struct TNSRef<FI_TICloudProgressObserver, void> _iCloudObserver;
    struct TKeyValueBinder _iCloudStatusBinder;
    double _iCloudCompletionPercentage;
    struct TNSRef<FI_TContainerLayoutManager, void> _containerLayoutManager;
    struct TKeyValueObserver _contentInsetsDidChangeObserver;
    _Bool _recentlyOnActiveSpaceCache;
    double _recentlyOnActiveSpaceCacheLastCheck;
    _Bool _isTornDown;
}

+ (id)iconForCategory:(int)arg1 optionalSize:(struct CGSize)arg2;
+ (void)removeFromAnimationTimerQueue:(id)arg1;
+ (void)addToAnimationTimerQueue:(id)arg1;
+ (double)defaultSidebarWidth;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(getter=isTornDown) _Bool tornDown; // @synthesize tornDown=_isTornDown;
@property(nonatomic) double iCloudCompletionPercentage; // @synthesize iCloudCompletionPercentage=_iCloudCompletionPercentage;
@property(nonatomic) _Bool restoringExpandedState; // @synthesize restoringExpandedState=_restoringExpandedState;
- (void)preferencesUpdated:(id)arg1;
- (void)handleItemsChanged:(id)arg1;
- (void)handleItemsAddedRemovedReordered:(id)arg1;
- (void)outlineViewSelectionDidChange:(id)arg1;
- (void)outlineViewItemDidCollapse:(id)arg1;
- (void)outlineViewItemDidExpand:(id)arg1;
- (void)outlineViewItemWillExpand:(id)arg1;
- (BOOL)outlineView:(id)arg1 shouldEditTableColumn:(id)arg2 item:(id)arg3;
- (BOOL)outlineView:(id)arg1 shouldSelectItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 isGroupItem:(id)arg2;
- (_Bool)outlineViewShouldSlideBackAfterDragFailed:(id)arg1;
- (void)sidebarView:(id)arg1 draggingEnded:(id)arg2;
- (void)sidebarView:(id)arg1 draggingExited:(id)arg2;
- (unsigned long long)sidebarView:(id)arg1 draggingEntered:(id)arg2;
- (void)outlineView:(id)arg1 draggingEndedAt:(struct CGPoint)arg2 operation:(unsigned long long)arg3;
- (void)outlineView:(id)arg1 draggingSession:(id)arg2 willBeginAtPoint:(struct CGPoint)arg3 forItems:(id)arg4;
- (void)outlineView:(id)arg1 draggedImage:(id)arg2 movedTo:(struct CGPoint)arg3;
- (void)updatePasteboardToMatchDragStateIfNeeded;
- (void)updateCursorToMatchDragPoofState;
- (_Bool)dragShouldRemove;
- (_Bool)draggingLongEnough;
- (_Bool)dragPastSidebarEdgeThresholdDistance:(struct CGPoint)arg1;
- (_Bool)dragPastRemovalThresholdDistance:(struct CGPoint)arg1;
- (_Bool)isDragOverDock;
- (_Bool)isDragOverMenuBar;
- (_Bool)isDragInsideView;
- (BOOL)outlineView:(id)arg1 acceptDrop:(id)arg2 item:(id)arg3 childIndex:(long long)arg4;
- (_Bool)acceptHeaderDrop:(id)arg1 childIndex:(long long)arg2;
- (unsigned long long)outlineView:(id)arg1 validateDrop:(id)arg2 proposedItem:(id)arg3 proposedChildIndex:(long long)arg4;
- (struct TFENode)draggedNode;
- (_Bool)isSingleTagOnPasteboard:(id)arg1;
- (struct TString)tagNameFromURL:(id)arg1;
- (id)tagURLForSingleTagOnPasteboard:(id)arg1;
- (unsigned long long)validateNoZoneDrop;
- (BOOL)outlineView:(id)arg1 writeItems:(id)arg2 toPasteboard:(id)arg3;
- (void)updatePasteboardToMatchDragState:(id)arg1 dropNode:(const struct TFENode *)arg2 dragRemove:(_Bool)arg3;
- (_Bool)itemIsZoneHeader:(id)arg1;
- (id)makeCellViewForDrag:(const struct TFENode *)arg1;
- (id)outlineView:(id)arg1 viewForTableColumn:(id)arg2 item:(id)arg3;
- (void)finishUpdatingCell:(id)arg1 forAction:(int)arg2;
- (int)actionForNode:(const struct TFENode *)arg1 dimmed:(_Bool)arg2;
- (id)outlineView:(id)arg1 objectValueForTableColumn:(id)arg2 byItem:(id)arg3;
- (BOOL)outlineView:(id)arg1 isItemExpandable:(id)arg2;
- (id)outlineView:(id)arg1 child:(long long)arg2 ofItem:(id)arg3;
- (long long)outlineView:(id)arg1 numberOfChildrenOfItem:(id)arg2;
- (struct CGRect)cellFrameForNode:(const struct TFENode *)arg1;
- (void)repopulateReadZoneOrderFromPrefs:(_Bool)arg1 zone:(int)arg2;
- (void)repopulateReadZoneOrderFromPrefs:(_Bool)arg1;
- (void)unloadContentsForZone:(int)arg1;
- (void)unloadContents;
- (int)zoneIndexInDataSourceCopy:(int)arg1;
- (int)zoneIndexInController:(int)arg1;
- (void)loadContentsReadZoneOrderFromPrefs:(_Bool)arg1;
- (void)reloadContentsReadZoneOrderFromPrefs:(_Bool)arg1 zone:(int)arg2;
- (void)updateZoneListToMatchPrefs:(_Bool)arg1;
- (void)reloadZone:(int)arg1;
- (struct TFENodeVector)locationsNodes;
- (void)reloadOneZone:(const struct TFENodeVector *)arg1 zoneKind:(int)arg2;
- (void)updateZoneExpandedState;
- (_Bool)globalDisclosedStateForZone:(int)arg1;
- (void)saveGlobalDisclosedState:(int)arg1;
- (int)preferenceKeyForZone:(int)arg1;
- (void)expandCollapseZoneKind:(int)arg1 expand:(_Bool)arg2;
- (void)expandCollapseZone:(id)arg1 expand:(_Bool)arg2;
- (_Bool)isZoneExpanded:(int)arg1;
- (int)zoneForItem:(id)arg1;
- (id)zoneItemForKind:(int)arg1;
- (const struct TFENodeVector *)zoneList:(int)arg1;
- (struct TFENode)nodeForItemAt:(long long)arg1 inZone:(int)arg2;
- (struct TFENode)nodeForItem:(id)arg1;
- (void)sharedSectionVisibilityChanged;
- (id)buttonImage:(id)arg1 forActionKind:(int)arg2 mouseState:(int)arg3 node:(const struct TFENode *)arg4;
- (id)indeterminateProgressImage;
- (void)setProgressPercentage:(double)arg1 ifApplies:(const function_88e6fc60 *)arg2 initial:(_Bool)arg3;
- (void)finishUpdatingCellAndAddProgressIfNeeded:(id)arg1 forAction:(int)arg2 progress:(float)arg3;
- (_Bool)isZoneHidden:(int)arg1;
@property(nonatomic) struct TFENode selectedNode;
- (void)setHidesSharedItems:(_Bool)arg1;
- (_Bool)hidesSharedItems;
- (void)setMediaBrowserShownTypes:(unsigned long long)arg1;
- (void)axRowHit:(long long)arg1;
- (void)rowHit:(long long)arg1;
- (_Bool)handleQuickLookWithEvent:(id)arg1;
- (void)removeNode:(struct TFENode)arg1;
- (id)cellForNode:(const struct TFENode *)arg1;
- (long long)rowForNode:(const struct TFENode *)arg1 inZone:(int)arg2;
- (long long)rowForNode:(const struct TFENode *)arg1;
- (long long)rowIndexForItem:(id)arg1 inZone:(int)arg2 includeProxyNodeMatch:(_Bool)arg3;
- (long long)rowIndexForNode:(const struct TFENode *)arg1 inZone:(int)arg2;
- (id)cellAtRow:(long long)arg1;
- (void)setSidebarUpdateCallback:(function_b1fce659)arg1;
- (void)invalidateOptimalWidthCache;
- (struct CGSize)idealContentSize;
@property(readonly) double optimalWidth;
- (double)optimalWidthForZone:(int)arg1;
- (double)optionalScrollbarWidth;
- (double)optimalWidthNoScrollbar;
@property(readonly) double optimalHeight;
- (id)seamlessCloserTransitionImageForPreviewItem:(id)arg1 contentRect:(struct CGRect *)arg2;
- (struct CGRect)seamlessCloserSourceFrameOnScreenForPreviewItem:(id)arg1;
- (id)window;
- (id)zoomImageForNode:(const struct TFENode *)arg1 contentRect:(struct CGRect *)arg2;
- (struct CGRect)globalZoomRectForNode:(const struct TFENode *)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (_Bool)privateDrag;
- (struct TFENode)sidebarNode:(const struct TFENode *)arg1 inZone:(int)arg2;
- (_Bool)canTarget:(id)arg1;
- (_Bool)isDimmed:(id)arg1;
- (_Bool)quicklyCheckIfNode:(const struct TFENode *)arg1 isDimmed:(_Bool *)arg2;
@property(readonly) _Bool isSnapshotImageBrowser;
@property(readonly) _Bool isBackupBrowser;
- (struct TFENode)nodeForClick;
- (void)startOrStopAnimations;
- (map_25537475 *)localDataSourceCopy;
- (vector_5db024cf *)localZones;
- (void)updateAnimationStateForNode:(const struct TFENode *)arg1 startOnly:(_Bool)arg2;
- (void)startAnimating:(const struct TFENode *)arg1;
- (void)nextAnimationFrame;
- (void)runAnimationFrameDetails;
- (_Bool)wasRecentlyOnActiveSpace;
- (void)nextAnimationFrameForCell:(id)arg1;
- (_Bool)isSidebarCollapsed;
- (void)stopAllAnimations;
- (void)stopAnimating:(const struct TFENode *)arg1;
- (void)hideAnimationOverlayWindowForNode:(const struct TFENode *)arg1;
- (void)removeOverlayWindowAtIndex:(unsigned long long)arg1;
- (_Bool)shouldAnimateOverlay;
- (_Bool)nodeShouldAnimate:(const struct TFENode *)arg1;
@property(retain, nonatomic) FI_TContainerLayoutManager *containerLayoutManager; // @dynamic containerLayoutManager;
- (void)setContainerController:(id)arg1;
@property(readonly, nonatomic) __weak FI_TBrowserContainerController *containerController; // @dynamic containerController;
- (void)updateSubviewContentInsets:(struct NSEdgeInsets)arg1;
@property(readonly) struct TFENode containerSidebarTarget;
- (void)updateSelectionForCurrentTarget;
- (void)updateSelectionForTarget:(const struct TFENode *)arg1;
- (void)aboutToTearDown;
- (id)nibName;
- (void)removedFromWindow;
- (void)addedToWindow;
@property(readonly) double minimumSidebarWidth;
- (void)viewLoaded;
- (void)initialSidebarPopulation;
- (_Bool)isSidebarCachingBrowser;
@property(readonly) FI_TSidebarView *sidebar;
- (void)dealloc;
- (id)init:(id)arg1 frame:(struct CGRect)arg2 containerLayoutManager:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

