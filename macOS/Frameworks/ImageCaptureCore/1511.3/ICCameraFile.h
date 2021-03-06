//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ImageCaptureCore/ICCameraItem.h>

@class NSArray, NSString;

@interface ICCameraFile : ICCameraItem
{
    id _fileProperties;
}

- (id)mediaData;
- (BOOL)isJPEG;
- (BOOL)isData;
- (BOOL)isImage;
- (BOOL)isMovie;
- (id)base;
- (BOOL)isLegacy;
- (BOOL)isSidecar;
- (void)flagAsSidecar;
- (BOOL)isDataUniversal;
- (BOOL)universalFamily;
- (BOOL)originalFamily;
- (BOOL)convertedFamily;
- (BOOL)partOfFamily:(unsigned long long)arg1;
- (BOOL)isEditedUniversal;
- (BOOL)isEditedConverted;
- (BOOL)isEditedOriginal;
- (BOOL)isEdited:(unsigned long long)arg1;
- (BOOL)isUniversal;
- (BOOL)isConverted;
- (BOOL)isOriginal;
- (BOOL)isUntouched:(unsigned long long)arg1;
- (BOOL)useExtensionIcon;
- (void)setuseExtensionIcon:(BOOL)arg1;
- (BOOL)sendMessageCmd:(id)arg1;
- (id)getConnection;
- (void)setHasThumbnail:(BOOL)arg1;
- (void)setHasMetadata:(BOOL)arg1;
- (void)handleProgressNotification:(id)arg1;
- (id)metadataIfAvailable;
- (void)setThumbnailData:(id)arg1;
- (id)thumbnailData;
- (struct CGImage *)largeThumbnailIfAvailable;
- (struct CGImage *)thumbnailIfAvailable;
- (void)requestMetadata;
- (void)requestThumbnail;
- (void)requestMetadataWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)requestThumbnailWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)requestMetadataWithOptions:(id)arg1;
- (void)requestThumbnailWithOptions:(id)arg1;
- (BOOL)handleCommandCompletion:(id)arg1;
@property(readonly) NSArray *sidecarFiles;
- (void)addSidecarFile:(id)arg1;
@property unsigned long long orientation;
@property(readonly) NSString *mediaBase;
- (unsigned long long)uTime;
- (unsigned long long)oUUID;
@property BOOL wasDownloaded;
@property(retain) id downloadDelegate;
@property BOOL fetchingMetadata;
@property BOOL fetchingThumbnail;
- (void)setRetrievedMetadata:(BOOL)arg1;
@property(readonly) BOOL retrievedMetadata;
- (void)setRetrievedThumbnail:(BOOL)arg1;
@property(readonly) BOOL retrievedThumbnail;
- (BOOL)hasMetadata;
- (BOOL)hasThumbnail;
@property(readonly) BOOL orientationOverridden;
- (BOOL)isRaw;
@property(readonly) NSString *relatedUUID;
@property(readonly) NSString *createdFilename;
@property(readonly) NSString *groupUUID;
@property(readonly) NSString *originalFilename;
@property(readonly) BOOL firstPicked;
@property(readonly) BOOL timeLapse;
@property(readonly) BOOL highFramerate;
@property(readonly) BOOL burstPicked;
@property(readonly) BOOL burstFavorite;
@property(readonly) NSString *originatingAssetID;
@property(readonly) NSString *burstUUID;
@property(readonly) double duration;
@property(readonly) long long fileSize;
- (id)modificationDate;
- (id)creationDate;
@property(readonly) long long height;
@property(readonly) long long width;
- (id)description;
- (void)dealloc;
- (id)debugMediaMetadata;
- (id)debugIdentity;
- (id)initWithDictionary:(id)arg1 parentFolder:(id)arg2 device:(id)arg3;
- (unsigned long long)unsignedLongLongValue;
- (long long)compareDate:(id)arg1;
- (long long)compareUUID:(id)arg1;
- (id)valueForUndefinedKey:(id)arg1;

@end

