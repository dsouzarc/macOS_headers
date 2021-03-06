//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Photos/PHAssetCollection.h>

@class NSNumber, NSString;

@interface PHCloudSharedAlbum : PHAssetCollection
{
    BOOL _owned;
    BOOL _cloudMultipleContributorsEnabled;
    short _cloudAlbumSubtype;
    NSString *_cloudOwnerFirstName;
    NSString *_cloudOwnerLastName;
    NSString *_cloudOwnerFullName;
    NSNumber *_cloudOwnerEmailKey;
}

+ (id)identifierCode;
+ (id)fetchType;
+ (id)managedEntityName;
+ (id)propertiesToFetchWithHint:(unsigned long long)arg1;
@property(readonly, retain, nonatomic) NSNumber *cloudOwnerEmailKey; // @synthesize cloudOwnerEmailKey=_cloudOwnerEmailKey;
@property(readonly, retain, nonatomic) NSString *cloudOwnerFullName; // @synthesize cloudOwnerFullName=_cloudOwnerFullName;
@property(readonly, retain, nonatomic) NSString *cloudOwnerLastName; // @synthesize cloudOwnerLastName=_cloudOwnerLastName;
@property(readonly, retain, nonatomic) NSString *cloudOwnerFirstName; // @synthesize cloudOwnerFirstName=_cloudOwnerFirstName;
@property(readonly, nonatomic) short cloudAlbumSubtype; // @synthesize cloudAlbumSubtype=_cloudAlbumSubtype;
@property(readonly, nonatomic, getter=isCloudMultipleContributorsEnabled) BOOL cloudMultipleContributorsEnabled; // @synthesize cloudMultipleContributorsEnabled=_cloudMultipleContributorsEnabled;
@property(readonly, nonatomic, getter=isOwned) BOOL owned; // @synthesize owned=_owned;
- (void).cxx_destruct;
- (id)description;
- (BOOL)canPerformEditOperation:(long long)arg1;
- (BOOL)collectionHasFixedOrder;
- (id)localizedSharedByLabelAllowsEmail:(BOOL)arg1;
- (BOOL)isMultipleContributorCloudSharedAlbum;
- (BOOL)isOwnedCloudSharedAlbum;
- (id)initWithFetchDictionary:(id)arg1 propertyHint:(unsigned long long)arg2 photoLibrary:(id)arg3;
- (Class)changeRequestClass;

@end

