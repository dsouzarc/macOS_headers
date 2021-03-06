//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <MapKit/MKModuleViewControllerProtocol-Protocol.h>
#import <MapKit/MKPlaceAttributionCellDelegate-Protocol.h>
#import <MapKit/MKPlacePhotosViewDelegate-Protocol.h>
#import <MapKit/UIScrollViewDelegate-Protocol.h>
#import <MapKit/_MKInfoCardChildViewControllerAnalyticsDelegate-Protocol.h>

@class MKMapItem, MKPhotoSmallAttributionView, MKPlaceAttributionCell, MKPlacePhotosView, NSArray, NSLayoutConstraint, NSString, UIScrollView, UIView, _MKPlaceViewController;
@protocol MKPlaceCardPhotosControllerDelegate><MKPlaceCardActionControllerDelegate;

@interface MKPlacePhotosViewController : UIViewController <MKPlaceAttributionCellDelegate, MKPlacePhotosViewDelegate, UIScrollViewDelegate, _MKInfoCardChildViewControllerAnalyticsDelegate, MKModuleViewControllerProtocol>
{
    MKPlacePhotosView *_currentPhotoViewer;
    UIView *_bottomHairline;
    NSArray *_photoViews;
    UIScrollView *_photosContainerScrollView;
    UIView *_photosContainer;
    MKPhotoSmallAttributionView *_photosSmallAttributionsView;
    double _lastPhotoScrollOffset;
    BOOL _photoScrollViewScrollingLeft;
    BOOL _photoScrollViewScrollingRight;
    BOOL _canUseFullscreenViewer;
    BOOL _canUseGallery;
    BOOL _photoLoaded;
    BOOL _loadAppImageCanceledOrFailed;
    BOOL _isRTL;
    unsigned long long _photosCount;
    UIView *_externalView;
    MKMapItem *_mapItem;
    NSLayoutConstraint *_heightConstraint;
    NSLayoutConstraint *_bottomConstraint;
    NSArray *_photos;
    unsigned long long _mode;
    unsigned long long _originalMode;
    unsigned long long _options;
    MKPlaceAttributionCell *_attributionCell;
    UIScrollView *_parentScrollView;
    BOOL _showsBottomHairline;
    _MKPlaceViewController *_owner;
    id <MKPlaceCardPhotosControllerDelegate><MKPlaceCardActionControllerDelegate> _photosControllerDelegate;
}

@property(nonatomic) BOOL showsBottomHairline; // @synthesize showsBottomHairline=_showsBottomHairline;
@property(nonatomic) __weak id <MKPlaceCardPhotosControllerDelegate><MKPlaceCardActionControllerDelegate> photosControllerDelegate; // @synthesize photosControllerDelegate=_photosControllerDelegate;
@property(nonatomic) __weak _MKPlaceViewController *owner; // @synthesize owner=_owner;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)viewLayoutMarginsDidChange;
- (id)infoCardChildUnactionableUIElements;
- (id)infoCardChildPossibleActions;
- (void)placePhotoViewerWillClose:(id)arg1 photo:(id)arg2 onIndex:(unsigned long long)arg3;
- (void)placePhotoViewerAttributionTappedForPhotoAtIndex:(unsigned long long)arg1 photo:(id)arg2;
- (id)placePhotoViewerViewForPhotoAtIndex:(unsigned long long)arg1;
- (void)_callPhotoDelegateForPhotoAt:(unsigned long long)arg1;
- (void)_photoTappedAtIndex:(unsigned long long)arg1;
- (void)_photoSelected:(id)arg1;
- (void)_loadPhotos;
- (void)_cancelLoadPhotos;
- (void)_updatePhotoBackgroundColor:(id)arg1;
- (void)infoCardThemeChanged;
- (void)_updateAlphaAttribution;
- (void)_catchScrollNotification:(id)arg1;
- (void)updateAttributionPositionWithOffset:(double)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (struct CGSize)sizeForIndex:(unsigned long long)arg1;
- (void)layoutImages;
- (void)_applyCornerRadius;
- (void)_createImageViews;
- (void)openURL;
- (id)attributionString;
- (id)formattedAttributionString;
- (void)updateAttributionCell;
- (void)addAttributionCell;
- (void)updateBottomHairlineVisibility;
- (void)dealloc;
- (void)_willResignActive:(id)arg1;
- (void)_didBecomeActive:(id)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (id)initWithMapItem:(id)arg1 mode:(unsigned long long)arg2 options:(unsigned long long)arg3;
- (BOOL)_canShowWhileLocked;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

