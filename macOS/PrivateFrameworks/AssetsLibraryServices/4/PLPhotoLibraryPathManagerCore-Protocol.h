//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, NSURL, PLFileSystemCapabilities, PLPhotoLibraryFileIdentifier;

@protocol PLPhotoLibraryPathManagerCore <NSObject>
+ (BOOL)isSystemPhotoLibraryURL:(NSURL *)arg1;
+ (BOOL)isSystemLibraryURLDefined;
+ (BOOL)setSystemLibraryURL:(NSURL *)arg1 options:(unsigned short)arg2 error:(id *)arg3;
+ (NSString *)systemLibraryBaseDirectory;
+ (NSURL *)systemLibraryURL;
@property(readonly, copy) NSString *assetUUIDRecoveryMappingPath;
@property(readonly, nonatomic) PLFileSystemCapabilities *capabilities;
@property(readonly, copy) NSString *baseDirectory;
@property(readonly, copy) NSURL *libraryURL;
- (void)setExtendedAttributesWithIdentifier:(PLPhotoLibraryFileIdentifier *)arg1 andURL:(NSURL *)arg2;
- (void)setExtendedAttributesWithIdentifier:(PLPhotoLibraryFileIdentifier *)arg1;
- (NSURL *)readOnlyUrlWithIdentifier:(PLPhotoLibraryFileIdentifier *)arg1;
- (void)externalDirectoryCreationMaskResetWithSubType:(unsigned char)arg1;
- (void)privateCacheDirectoryCreationMaskResetWithSubType:(unsigned char)arg1;
- (void)privateDirectoryCreationMaskResetWithSubType:(unsigned char)arg1;
- (void)photoDirectoryCreationMaskResetWithType:(unsigned char)arg1;
- (BOOL)isDataProtectionComplete;
- (void)setDataProtectionComplete:(BOOL)arg1;
- (NSArray *)knownDBPaths;
- (NSString *)syncInfoPath;
- (NSString *)pathToAssetsToAlbumsMapping;
- (NSString *)temporaryDragAndDropDirectoryCreateIfNeeded:(BOOL)arg1 error:(id *)arg2;
- (NSString *)temporaryFileBackedDebugDirectoryCreateIfNeeded:(BOOL)arg1 error:(id *)arg2;
@end

