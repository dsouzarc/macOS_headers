//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Photos/PHCollectionList.h>

#import <PhotosUICore/PXDisplayCollectionList-Protocol.h>

@class NSString;

@interface PHCollectionList (PXDisplayAssetAdoption) <PXDisplayCollectionList>
+ (id)_assetCollectionsWithAlbumSubtypes:(id)arg1;
+ (id)px_otherAlbumsWithoutDeletedCollectionList;
+ (id)px_otherAlbumsCollectionList;
+ (id)px_mediaTypesCollectionList;
+ (id)px_sharedAlbumsCollectionList;
+ (id)px_rootAlbumCollectionList;
+ (id)px_rootProjectCollectionList;
@property(readonly, nonatomic) BOOL px_isTransientPlacesCollection;
@property(readonly, nonatomic) BOOL px_isMacSyncedFacesFolder;
@property(readonly, nonatomic) BOOL px_isMacSyncedEventsFolder;
@property(readonly, nonatomic) BOOL px_isTopLevelFolder;
@property(readonly, nonatomic) BOOL px_isFavoriteMemoriesSmartFolder;
@property(readonly, nonatomic) BOOL px_isRegularFolder;
@property(readonly, nonatomic) BOOL px_isSmartFolder;
@property(readonly, nonatomic) BOOL px_isFolder;
@property(readonly, nonatomic) BOOL px_isProjectsFolder;
@property(readonly, nonatomic) BOOL px_isMediaTypesFolder;
@property(readonly, nonatomic) BOOL px_isSharedAlbumsFolder;
- (BOOL)px_fetchContainsAnyAssets;
- (BOOL)px_fetchIsEmpty;
@property(readonly, copy, nonatomic) NSString *px_localizedTitle;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *localizedTitle;
@property(readonly, nonatomic) BOOL px_canRearrangeContent;
@property(readonly, nonatomic) BOOL px_isAllPhotosSmartAlbum;
@property(readonly, nonatomic) BOOL px_isCloudMultipleContributorsEnabled;
@property(readonly, nonatomic) BOOL px_isFavoritesSmartAlbum;
@property(readonly, nonatomic) BOOL px_isHiddenSmartAlbum;
@property(readonly, nonatomic) BOOL px_isImportHistoryCollection;
@property(readonly, nonatomic) BOOL px_isImportSessionCollection;
@property(readonly, nonatomic) BOOL px_isImportedAlbum;
@property(readonly, nonatomic) BOOL px_isMacSyncedAlbum;
@property(readonly, nonatomic) BOOL px_isMediaTypeSmartAlbum;
@property(readonly, nonatomic) BOOL px_isMemoriesVirtualCollection;
@property(readonly, nonatomic) BOOL px_isMomentsVirtualCollection;
@property(readonly, nonatomic) BOOL px_isMyPhotoStreamAlbum;
@property(readonly, nonatomic) BOOL px_isOwnedSharedAlbum;
@property(readonly, nonatomic) BOOL px_isPeopleVirtualCollection;
@property(readonly, nonatomic) BOOL px_isPhotosVirtualCollection;
@property(readonly, nonatomic) BOOL px_isPlacesSmartAlbum;
@property(readonly, nonatomic) BOOL px_isProject;
@property(readonly, nonatomic) BOOL px_isRecentlyAddedSmartAlbum;
@property(readonly, nonatomic) BOOL px_isRecentlyDeletedSmartAlbum;
@property(readonly, nonatomic) BOOL px_isRecentlyEditedSmartAlbum;
@property(readonly, nonatomic) BOOL px_isRecentsSmartAlbum;
@property(readonly, nonatomic) BOOL px_isRegularAlbum;
@property(readonly, nonatomic) BOOL px_isRootSmartAlbum;
@property(readonly, nonatomic) BOOL px_isScreenRecordingsSmartAlbum;
@property(readonly, nonatomic) BOOL px_isSharedActivityVirtualCollection;
@property(readonly, nonatomic) BOOL px_isSharedAlbum;
@property(readonly, nonatomic) BOOL px_isSmartAlbum;
@property(readonly, nonatomic) BOOL px_isStandInAlbum;
@property(readonly, nonatomic) BOOL px_isUserCreated;
@property(readonly, nonatomic) BOOL px_isUserSmartAlbum;
@property(readonly) Class superclass;
@end

