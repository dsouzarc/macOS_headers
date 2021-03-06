//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoLibraryServices/PLDaemonJob.h>

@class NSArray, NSPersistentStoreCoordinator, PLManagedAlbum, PLManagedObjectContext, PLPhotoLibrary;

@interface PLReplaceAssetsWithCameraRollCopiesJob : PLDaemonJob
{
    NSArray *_assets;
    PLManagedAlbum *_album;
    PLPhotoLibrary *_photoLibrary;
}

+ (void)replaceAssets:(id)arg1 withCameraRollCopiesInAlbum:(id)arg2;
@property(retain, nonatomic) PLPhotoLibrary *photoLibrary; // @synthesize photoLibrary=_photoLibrary;
@property(retain, nonatomic) PLManagedAlbum *album; // @synthesize album=_album;
@property(copy, nonatomic) NSArray *assets; // @synthesize assets=_assets;
- (void).cxx_destruct;
- (id)_cameraRollAssetDerivedFromAsset:(id)arg1;
- (void)runDaemonSide;
- (id)initFromXPCObject:(id)arg1 libraryServicesManager:(id)arg2;
- (void)encodeToXPCObject:(id)arg1;
- (void)run;
@property(readonly, nonatomic) NSPersistentStoreCoordinator *coordinator;
@property(readonly, nonatomic) PLManagedObjectContext *managedObjectContext;
- (long long)daemonOperation;
- (void)dealloc;
- (id)initWithPhotoLibrary:(id)arg1;

@end

