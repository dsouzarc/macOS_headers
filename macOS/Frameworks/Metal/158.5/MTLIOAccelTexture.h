//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Metal/MTLIOAccelResource.h>

@class MTLIOAccelBuffer;

@interface MTLIOAccelTexture : MTLIOAccelResource
{
    MTLIOAccelTexture *_parentTexture;
    unsigned long long _parentRelativeLevel;
    unsigned long long _parentRelativeSlice;
    MTLIOAccelBuffer *_buffer;
    MTLIOAccelBuffer *_masterBuffer;
    struct __IOSurface *_iosurface;
    unsigned long long _iosurfacePlane;
    unsigned long long _textureType;
    unsigned long long _pixelFormat;
    unsigned long long _usage;
    unsigned long long _width;
    unsigned long long _height;
    unsigned long long _depth;
    unsigned long long _mipmapLevelCount;
    unsigned long long _sampleCount;
    unsigned long long _arrayLength;
    unsigned long long _numFaces;
    BOOL _shareable;
    BOOL _framebufferOnly;
    BOOL _isDrawable;
    BOOL _rootResourceIsSuballocatedBuffer;
    short _masterHeapIndex;
    short _masterBufferIndex;
    unsigned long long _masterBufferOffset;
    unsigned long long _length;
    unsigned long long _bufferOffset;
    unsigned long long _bufferBytesPerRow;
    BOOL _allowGPUOptimizedContents;
}

+ (void)initNewTextureDataWithDevice:(id)arg1 descriptor:(id)arg2 sysMemSize:(unsigned long long)arg3 sysMemRowBytes:(unsigned long long)arg4 vidMemSize:(unsigned long long)arg5 vidMemRowBytes:(unsigned long long)arg6 args:(struct IOAccelNewResourceArgs *)arg7;
@property(readonly) BOOL allowGPUOptimizedContents; // @synthesize allowGPUOptimizedContents=_allowGPUOptimizedContents;
@property(readonly) BOOL rootResourceIsSuballocatedBuffer; // @synthesize rootResourceIsSuballocatedBuffer=_rootResourceIsSuballocatedBuffer;
@property(readonly) BOOL isDrawable; // @synthesize isDrawable=_isDrawable;
@property(readonly, getter=isFramebufferOnly) BOOL framebufferOnly; // @synthesize framebufferOnly=_framebufferOnly;
@property(readonly) unsigned long long numFaces; // @synthesize numFaces=_numFaces;
@property(readonly) unsigned long long arrayLength; // @synthesize arrayLength=_arrayLength;
@property(readonly) unsigned long long sampleCount; // @synthesize sampleCount=_sampleCount;
@property(readonly) unsigned long long mipmapLevelCount; // @synthesize mipmapLevelCount=_mipmapLevelCount;
@property(readonly) unsigned long long depth; // @synthesize depth=_depth;
@property(readonly) unsigned long long height; // @synthesize height=_height;
@property(readonly) unsigned long long width; // @synthesize width=_width;
@property(readonly) unsigned long long usage; // @synthesize usage=_usage;
@property(readonly) unsigned long long pixelFormat; // @synthesize pixelFormat=_pixelFormat;
@property(readonly) unsigned long long textureType; // @synthesize textureType=_textureType;
@property(readonly) unsigned long long iosurfacePlane; // @synthesize iosurfacePlane=_iosurfacePlane;
@property(readonly) MTLIOAccelBuffer *buffer; // @synthesize buffer=_buffer;
@property(readonly) unsigned long long parentRelativeSlice; // @synthesize parentRelativeSlice=_parentRelativeSlice;
@property(readonly) unsigned long long parentRelativeLevel; // @synthesize parentRelativeLevel=_parentRelativeLevel;
@property(readonly) MTLIOAccelTexture *parentTexture; // @synthesize parentTexture=_parentTexture;
@property(readonly) unsigned long long bufferBytesPerRow;
@property(readonly) unsigned long long bufferOffset;
- (void)didModifyData;
- (struct __CFArray *)copyAnnotations;
- (void)replaceRegion:(CDStruct_4c83c94d)arg1 mipmapLevel:(unsigned long long)arg2 withBytes:(const void *)arg3 bytesPerRow:(unsigned long long)arg4;
- (void)getBytes:(void *)arg1 bytesPerRow:(unsigned long long)arg2 fromRegion:(CDStruct_4c83c94d)arg3 mipmapLevel:(unsigned long long)arg4;
- (void)copyFromPixels:(const void *)arg1 rowBytes:(unsigned long long)arg2 imageBytes:(unsigned long long)arg3 toSlice:(unsigned long long)arg4 mipmapLevel:(unsigned long long)arg5 origin:(CDStruct_14f26992)arg6 size:(CDStruct_14f26992)arg7;
- (void)copyFromSlice:(unsigned long long)arg1 mipmapLevel:(unsigned long long)arg2 origin:(CDStruct_14f26992)arg3 size:(CDStruct_14f26992)arg4 toPixels:(void *)arg5 rowBytes:(unsigned long long)arg6 imageBytes:(unsigned long long)arg7;
@property(readonly) unsigned long long uniqueIdentifier;
- (id)initWithMasterBuffer:(id)arg1 heapIndex:(short)arg2 bufferIndex:(short)arg3 bufferOffset:(unsigned long long)arg4 length:(unsigned long long)arg5 descriptor:(id)arg6 sysMemRowBytes:(unsigned long long)arg7 vidMemSize:(unsigned long long)arg8 vidMemRowBytes:(unsigned long long)arg9 args:(struct IOAccelNewResourceArgs *)arg10 argsSize:(unsigned int)arg11;
- (id)initWithHeap:(id)arg1 resource:(id)arg2 offset:(unsigned long long)arg3 length:(unsigned long long)arg4 device:(id)arg5 descriptor:(id)arg6;
- (id)initWithBuffer:(id)arg1 descriptor:(id)arg2 offset:(unsigned long long)arg3 bytesPerRow:(unsigned long long)arg4;
- (id)initWithBuffer:(id)arg1 descriptor:(id)arg2 sysMemOffset:(unsigned long long)arg3 sysMemRowBytes:(unsigned long long)arg4 vidMemSize:(unsigned long long)arg5 vidMemRowBytes:(unsigned long long)arg6 args:(struct IOAccelNewResourceArgs *)arg7 argsSize:(unsigned int)arg8;
- (id)initWithBuffer:(id)arg1 descriptor:(id)arg2 sysMemOffset:(unsigned long long)arg3 sysMemRowBytes:(unsigned long long)arg4 vidMemSize:(unsigned long long)arg5 vidMemRowBytes:(unsigned long long)arg6 args:(struct IOAccelNewResourceArgs *)arg7 argsSize:(unsigned int)arg8 isStrideTexture:(BOOL)arg9;
- (id)initWithTextureInternal:(id)arg1 pixelFormat:(unsigned long long)arg2 textureType:(unsigned long long)arg3 levels:(struct _NSRange)arg4 slices:(struct _NSRange)arg5 compressedView:(BOOL)arg6;
- (id)initWithTexture:(id)arg1 pixelFormat:(unsigned long long)arg2 textureType:(unsigned long long)arg3 levels:(struct _NSRange)arg4 slices:(struct _NSRange)arg5;
- (id)initWithTexture:(id)arg1 pixelFormat:(unsigned long long)arg2;
- (id)initWithDevice:(id)arg1 surface:(unsigned int)arg2 buffer:(unsigned int)arg3 args:(struct IOAccelNewResourceArgs *)arg4 argsSize:(unsigned int)arg5 returnData:(struct IOAccelGetResourceInfoReturnData *)arg6 returnDataSize:(unsigned int)arg7;
- (id)initWithDevice:(id)arg1 descriptor:(id)arg2 iosurface:(struct __IOSurface *)arg3 plane:(unsigned int)arg4 field:(unsigned int)arg5 args:(struct IOAccelNewResourceArgs *)arg6 argsSize:(unsigned int)arg7;
- (id)initWithDevice:(id)arg1 descriptor:(id)arg2 sysMemSize:(unsigned long long)arg3 sysMemRowBytes:(unsigned long long)arg4 vidMemSize:(unsigned long long)arg5 vidMemRowBytes:(unsigned long long)arg6 args:(struct IOAccelNewResourceArgs *)arg7 argsSize:(unsigned int)arg8;
- (void)dealloc;
@property(readonly, getter=isShareable) BOOL shareable; // @synthesize shareable=_shareable;
@property(readonly) struct __IOSurface *iosurface; // @synthesize iosurface=_iosurface;
- (id)newSharedTextureHandle;
- (void)makeAliasable;
- (BOOL)isAliasable;
@property(readonly) MTLIOAccelResource *rootResource;
- (id)description;
- (id)formattedDescription:(unsigned long long)arg1;

@end

