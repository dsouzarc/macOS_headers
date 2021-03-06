//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSSet;

@interface CUICommonAssetStorage : NSObject
{
    struct _carheader *_header;
    struct _carextendedMetadata *_extendedMetadata;
    struct _renditionkeyfmt *_keyfmt;
    void *_imagedb;
    void *_colordb;
    void *_fontdb;
    void *_fontsizedb;
    void *_zcglyphdb;
    void *_zcbezeldb;
    void *_facetKeysdb;
    void *_bitmapKeydb;
    void *_appearancedb;
    NSData *_globals;
    unsigned int _swap:1;
    unsigned int _isMemoryMapped:1;
    unsigned int _reserved:30;
    NSSet *_externalTags;
    unsigned short _renditionInfoCacheLookup[20];
    id _renditionInfoCache[20];
    struct os_unfair_lock_s _lock;
    struct os_unfair_lock_s _renditionInfoCacheLock;
}

+ (BOOL)isValidAssetStorageWithURL:(id)arg1;
+ (BOOL)isValidAssetStorageWithBytes:(const void *)arg1 length:(unsigned long long)arg2;
+ (void)initialize;
@property(nonatomic) NSData *globals; // @synthesize globals=_globals;
@property(nonatomic) void *appearancedb; // @synthesize appearancedb=_appearancedb;
@property(nonatomic) void *bitmapKeydb; // @synthesize bitmapKeydb=_bitmapKeydb;
@property(nonatomic) void *facetKeysdb; // @synthesize facetKeysdb=_facetKeysdb;
@property(nonatomic) void *zcbezeldb; // @synthesize zcbezeldb=_zcbezeldb;
@property(nonatomic) void *zcglyphdb; // @synthesize zcglyphdb=_zcglyphdb;
@property(nonatomic) void *fontsizedb; // @synthesize fontsizedb=_fontsizedb;
@property(nonatomic) void *fontdb; // @synthesize fontdb=_fontdb;
@property(nonatomic) void *colordb; // @synthesize colordb=_colordb;
@property(nonatomic) void *imagedb; // @synthesize imagedb=_imagedb;
@property(nonatomic) struct _renditionkeyfmt *keyfmt; // @synthesize keyfmt=_keyfmt;
@property(nonatomic) struct _carextendedMetadata *extendedMetadata; // @synthesize extendedMetadata=_extendedMetadata;
@property(nonatomic) struct _carheader *header; // @synthesize header=_header;
- (id)appearances;
- (id)nameForAppearanceIdentifier:(unsigned short)arg1;
- (unsigned short)appearanceIdentifierForName:(id)arg1;
- (int)validateBitmapInfo;
- (void)_buildBitmapInfoIntoDictionary:(id)arg1;
- (void)_addBitmapIndexForNameIdentifier:(unsigned short)arg1 attribute:(int)arg2 withValue:(unsigned short)arg3 toDictionary:(id)arg4;
- (void)enumerateBitmapIndexUsingBlock:(CDUnknownBlockType)arg1;
- (id)externalTags;
- (float)fontSizeForFontSizeType:(id)arg1;
- (BOOL)getBaselineOffset:(float *)arg1 forFontType:(id)arg2;
- (BOOL)getFontName:(id *)arg1 baselineOffset:(float *)arg2 forFontType:(id)arg3;
- (const struct FontValue *)_fontValueForFontType:(id)arg1;
- (BOOL)hasColorForName:(const char *)arg1;
- (BOOL)getColor:(struct _colordef *)arg1 forName:(const char *)arg2;
- (id)zeroCodeBezelList;
- (id)zeroCodeGlyphList;
- (id)_zeroCodeListFromTree:(const void *)arg1;
- (void)_swapZeroCodeInformation:(CDStruct_c0454aff *)arg1;
- (id)renditionNameForKeyBaseList:(struct _renditionkeytoken *)arg1;
- (id)renditionNameForKeyList:(struct _renditionkeytoken *)arg1;
- (id)allRenditionNames;
- (const struct _renditionkeytoken *)renditionKeyForName:(const char *)arg1 hotSpot:(struct CGPoint *)arg2;
- (struct _renditionkeytoken)_swapRenditionKeyToken:(struct _renditionkeytoken)arg1;
- (id)renditionInfoForIdentifier:(unsigned short)arg1;
- (void)enumerateKeysAndObjectsWithoutIgnoringUsingBlock:(CDUnknownBlockType)arg1;
- (BOOL)enumerateKeysAndObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (id)assetKeysMatchingBlock:(CDUnknownBlockType)arg1;
- (id)allAssetKeys;
- (id)assetForKey:(id)arg1;
- (BOOL)assetExistsForKeyData:(const void *)arg1 length:(unsigned long long)arg2;
- (BOOL)assetExistsForKey:(id)arg1;
- (void)_swapRenditionKeyArray:(unsigned short *)arg1;
- (id)authoringTool;
- (id)deploymentPlatformVersion;
- (id)deploymentPlatform;
- (id)thinningArguments;
- (unsigned int)colorSpaceID;
- (unsigned int)associatedChecksum;
- (id)uuid;
- (unsigned int)renditionCount;
- (const char *)mainVersionString;
- (const char *)versionString;
- (BOOL)usesCUISystemThemeRenditionKey;
- (long long)maximumRenditionKeyTokenCount;
- (id)catalogGlobalData;
- (const struct _renditionkeyfmt *)keyFormat;
- (id)keyFormatData;
- (int)keySemantics;
- (long long)storageTimestamp;
- (long long)_storagefileTimestamp;
- (unsigned int)schemaVersion;
- (unsigned int)coreuiVersion;
- (unsigned int)storageVersion;
- (void)dealloc;
- (id)description;
- (id)path;
- (struct _BOMStorage *)_bomStorage;
- (BOOL)_commonInitWithStorage:(struct _BOMStorage *)arg1 forWritting:(BOOL)arg2;
- (id)initWithBytes:(const void *)arg1 length:(unsigned long long)arg2;
- (id)initWithPath:(id)arg1 forWriting:(BOOL)arg2;
- (id)initWithPath:(id)arg1;
- (BOOL)swapped;
- (void)_swapKeyFormat;
- (void)_swapHeader;
- (void)_bringHeaderInfoUpToDate;
- (void)_initDefaultHeaderVersion:(double)arg1 versionString:(const char *)arg2;
- (void)setExternalTags:(id)arg1;
- (struct os_unfair_lock_s *)renditionInfoCacheLock;
- (struct os_unfair_lock_s *)lock;

@end

