//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PhotoPrintProduct/KHLayerRenderer.h>

@interface KHFrameLayerRenderer : KHLayerRenderer
{
    BOOL _layerShouldPositionAndSizeFrame;
    CDStruct_5df4926e _layerFrameRect;
    BOOL _containLayerFrameWithinParentBounds;
    int _avoidOverlapMirroring;
}

+ (BOOL)_frameCenterOverlapped:(id)arg1;
+ (id)supportedAttributes;
- (BOOL)_avoidOverlapByMirroringForFrame:(id)arg1;
- (void)fillContext:(struct CGContext *)arg1 environment:(id)arg2 forPath:(struct CGPath *)arg3 atScale:(double)arg4 treatmentFactor:(double)arg5 flipped:(BOOL)arg6;
- (void)fillContext:(struct CGContext *)arg1 environment:(id)arg2 forPath:(struct CGPath *)arg3 atScale:(double)arg4 treatmentFactor:(double)arg5;
- (id)layerFrameForParentFrame:(id)arg1;
- (void)loadAttributes;

@end

