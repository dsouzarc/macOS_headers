//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/PXObservable.h>

@class NSObject, PXAssetReference, PXOperationStatus;
@protocol PXDisplayAsset;

__attribute__((visibility("hidden")))
@interface IPXViewerItemModel : PXObservable
{
    PXAssetReference *_assetReference;
    PXOperationStatus *_loadingStatus;
}

@property(readonly, nonatomic) PXOperationStatus *loadingStatus; // @synthesize loadingStatus=_loadingStatus;
@property(readonly, nonatomic) PXAssetReference *assetReference; // @synthesize assetReference=_assetReference;
- (void).cxx_destruct;
- (void)setLoadingStatus:(id)arg1;
- (void)setAssetReference:(id)arg1;
- (void)performChanges:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) NSObject<PXDisplayAsset> *asset;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithAssetReference:(id)arg1;

@end

