//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PIPhotoEditHelper : NSObject
{
}

+ (id)pipelineFiltersForRAWShowingOriginalWithGeometry;
+ (id)pipelineFiltersForShowingOriginalWithGeometry;
+ (id)pipelineFiltersForOriginalGeometry;
+ (id)pipelineFiltersForCropping;
+ (id)filterNameForEffectName:(id)arg1;
+ (id)effectNameForFilterName:(id)arg1;
+ (BOOL)isSupportedAutoLoopRecipe:(id)arg1;
+ (BOOL)isPortraitEffect:(id)arg1;
+ (BOOL)is3DEffect:(id)arg1;
+ (void)removeAssetIdentifierFromMetadataArray:(id)arg1;
+ (void)addAssetIdentifier:(id)arg1 toMetadataArray:(id)arg2;
+ (void)addAssetIdentifier:(id)arg1 toMetadataDictionary:(id)arg2;
+ (id)portraitEffectsMatteRenderRequestWithComposition:(id)arg1;
+ (id)depthDataRenderRequestWithComposition:(id)arg1;
+ (id)imageExportRequestWithComposition:(id)arg1 format:(id)arg2 wideGamut:(BOOL)arg3;
+ (id)newJPEGExportFormatWithCompressionQuality:(double)arg1;
+ (id)videoExportRequestWithComposition:(id)arg1 destinationURL:(id)arg2 wideGamut:(BOOL)arg3;
+ (id)videoRenderRequestWithComposition:(id)arg1 fitInSize:(struct CGSize)arg2 wideGamut:(BOOL)arg3;
+ (id)priorityWithLevel:(long long)arg1;
+ (struct CGImage *)newCGImageFromBufferImage:(id)arg1;
+ (id)_imageRenderRequestWithComposition:(id)arg1 wideGamut:(BOOL)arg2;
+ (id)imageRenderRequestWithComposition:(id)arg1 fillInSize:(struct CGSize)arg2 wideGamut:(BOOL)arg3;
+ (id)imageRenderRequestWithComposition:(id)arg1 fitInSize:(struct CGSize)arg2 wideGamut:(BOOL)arg3;
+ (id)geometryRequestWithComposition:(id)arg1;
+ (id)newVideoExportClientWithName:(id)arg1;
+ (id)newVideoPropertiesClientWithName:(id)arg1;
+ (id)newImageExportClientWithName:(id)arg1;
+ (id)newImagePropertiesClientWithName:(id)arg1;
+ (id)newImageRenderClientWithName:(id)arg1;
+ (id)newAdjustmentWithName:(id)arg1;
+ (id)newComposition;
+ (id)livePhotoSourceWithPhotoSource:(id)arg1 videoSource:(id)arg2;
+ (id)videoSourceWithURL:(id)arg1;
+ (id)imageSourceWithCIImage:(id)arg1 orientation:(long long)arg2;
+ (id)imageSourceWithURL:(id)arg1 type:(id)arg2 proxyImage:(id)arg3 orientation:(long long)arg4 useEmbeddedPreview:(BOOL)arg5;
+ (id)imageSourceWithURL:(id)arg1 type:(id)arg2 useEmbeddedPreview:(BOOL)arg3;
+ (id)imageSourceWithURL:(id)arg1 type:(id)arg2 proxyImage:(id)arg3 orientation:(long long)arg4;
+ (id)imageSourceWithURL:(id)arg1 type:(id)arg2;
+ (void)initialize;

@end

