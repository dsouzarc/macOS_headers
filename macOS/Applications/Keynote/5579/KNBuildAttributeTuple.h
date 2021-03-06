//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSPObject.h"

#import "GSSPAutoEncodable-Protocol.h"
#import "NSCopying-Protocol.h"

@class KNBuild, KNBuildAttributeValue, KNBuildChunk, KNBuildChunkIdentifier, NSString, NSUUID, TSKCommand;
@protocol KNBuildOrChunkUpdatingCommand;

@interface KNBuildAttributeTuple : TSPObject <GSSPAutoEncodable, NSCopying>
{
    NSString *_property;
    KNBuildAttributeValue *_attributeValue;
    KNBuildChunkIdentifier *_buildChunkIdentifier;
    NSUUID *_buildId;
    BOOL _definedAttributeValue;
    BOOL _definedBuildChunkIdentifier;
    BOOL _definedBuildId;
}

+ (id)tupleWithChunk:(id)arg1 referent:(unsigned long long)arg2;
+ (id)tupleForBuild:(id)arg1 property:(id)arg2 value:(id)arg3;
+ (id)tupleWithChunk:(id)arg1 property:(id)arg2 value:(id)arg3;
+ (id)oldTuplesRunningCommandToSetValueFromTuples:(id)arg1 ignoringTuplesForShadowedObjectsOnSlide:(id)arg2;
+ (id)p_chunksAssociatedWithBuild:(id)arg1;
+ (id)tuplesToFixReferentsStartingWithChunk:(id)arg1 shouldIncludeNextChunk:(BOOL)arg2 shouldIncludeAssociatedChunks:(BOOL)arg3;
@property(readonly, nonatomic) KNBuildAttributeValue *value; // @synthesize value=_attributeValue;
@property(readonly, nonatomic) NSString *property; // @synthesize property=_property;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isValidForSlide:(id)arg1;
@property(readonly, nonatomic) BOOL isChunkTuple;
@property(readonly, nonatomic) BOOL isBuildTuple;
@property(readonly, nonatomic) KNBuild *build;
@property(readonly, nonatomic) KNBuildChunk *chunk;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithChunk:(id)arg1 property:(id)arg2 value:(id)arg3;
- (id)initWithBuild:(id)arg1 property:(id)arg2 value:(id)arg3;
- (id)initWithBuild:(id)arg1 chunk:(id)arg2 property:(id)arg3 value:(id)arg4;
- (void)populateGSSPBuildAttributeTuple:(id)arg1 withEncodeContext:(struct GSSPEncodeConversionContext *)arg2;
- (void)populateGSSPMessageInstance:(id)arg1 withContext:(struct GSSPEncodeConversionContext *)arg2;
- (id)newGsspMessageInstance;
- (id)gsspMessageInstance;
- (int)gsspSharingFlag;
- (id)initWithGSSPMessage:(id)arg1 andContext:(struct GSSPDecodeConversionContext *)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (void)saveToArchive:(struct BuildAttributeTupleArchive *)arg1 archiver:(id)arg2;
- (void)loadFromArchive:(const struct BuildAttributeTupleArchive *)arg1 unarchiver:(id)arg2;
@property(readonly, nonatomic) TSKCommand<KNBuildOrChunkUpdatingCommand> *commandToSetValue;

@end

