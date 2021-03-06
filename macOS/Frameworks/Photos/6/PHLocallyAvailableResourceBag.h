//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "PHRecyclableObject.h"

@class NSString;

@interface PHLocallyAvailableResourceBag : NSObject <PHRecyclableObject, NSCopying>
{
    BOOL _keyIsHintBased;
    BOOL _isDegraded;
    BOOL _isPrimaryFormat;
    BOOL _isDefaultOrientation;
    id <PLAssetID> _assetID;
    id <PLResourceDataStore> _dataStore;
    id <PLResourceDataStoreKey> _dataStoreKey;
}

@property(nonatomic) BOOL isDefaultOrientation; // @synthesize isDefaultOrientation=_isDefaultOrientation;
@property(nonatomic) BOOL isPrimaryFormat; // @synthesize isPrimaryFormat=_isPrimaryFormat;
@property(nonatomic) BOOL isDegraded; // @synthesize isDegraded=_isDegraded;
@property(nonatomic) BOOL keyIsHintBased; // @synthesize keyIsHintBased=_keyIsHintBased;
@property(retain, nonatomic) id <PLResourceDataStoreKey> dataStoreKey; // @synthesize dataStoreKey=_dataStoreKey;
@property(retain, nonatomic) id <PLResourceDataStore> dataStore; // @synthesize dataStore=_dataStore;
@property(retain, nonatomic) id <PLAssetID> assetID; // @synthesize assetID=_assetID;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)prepareForReuse;
- (id)resourceData;
- (id)resourceURL;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

