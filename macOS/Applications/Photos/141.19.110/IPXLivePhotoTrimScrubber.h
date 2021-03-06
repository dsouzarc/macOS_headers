//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

#import "NSPopoverDelegate-Protocol.h"
#import "PXLivePhotoTrimScrubberDelegate-Protocol.h"
#import "PXTrimToolPlayerObserver-Protocol.h"

@class NSPopover, NSString, PFCoalescer, PXLivePhotoTrimScrubberSnapStripController, PXNSLivePhotoTrimScrubber, PXSnapStripView;
@protocol IPXLivePhotoTrimScrubberDelegate, IPXLivePhotoTrimScrubberUpdateDelegate, PXTrimToolPlayerWrapper;

__attribute__((visibility("hidden")))
@interface IPXLivePhotoTrimScrubber : NSView <NSPopoverDelegate, PXLivePhotoTrimScrubberDelegate, PXTrimToolPlayerObserver>
{
    struct {
        char respondsToDidFinishUpdatingTrimRange;
        char respondsToDidFinishUpdatingKeyTime;
    } _delegateFlags;
    struct {
        char needsUpdateTimes;
        char needsUpdateFromPlayerWrapper;
        char invalidatedAsset;
    } _needsUpdateFlags;
    NSString *_assetId;
    NSPopover *_keyTimePopover;
    PFCoalescer *_loadCoalescer;
    BOOL _isScrubberTimeStale;
    BOOL __isUpdatingFromDelegate;
    id <IPXLivePhotoTrimScrubberDelegate> _delegate;
    id <IPXLivePhotoTrimScrubberUpdateDelegate> _updateDelegate;
    id <PXTrimToolPlayerWrapper> _playerWrapper;
    PXSnapStripView *_snapStripView;
    PXNSLivePhotoTrimScrubber *_scrubberView;
    PXLivePhotoTrimScrubberSnapStripController *_snapStripController;
    CDStruct_1b6d18a9 _originalKeyPhotoTime;
    CDStruct_1b6d18a9 _cachedFrameDuration;
    struct CGRect _visibleRect;
}

- (void).cxx_destruct;
@property(nonatomic, setter=_setIsUpdatingFromDelegate:) BOOL _isUpdatingFromDelegate; // @synthesize _isUpdatingFromDelegate=__isUpdatingFromDelegate;
@property(nonatomic) CDStruct_1b6d18a9 cachedFrameDuration; // @synthesize cachedFrameDuration=_cachedFrameDuration;
@property(nonatomic) CDStruct_1b6d18a9 originalKeyPhotoTime; // @synthesize originalKeyPhotoTime=_originalKeyPhotoTime;
@property(retain, nonatomic) PXLivePhotoTrimScrubberSnapStripController *snapStripController; // @synthesize snapStripController=_snapStripController;
@property(retain, nonatomic) PXNSLivePhotoTrimScrubber *scrubberView; // @synthesize scrubberView=_scrubberView;
@property(retain, nonatomic) PXSnapStripView *snapStripView; // @synthesize snapStripView=_snapStripView;
@property(retain, nonatomic) id <PXTrimToolPlayerWrapper> playerWrapper; // @synthesize playerWrapper=_playerWrapper;
@property(nonatomic) __weak id <IPXLivePhotoTrimScrubberUpdateDelegate> updateDelegate; // @synthesize updateDelegate=_updateDelegate;
@property(nonatomic) __weak id <IPXLivePhotoTrimScrubberDelegate> delegate; // @synthesize delegate=_delegate;
- (struct CGRect)visibleRect;
- (void)trimScrubber:(id)arg1 didEndInteractivelyEditingElement:(long long)arg2 successful:(BOOL)arg3;
- (void)trimScrubber:(id)arg1 didBeginInteractivelyEditingElement:(long long)arg2;
- (void)trimScrubber:(id)arg1 didChangeTimeForElement:(long long)arg2;
- (void)trimScrubberAssetDurationDidChange:(id)arg1;
- (void)compositonDidUpdateForPlayerWrapper:(id)arg1;
- (void)popoverDidClose:(id)arg1;
- (void)popoverWillClose:(id)arg1;
- (void)_handleScrubberDidEndTrimRangeEditing:(BOOL)arg1;
- (void)_handleScrubberDidEndKeyTimeEditing;
- (void)_seekToTimeForElement:(long long)arg1;
- (void)_seekPlayerToTime:(CDStruct_1b6d18a9)arg1;
- (void)_setPlaceholder:(struct CGImage *)arg1;
- (void)_updateSnappingTimes;
- (void)_commitKeyTime:(id)arg1;
- (void)_handlePress:(id)arg1;
- (void)_IPXLivePhotoTrimScrubber_commonInit;
- (void)_updateFromPlayerWrapperIfNeeded;
- (void)_setNeedsUpdateFromPlayerWrapper;
- (void)_updateTimesFromDelegateIfNeeded;
- (void)_setNeedsUpdateTimesFromDelegate;
- (void)_updateAssetIfNeeded;
- (void)_setNeedsUpdateAsset;
- (void)_updateIfNeeded;
- (BOOL)_needsUpdate;
- (void)_scheduleUpdate;
- (void)invalidateTimes;
- (void)invalidateAsset;
- (void)updatePlaceholderWithAsset:(id)arg1;
- (CDStruct_1b6d18a9)frameDuration;
@property(readonly, nonatomic) CDStruct_1b6d18a9 currentDuration;
@property(nonatomic, getter=canEditKeyTime) BOOL canEditKeyTime;
@property(nonatomic, getter=markersHidden) BOOL hideMarkers;
@property(nonatomic, getter=isEnabled) BOOL enabled;
- (void)layout;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

