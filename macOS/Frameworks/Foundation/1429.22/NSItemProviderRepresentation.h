//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol NSItemRepresentationDataTransferDelegate;

@interface NSItemProviderRepresentation : NSObject
{
    CDUnknownBlockType _loader;
    NSString *_typeIdentifier;
    long long _visibility;
    long long _preferredRepresentation;
    id <NSItemRepresentationDataTransferDelegate> _dataTransferDelegate;
}

@property __weak id <NSItemRepresentationDataTransferDelegate> dataTransferDelegate; // @synthesize dataTransferDelegate=_dataTransferDelegate;
@property long long preferredRepresentation; // @synthesize preferredRepresentation=_preferredRepresentation;
@property long long visibility; // @synthesize visibility=_visibility;
@property(readonly, copy) NSString *typeIdentifier; // @synthesize typeIdentifier=_typeIdentifier;
- (void).cxx_destruct;
- (id)loadOpenInPlaceWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)loadFileCopyWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)loadDataWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setLoaderBlock:(CDUnknownBlockType)arg1;
- (id)loadWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)_loadWithOptions:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)performProgressTrackingWithLoaderBlock:(CDUnknownBlockType)arg1 onCancelCallback:(CDUnknownBlockType)arg2;
- (id)copyWithDoNothingLoaderBlock;
- (void)dealloc;
- (id)initWithType:(id)arg1 preferredRepresentation:(long long)arg2 loader:(CDUnknownBlockType)arg3;

@end

