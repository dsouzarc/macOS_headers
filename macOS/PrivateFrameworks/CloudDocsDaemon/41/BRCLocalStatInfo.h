//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudDocsDaemon/BRCStatInfo.h>

@class BRCGenerationID, BRFileObjectID, NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface BRCLocalStatInfo : BRCStatInfo
{
    NSNumber *_processingStamp;
    NSString *_bouncedLogicalName;
    unsigned char _itemScope;
    unsigned int _stagedGenerationID;
    NSNumber *_documentID;
    NSNumber *_fileID;
    BRCGenerationID *_generationID;
    NSNumber *_stagedFileID;
    NSString *_physicalName;
    NSNumber *_tmpBouncedNo;
}

+ (id)_finderTagsFromRelativePath:(id)arg1;
+ (BOOL)_modeFromRelativePath:(id)arg1 isPackageFault:(BOOL)arg2;
+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) NSString *rawBouncedLogicalName; // @synthesize rawBouncedLogicalName=_bouncedLogicalName;
@property(nonatomic) unsigned char itemScope; // @synthesize itemScope=_itemScope;
@property(readonly, nonatomic) NSNumber *processingStamp; // @synthesize processingStamp=_processingStamp;
@property(readonly, nonatomic) NSNumber *tmpBouncedNo; // @synthesize tmpBouncedNo=_tmpBouncedNo;
@property(readonly, nonatomic) NSString *physicalName; // @synthesize physicalName=_physicalName;
@property(readonly, nonatomic) unsigned int stagedGenerationID; // @synthesize stagedGenerationID=_stagedGenerationID;
@property(readonly, nonatomic) NSNumber *stagedFileID; // @synthesize stagedFileID=_stagedFileID;
@property(readonly, nonatomic) BRCGenerationID *generationID; // @synthesize generationID=_generationID;
@property(readonly, nonatomic) NSNumber *fileID; // @synthesize fileID=_fileID;
@property(readonly, nonatomic) NSNumber *documentID; // @synthesize documentID=_documentID;
- (void).cxx_destruct;
- (BOOL)checkStateWithItemID:(id)arg1 logToFile:(struct __sFILE *)arg2;
- (void)_clearGenerationID;
- (void)_clearFileID;
- (void)_markLiveFromStageAsType:(BOOL)arg1;
- (void)_markLiveFromStageAsFault:(BOOL)arg1;
- (void)_updateStatMeta:(id)arg1;
- (void)_markStagedWithFileID:(id)arg1 generationID:(unsigned int)arg2 documentID:(id)arg3;
- (void)_markLostAddingBackoffWithMode:(unsigned char)arg1 appLibrary:(id)arg2;
- (void)_markFound;
- (void)_markDead;
- (void)updateAsAppLibraryRoot:(id)arg1;
- (void)_markAlmostDead;
- (void)_markReserved;
- (void)updateLocationAndMetaFromFSAtPath:(id)arg1 itemID:(id)arg2 parentGlobalID:(id)arg3 isPackageFault:(BOOL)arg4 readonlyShareChild:(BOOL)arg5;
- (void)updateFromFSAtPath:(id)arg1 itemID:(id)arg2 parentGlobalID:(id)arg3 isPackageFault:(BOOL)arg4 readonlyShareChild:(BOOL)arg5;
- (void)_updateMetadataFromFSAtPath:(id)arg1 itemID:(id)arg2 parentGlobalID:(id)arg3 isPackageFault:(BOOL)arg4 readonlyShareChild:(BOOL)arg5;
- (unsigned long long)diffAgainstLocalInfo:(id)arg1;
- (void)_clearBouncedName;
- (void)_bouncePhysicalNameToRepresentableName;
- (void)_migrateTmpBouncedNameToLocalName;
- (void)_generatedBouncedLogicalFilenameWithBounceNumber:(unsigned long long)arg1;
- (void)_moveItemAsideWithUUIDString;
- (void)_markClearedFromStage;
- (void)_setCKInfo:(id)arg1;
- (void)_setItemScope:(unsigned char)arg1;
- (void)_setParentID:(id)arg1;
- (void)setFilename:(id)arg1 forcePhysicalName:(id)arg2 serverName:(id)arg3;
- (void)setFilename:(id)arg1;
@property(readonly, nonatomic) NSString *filename;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initAsShareAcceptFaultWithName:(id)arg1 mode:(BOOL)arg2;
- (id)initWithRelativePath:(id)arg1 itemID:(id)arg2 parentGlobalID:(id)arg3;
- (id)initWithLocalStatInfo:(id)arg1;
- (id)initFromResultSet:(id)arg1 pos:(int)arg2;
- (id)description;
- (id)descriptionWithContext:(id)arg1 origName:(id)arg2;
@property(readonly, nonatomic) NSNumber *lostStamp;
@property(readonly, nonatomic) BRFileObjectID *fileObjectID;
@property(readonly, nonatomic) NSNumber *stagedFileIDForDB;
@property(readonly, nonatomic) NSString *logicalNameWithoutLocalBounce;
- (id)logicalName;

@end

