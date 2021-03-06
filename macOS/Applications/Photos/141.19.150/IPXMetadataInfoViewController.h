//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IPXViewController.h"

#import "IPXMetadataEditorTextFieldViewControllerDelegate-Protocol.h"
#import "PFActionNotificationsReceiver-Protocol.h"
#import "PHPhotoLibraryChangeObserver-Protocol.h"

@class IPXAlbumInfoDebugViewController, IPXAlbumInfoSummaryViewController, IPXBurstInfoSummaryViewController, IPXImageInfoDebugViewController, IPXInfoPanelPeopleViewController, IPXInfoSummaryViewController, IPXLibraryInfoSummaryViewController, IPXMetadataEditorCaptionViewController, IPXMetadataEditorDateViewController, IPXMetadataEditorFilenameViewController, IPXMetadataEditorTextFieldViewController, IPXMetadataEditorTitleViewController, IPXMetadataInfoPopoverController, IPXMetadataKeywordTokensController, IPXMetadataPlacesViewController, IPXMultiSelectInfoSummaryViewController, IPXSelectionContainer, IPXVersionsInfoSummaryViewController, NSArray, NSMutableDictionary, NSOperationQueue, NSStackView, NSString, NSView, PFAction, PHPhotoLibrary;
@protocol IPXSelectionSummaryEditSupporting;

__attribute__((visibility("hidden")))
@interface IPXMetadataInfoViewController : IPXViewController <IPXMetadataEditorTextFieldViewControllerDelegate, PHPhotoLibraryChangeObserver, PFActionNotificationsReceiver>
{
    IPXLibraryInfoSummaryViewController *_libraryInfoViewController;
    IPXAlbumInfoSummaryViewController *_albumInfoViewController;
    IPXAlbumInfoDebugViewController *_albumInfoDebugViewController;
    IPXImageInfoDebugViewController *_imageInfoDebugViewController;
    IPXInfoSummaryViewController *_summaryViewController;
    IPXMultiSelectInfoSummaryViewController *_multiSelectViewController;
    IPXBurstInfoSummaryViewController *_burstViewController;
    IPXMetadataEditorTitleViewController *_titleViewController;
    IPXMetadataEditorFilenameViewController *_filenameViewController;
    IPXMetadataEditorDateViewController *_dateViewController;
    IPXVersionsInfoSummaryViewController *_versionsInfoSummaryViewController;
    IPXMetadataEditorCaptionViewController *_captionViewController;
    IPXInfoPanelPeopleViewController *_peopleViewController;
    IPXMetadataKeywordTokensController *_keywordsViewController;
    IPXMetadataEditorTextFieldViewController *_memoryTitleViewController;
    IPXMetadataEditorTextFieldViewController *_memorySubtitleViewController;
    IPXMetadataPlacesViewController *_placesViewController;
    NSStackView *_stackView;
    NSView *_placesEditorView;
    PFAction *_currentAction;
    NSMutableDictionary *_delayedDisplayTimers;
    BOOL _requestingSummary;
    BOOL _hideFaces;
    int _mode;
    IPXMetadataInfoPopoverController *_popoverController;
    NSView *_initialFirstResponder;
    IPXSelectionContainer *_selection;
    PHPhotoLibrary *_photoLibrary;
    id <IPXSelectionSummaryEditSupporting> _selectionSummary;
    NSOperationQueue *_deferredDataQueue;
}

+ (id)selectionSummaryForSelection:(id)arg1 inMode:(int)arg2;
+ (BOOL)isAnyItemReadOnly:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSOperationQueue *deferredDataQueue; // @synthesize deferredDataQueue=_deferredDataQueue;
@property(retain, nonatomic) id <IPXSelectionSummaryEditSupporting> selectionSummary; // @synthesize selectionSummary=_selectionSummary;
@property(nonatomic) BOOL hideFaces; // @synthesize hideFaces=_hideFaces;
@property(nonatomic, getter=isRequestingSummary) BOOL requestingSummary; // @synthesize requestingSummary=_requestingSummary;
@property(readonly, nonatomic) PHPhotoLibrary *photoLibrary; // @synthesize photoLibrary=_photoLibrary;
@property(readonly, nonatomic) int mode; // @synthesize mode=_mode;
@property(retain, nonatomic) IPXSelectionContainer *selection; // @synthesize selection=_selection;
@property(nonatomic) __weak NSView *initialFirstResponder; // @synthesize initialFirstResponder=_initialFirstResponder;
@property(nonatomic) __weak IPXMetadataInfoPopoverController *popoverController; // @synthesize popoverController=_popoverController;
- (void)_delayedLoadingTimeout:(id)arg1;
- (void)setDisplayString:(id)arg1 forControl:(id)arg2;
- (void)setLoadingPlaceholderString:(id)arg1 forControl:(id)arg2;
- (void)killAllDelayedDisplayTimers;
- (void)_killDelayedDisplayTimerForControl:(id)arg1;
- (void)_addDelayedDisplayTimer:(id)arg1 forControl:(id)arg2;
- (BOOL)_isRunningDelayedDisplayTimerForControl:(id)arg1;
- (id)_delayedDisplayTimerForControl:(id)arg1;
- (void)metadataEditorTextFieldViewController:(id)arg1 didChangeStringValue:(id)arg2;
- (id)metadataEditorTextFieldViewController:(id)arg1 stringValueForSelectedVersions:(id)arg2;
- (id)_memoryForSelection:(id)arg1;
- (void)photoLibraryDidChange:(id)arg1;
- (void)action:(id)arg1 statusChangedFrom:(int)arg2 to:(int)arg3;
- (void)a_favoriteItem:(id)arg1;
- (void)_executeAction:(id)arg1;
- (void)expandView:(id)arg1 animate:(BOOL)arg2;
- (void)collapseView:(id)arg1 animate:(BOOL)arg2;
- (void)_setCollapsedState:(BOOL)arg1 forView:(id)arg2 animate:(BOOL)arg3;
- (void)commitNewDescription:(id)arg1;
- (void)commitNewTitle:(id)arg1;
- (void)saveChanges;
- (void)_performDeferredWorkForOperation:(id)arg1;
- (void)addSummarizerPostflightOperation:(id)arg1;
- (void)didChangeSelection:(id)arg1;
- (void)childControllerContentHasChanged:(id)arg1;
- (void)modeHasChanged:(int)arg1;
- (void)_addressResponderChainForStack;
- (void)_handleHidingOrShowingSeparators;
- (void)_rebuildStackOfViewsForMode:(int)arg1;
- (id)_viewControllersForMode:(int)arg1;
- (id)_viewsForMode:(int)arg1;
- (id)_arrayOfIdentifiersForMode:(int)arg1;
- (id)_subViewControllerIdentifiersForAllControllers;
- (id)_subViewControllerIdentifiersForSingleImageMode;
- (id)_subViewControllerIdentifiersForBurstMode;
- (id)_subViewControllerIdentifiersForMultiSelectionMode;
- (id)_subViewControllerIdentifiersForMemoryInfoMode;
- (id)_subViewControllerIdentifiersForAlbumInfoMode;
- (id)_subViewControllerIdentifiersForLibraryInfoMode;
- (id)_subViewControllerIdentifiersWithStartingIdentifiers:(id)arg1;
- (id)_viewForIdentifier:(id)arg1;
- (id)_viewControllerForIdentifier:(id)arg1;
- (id)placesViewController;
- (id)memorySubtitleViewController;
- (id)memoryTitleViewController;
- (id)versionsInfoSummaryViewController;
- (id)keywordsViewController;
- (id)peopleViewController;
- (id)captionViewController;
- (id)dateViewController;
- (id)filenameViewController;
- (id)descriptionViewController;
- (id)summaryViewController;
- (id)imageInfoDebugViewController;
- (id)burstViewController;
- (id)multiSelectViewController;
- (id)albumInfoDebugViewController;
- (id)albumInfoViewController;
- (id)libraryInfoViewController;
@property(readonly, nonatomic) NSArray *currentViewControllers;
- (void)viewWillDisappear;
- (void)viewDidAppear;
- (void)dealloc;
- (void)loadView;
- (id)initWithPhotoLibrary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

