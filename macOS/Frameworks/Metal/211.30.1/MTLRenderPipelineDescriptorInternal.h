//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Metal/MTLRenderPipelineDescriptor.h>

__attribute__((visibility("hidden")))
@interface MTLRenderPipelineDescriptorInternal : MTLRenderPipelineDescriptor
{
    struct MTLRenderPipelineDescriptorPrivate _private;
}

- (id)newSerializedVertexDataWithFlags:(unsigned long long)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (id)newSerializedVertexDataWithFlags:(unsigned long long)arg1 error:(id *)arg2;
- (id)serializeFragmentData;
- (id)newSerializedFragmentDataWithFlags:(unsigned long long)arg1 options:(unsigned long long)arg2;
- (void)validateWithDevice:(id)arg1;
- (void)setStencilAttachmentPixelFormat:(unsigned long long)arg1;
- (unsigned long long)stencilAttachmentPixelFormat;
- (void)setDepthAttachmentPixelFormat:(unsigned long long)arg1;
- (unsigned long long)depthAttachmentPixelFormat;
- (id)colorAttachments;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (const struct MTLRenderPipelineDescriptorPrivate *)_descriptorPrivate;
- (id)driverCompilerOptions;
- (void)setDriverCompilerOptions:(id)arg1;
- (id)vertexDescriptor;
- (void)setVertexDescriptor:(id)arg1;
- (void)attachVertexDescriptor:(id)arg1;
- (id)pipelineLibrary;
- (void)setPipelineLibrary:(id)arg1;
- (id)fragmentFunction;
- (void)setFragmentFunction:(id)arg1;
- (id)vertexFunction;
- (void)setVertexFunction:(id)arg1;
- (void)setLabel:(id)arg1;
- (id)label;
- (id)fastBlendDescriptorAtIndex:(unsigned long long)arg1;
- (void)reset;
- (id)fragmentBuffers;
- (id)vertexBuffers;
- (void)setInputPrimitiveTopology:(unsigned long long)arg1;
- (unsigned long long)inputPrimitiveTopology;
- (void)setSampleCoverageInvert:(BOOL)arg1;
- (BOOL)sampleCoverageInvert;
- (void)setNeedsCustomBorderColorSamplers:(BOOL)arg1;
- (BOOL)needsCustomBorderColorSamplers;
- (void)setOpenGLModeEnabled:(BOOL)arg1;
- (BOOL)openGLModeEnabled;
- (void)setFragmentDepthCompareClampMask:(unsigned int)arg1;
- (unsigned int)fragmentDepthCompareClampMask;
- (void)setVertexDepthCompareClampMask:(unsigned int)arg1;
- (unsigned int)vertexDepthCompareClampMask;
- (void)setTwoSideEnabled:(BOOL)arg1;
- (BOOL)isTwoSideEnabled;
- (void)setPointSizeOutputVS:(BOOL)arg1;
- (BOOL)isPointSizeOutputVS;
- (void)setPointCoordLowerLeft:(BOOL)arg1;
- (BOOL)isPointCoordLowerLeft;
- (void)setPointSmoothEnabled:(BOOL)arg1;
- (BOOL)isPointSmoothEnabled;
- (unsigned char)clipDistanceEnableMask;
- (void)setClipDistanceEnableMask:(unsigned char)arg1;
- (void)setAlphaTestFunction:(unsigned long long)arg1;
- (unsigned long long)alphaTestFunction;
- (void)setAlphaTestEnabled:(BOOL)arg1;
- (BOOL)isAlphaTestEnabled;
- (void)setLogicOperation:(unsigned long long)arg1;
- (unsigned long long)logicOperation;
- (void)setLogicOperationEnabled:(BOOL)arg1;
- (BOOL)isLogicOperationEnabled;
- (void)setRasterizationEnabled:(BOOL)arg1;
- (BOOL)isRasterizationEnabled;
- (void)setAlphaToOneEnabled:(BOOL)arg1;
- (BOOL)isAlphaToOneEnabled;
- (void)setAlphaToCoverageEnabled:(BOOL)arg1;
- (BOOL)isAlphaToCoverageEnabled;
- (void)setSampleCoverage:(float)arg1;
- (float)sampleCoverage;
- (void)setSampleMask:(unsigned long long)arg1;
- (unsigned long long)sampleMask;
- (void)setRasterSampleCount:(unsigned long long)arg1;
- (unsigned long long)rasterSampleCount;
- (void)setSampleCount:(unsigned long long)arg1;
- (unsigned long long)sampleCount;
@property(nonatomic) unsigned long long postVertexDumpBufferIndex;
- (void)setResourceIndex:(unsigned long long)arg1;
- (unsigned long long)resourceIndex;
- (void)setForceResourceIndex:(BOOL)arg1;
- (BOOL)forceResourceIndex;
- (void)setSupportIndirectCommandBuffers:(BOOL)arg1;
- (BOOL)supportIndirectCommandBuffers;
- (void)setTessellationOutputWindingOrder:(unsigned long long)arg1;
- (unsigned long long)tessellationOutputWindingOrder;
- (void)setTessellationFactorStepFunction:(unsigned long long)arg1;
- (unsigned long long)tessellationFactorStepFunction;
- (void)setTessellationControlPointIndexType:(unsigned long long)arg1;
- (unsigned long long)tessellationControlPointIndexType;
- (void)setTessellationFactorFormat:(unsigned long long)arg1;
- (unsigned long long)tessellationFactorFormat;
- (void)setTessellationFactorScaleEnabled:(BOOL)arg1;
- (BOOL)isTessellationFactorScaleEnabled;
- (void)setMaxTessellationFactor:(unsigned long long)arg1;
- (unsigned long long)maxTessellationFactor;
- (void)setTessellationPartitionMode:(unsigned long long)arg1;
- (unsigned long long)tessellationPartitionMode;
@property(nonatomic) _Bool forceSoftwareVertexFetch;
- (id)description;
- (id)formattedDescription:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;

@end

