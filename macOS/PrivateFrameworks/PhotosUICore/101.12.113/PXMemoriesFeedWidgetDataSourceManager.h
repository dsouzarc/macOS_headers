//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PhotosUICore/PXMemoriesFeedDataSourceManagerBase.h>

@interface PXMemoriesFeedWidgetDataSourceManager : PXMemoriesFeedDataSourceManagerBase
{
    BOOL _onlyFavorites;
    unsigned long long _maxCount;
}

@property(nonatomic) BOOL onlyFavorites; // @synthesize onlyFavorites=_onlyFavorites;
@property(nonatomic) unsigned long long maxCount; // @synthesize maxCount=_maxCount;
- (void)handleChangedKeyAssetsForMemories:(id)arg1;
- (void)handleNonIncrementalFetchResultChange:(id)arg1;
- (void)handleIncrementalFetchResultChange:(id)arg1 updatedFetchResultsForMemoriesWithChangedKeyAssets:(id)arg2;
- (void)_regenerateMemoriesWithChange:(id)arg1;
- (id)_generateEntryFromMemories:(id)arg1;
- (void)generateAdditionalEntriesIfPossible;
- (void)startGeneratingMemories;
- (id)fetchOptions;
- (unsigned long long)_extendedMaxCount;

@end

