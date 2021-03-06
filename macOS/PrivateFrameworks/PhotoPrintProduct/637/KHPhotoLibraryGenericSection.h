//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "KHPhotoGroupCollectionProtocol.h"
#import "KHPhotoLibrarySection.h"

@class NSArray, NSLock, NSMutableArray, NSString;

@interface KHPhotoLibraryGenericSection : NSObject <KHPhotoLibrarySection, KHPhotoGroupCollectionProtocol>
{
    id <KHPhotoGroupCollectionDelegate> _pageLayoutDelegate;
    NSMutableArray *_collections;
    NSLock *_collectionsLock;
    BOOL _needsHydration;
    NSString *_identifier;
    NSString *_title;
}

@property(readonly, nonatomic) BOOL needsHydration; // @synthesize needsHydration=_needsHydration;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
@property __weak id <KHPhotoGroupCollectionDelegate> pageLayoutDelegate;
- (id)photoWithURL:(id)arg1;
- (id)pageLayoutPhotoGroupAtIndexPath:(id)arg1;
- (long long)pageLayoutNumberOfItemsInSection:(long long)arg1;
- (long long)pageLayoutNumberOfSections;
@property(readonly) BOOL pageLayoutDisplayContentsOfSingleGroup;
@property(readonly) NSString *pageLayoutLocalizedTitle;
- (id)_findCollectionForIdentifier:(id)arg1 inCollection:(id)arg2;
- (id)collectionForIdentifier:(id)arg1;
- (id)collectionAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long numberOfCollections;
- (void)removeAllCollections;
- (void)removeCollection:(id)arg1;
- (void)addCollection:(id)arg1;
- (void)addCollectionsFromArray:(id)arg1;
- (void)_setIdentifier:(id)arg1;
@property(readonly, nonatomic) NSArray *allCollections;
- (id)init;
- (id)initWithTitle:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) BOOL hydrating;
@property(readonly, nonatomic) id iconImage;
@property(readonly) NSString *pageLayoutImageName;
@property(readonly) NSString *pageLayoutSelectedImageName;
@property(readonly) Class superclass;

@end

