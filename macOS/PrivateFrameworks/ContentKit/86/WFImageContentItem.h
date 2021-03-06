//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ContentKit/WFGenericFileContentItem.h>

#import "WFContentItemClass.h"

@class WFFileType, WFImage;

@interface WFImageContentItem : WFGenericFileContentItem <WFContentItemClass>
{
    BOOL _imageIsAnimated;
    WFFileType *_preferredFileType;
}

+ (id)countDescription;
+ (id)pluralTypeDescription;
+ (id)typeDescription;
+ (id)contentCategories;
+ (id)outputTypes;
+ (id)ownedPasteboardTypes;
+ (id)ownedTypes;
+ (id)imageTypes;
+ (id)propertyBuilders;
+ (id)itemWithImage:(id)arg1 named:(id)arg2 preferredFileType:(id)arg3;
+ (id)itemWithSerializedItem:(id)arg1 forType:(id)arg2 named:(id)arg3;
@property(retain, nonatomic) WFFileType *preferredFileType; // @synthesize preferredFileType=_preferredFileType;
@property(nonatomic) BOOL imageIsAnimated; // @synthesize imageIsAnimated=_imageIsAnimated;
- (void).cxx_destruct;
- (id)copyWithName:(id)arg1 zone:(struct _NSZone *)arg2;
- (BOOL)isContent;
- (BOOL)canGenerateRepresentationForType:(id)arg1;
- (id)generateObjectRepresentationForClass:(Class)arg1 options:(id)arg2 error:(id *)arg3;
- (void)generateFileRepresentation:(CDUnknownBlockType)arg1 options:(id)arg2 forType:(id)arg3;
- (id)generateFileRepresentationForType:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)generateImageFileForType:(id)arg1 includingMetadata:(BOOL)arg2 compressionQuality:(id)arg3 error:(id *)arg4;
- (id)imageFile;
@property(readonly, nonatomic) WFImage *image;
- (BOOL)isObjectBacked;
- (BOOL)isScreenshot;
- (id)orientation;
- (id)location;
- (id)height;
- (id)width;
- (id)model;
- (id)make;
- (id)dateTaken;
@property(readonly, nonatomic) struct CGSize size;
- (id)metadata;
- (BOOL)getListThumbnail:(CDUnknownBlockType)arg1 forSize:(struct CGSize)arg2;

@end

