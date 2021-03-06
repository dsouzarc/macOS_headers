//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IPXCollectionsGridViewController.h"

#import "IPXAssetCollectionMediaItemDelegate-Protocol.h"
#import "IPXBrowserSummaryDataSource-Protocol.h"
#import "IPXBrowserSummaryHelperDelegate-Protocol.h"
#import "IPXCollectionCellDelegate-Protocol.h"
#import "IPXCollectionListMediaItemDelegate-Protocol.h"
#import "IPXScrollableTestElement-Protocol.h"

@class IPXBrowserControllerSummaryHelper, MOMediaView, NSArray, NSDateInterval, NSDictionary, NSScrollView, NSString, UXViewController;
@protocol PXBrowserSelectionSnapshot, PXBrowserVisibleContentSnapshot;

__attribute__((visibility("hidden")))
@interface IPXAlbumsGridViewController : IPXCollectionsGridViewController <IPXBrowserSummaryDataSource, IPXBrowserSummaryHelperDelegate, IPXCollectionCellDelegate, IPXCollectionListMediaItemDelegate, IPXAssetCollectionMediaItemDelegate, IPXScrollableTestElement>
{
    BOOL _isSharedAlbums;
    BOOL _shouldBeginEditingTitleAfterTransitioningIn;
    UXViewController *_placeholderViewController;
    IPXBrowserControllerSummaryHelper *_summaryHelper;
}

+ (id)validatedCollectionForNavigationDestination:(id)arg1 library:(id)arg2;
- (void).cxx_destruct;
@property(nonatomic) BOOL shouldBeginEditingTitleAfterTransitioningIn; // @synthesize shouldBeginEditingTitleAfterTransitioningIn=_shouldBeginEditingTitleAfterTransitioningIn;
@property(readonly, nonatomic) BOOL isSharedAlbums; // @synthesize isSharedAlbums=_isSharedAlbums;
@property(readonly, nonatomic) IPXBrowserControllerSummaryHelper *summaryHelper; // @synthesize summaryHelper=_summaryHelper;
@property(readonly, nonatomic) NSScrollView *testElement_scrollView;
- (BOOL)validateMenuItem:(id)arg1;
- (void)paste:(id)arg1;
- (id)assetsFetchResultForAssetCollectionMediaItem:(id)arg1;
- (id)keyAssetForAssetCollectionMediaItem:(id)arg1;
- (id)collectionListMediaItem:(id)arg1 keyAssetRepresentationForSubCollectionAtIndex:(unsigned long long)arg2;
- (void)collectionCell:(id)arg1 didChangeName:(id)arg2;
@property(readonly, nonatomic) NSString *containerLocalizedCount;
@property(readonly, nonatomic) BOOL containerTitleIsEditable;
@property(retain, nonatomic) NSString *containerTitle;
- (BOOL)wantsPlaceholderView;
- (id)placeholderViewController;
- (void)viewDidAppear;
- (void)viewDidLoad;
- (void)enterCaptionEditingModeforItemAtIndexPath:(id)arg1;
- (id)zoomLevelIdentifier;
- (void)initiateRenameForCell:(id)arg1;
- (id)rightClickMenuForCollections:(id)arg1;
- (BOOL)canRearrangeContent;
- (unsigned long long)selectionContainerContext;
- (void)navigateToCollection:(id)arg1;
- (void)didUpdateCell:(id)arg1 withMediaItem:(id)arg2;
- (void)willUpdateCell:(id)arg1 withMediaItem:(id)arg2;
- (Class)assetViewCellClass;
- (id)mediaItemForCollection:(id)arg1;
- (void)reflectContentChange;
- (id)initWithCollectionList:(id)arg1;
- (void)requestViewControllersForNavigationDestination:(id)arg1 completion:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, nonatomic) NSDateInterval *containerDateInterval;
@property(readonly, nonatomic) BOOL containerLocalizedCountWantsBoldText;
@property(readonly, nonatomic) NSScrollView *contentScrollView;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSString *dragSourceIdentifier;
@property(readonly, nonatomic) NSArray *extraBarButtonItems;
@property(readonly, nonatomic) BOOL filteringIsActive;
@property(readonly, nonatomic) NSString *filteringLocalizedCaption;
@property(readonly, nonatomic) NSString *filteringLocalizedTitle;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) MOMediaView *mediaView;
@property(readonly, nonatomic) id <PXBrowserSelectionSnapshot> selectionSnapshot;
@property(readonly) Class superclass;
@property(readonly, nonatomic) BOOL testElement_isEmpty;
@property(readonly, nonatomic) BOOL testElement_isReady;
@property(readonly, nonatomic) NSDictionary *testElement_scrollingExtraInformation;
@property(readonly, nonatomic) NSArray *topTrailingBarButtonItems;
@property(readonly, nonatomic) id <PXBrowserVisibleContentSnapshot> visibleContentSnapshot;
@property(readonly, nonatomic) BOOL wantsImportedOnDates;
@property(readonly, nonatomic) BOOL wantsTopSectionHeaderInSummaryBar;

@end

