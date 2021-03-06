//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PhotoLibraryServices/PLAssetContainerChangeNotification.h>

#import <PhotoLibraryServices/PLDerivedNotification-Protocol.h>
#import <PhotoLibraryServices/PLIndexMapperDataSource-Protocol.h>

@class NSIndexSet, NSString, PLFilteredAlbum, PLIndexMapper;

@interface PLFilteredAlbumChangeNotification : PLAssetContainerChangeNotification <PLIndexMapperDataSource, PLDerivedNotification>
{
    PLFilteredAlbum *_album;
    NSIndexSet *_oldFilteredIndexes;
    NSIndexSet *_filteredIndexes;
    PLIndexMapper *_indexMapper;
    PLAssetContainerChangeNotification *_backingNotification;
}

+ (id)notificationForDerivedObject:(id)arg1 priorChangeState:(id)arg2 forBackingObjectNotification:(id)arg3;
- (void).cxx_destruct;
- (id)_changedObjects;
- (BOOL)_getOldSet:(id *)arg1 newSet:(id *)arg2;
- (id)_diffDescription;
@property(readonly, copy) NSString *description;
- (BOOL)countDidChange;
- (BOOL)keyAssetDidChange;
- (BOOL)titleDidChange;
- (BOOL)shouldReload;
- (id)album;
- (id)object;
- (id)initWithFilteredAlbum:(id)arg1 priorChangeState:(id)arg2 albumChangeNotification:(id)arg3;
- (id)init;
- (BOOL)shouldIncludeObjectAtIndex:(unsigned long long)arg1;
@property(copy, nonatomic) NSIndexSet *filteredIndexes;
@property(readonly, retain, nonatomic) PLIndexMapper *indexMapper;
@property(readonly, retain, nonatomic) NSIndexSet *updatedFilteredIndexes;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

