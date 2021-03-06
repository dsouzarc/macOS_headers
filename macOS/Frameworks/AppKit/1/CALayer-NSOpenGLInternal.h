//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CALayer.h"

@class NSView;

@interface CALayer (NSOpenGLInternal)
+ (id)keyPathsForValuesAffectingNS_tiledLayerVisibleRect;
@property(readonly) BOOL NS_managesOpenGLDrawable;
- (void)_setView:(id)arg1;
- (id)_view;
@property(setter=NS_setDefersTransformInvalidation:) BOOL NS_defersTransformInvalidation;
@property(readonly) double NS_suggestedContentsScale;
@property(readonly) struct CGSize NS_suggestedContentsScaleSize;
- (void)_NS_invalidateSuggestedContentsScale;
- (void)_NS_accumulateSuggestedScaleBelow:(double *)arg1:(double *)arg2;
- (void)_NS_accumulateSuggestedScale:(double *)arg1:(double *)arg2;
- (void)NS_didChangeDefaultContentsScale:(double)arg1;
- (id)visualTabPicker_hitTestIgnoringTransformLayers:(struct CGPoint)arg1 inRootLayer:(id)arg2;
- (id)nearestAncestorIgnoringTransformLayers;
@property(readonly) struct CGRect NS_visibleRect;
- (BOOL)NS_canDraw;
- (Class)NS_backingLayerContentsClass;
- (id)NS_makeContentsLayer;
- (void)NS_setPreparedContentRect:(struct CGRect)arg1;
- (void)NS_setPresentationRect:(struct CGRect)arg1;
- (void)NS_setIsScrolling:(BOOL)arg1;
- (BOOL)NS_hasPartialPrefetchedContentsForRect:(struct CGRect)arg1;
- (BOOL)NS_hasPrefetchedContentsForRect:(struct CGRect)arg1;
- (struct CGRect)NS_activeVisibleRect;
- (void)NS_prepareContentRect:(struct CGRect)arg1;
- (void)NS_invalidatePreparedContentRect;
- (void)NS_dropPrefetchedContentsIfNecessary;
- (void)NS_showPrefetchedContentsIfNecessaryInRect:(struct CGRect)arg1;
- (BOOL)NS_wantsToPrefetchTiles;
- (struct CGRect)NS_renderedRectInRect:(struct CGRect)arg1 scrollVelocity:(struct CGPoint)arg2;
- (BOOL)NS_prefetchContentsInRect:(struct CGRect)arg1 scrollVelocity:(struct CGPoint)arg2;
- (BOOL)NS_hasPrefetchedContents;
- (void)NS_prefetchContentsIfNecessary;
- (void)NS_setPurged:(BOOL)arg1;
- (BOOL)NS_isPurged;
- (void)NS_setVisibleTile:(BOOL)arg1;
- (BOOL)NS_isVisibleTile;
- (void)NS_displayUsingContentsAligning;
- (void)NS_willDisplayWithoutContentsAligning;
- (void)NS_setNeedsDisplayInRectUsingContentsAligning:(struct CGRect)arg1;
- (struct CGRect)NS_alignedRect;
- (struct CGRect)NS_alignedDisplayRect;
- (struct CGRect)NS_displayRect;
- (struct CGRect)NS_displayAlignedRect:(struct CGRect)arg1;
- (struct CGRect)NS_displayAlignedRect:(struct CGRect)arg1 options:(unsigned long long)arg2;
- (struct CGRect)NS_convertRectFromDisplay:(struct CGRect)arg1;
- (struct CGRect)NS_convertRectToDisplay:(struct CGRect)arg1;
- (double)NS_displayContentsScale;
- (void)NS_prepareForDisplayUsingContentsAligning;
- (void)NS_updateContentsTransformForContentsAligning;
- (void)NS_updateOpaqueForContentsAligning;
@property(readonly) BOOL NS_shouldUseContentsAligning;
@property(readonly) BOOL NS_contentsAligningEnabled;
@property(readonly, getter=NS_contentsScaleSize) struct CGSize NS_contentsScaleSizeOrContentsScale; // @dynamic NS_contentsScaleSizeOrContentsScale;
- (id)_NS_subtreeDescription;
- (id)_NS_subtreeDescriptionWithIndent:(unsigned long long)arg1;
- (void)_NS_dumpContents;

// Remaining properties
@property(getter=NS_actualContentsScaleSize, setter=NS_setContentsScaleSize:) struct CGSize NS_contentsScaleSize; // @dynamic NS_contentsScaleSize;
@property(setter=NS_setView:) __weak NSView *NS_view; // @dynamic NS_view;
@end

