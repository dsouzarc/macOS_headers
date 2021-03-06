//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"
#import "_INPBAppBundleInfo.h"

@class NSArray, NSString, _INPBAppId, _INPBBuildId;

@interface _INPBAppBundleInfo : PBCodable <_INPBAppBundleInfo, NSSecureCoding, NSCopying>
{
    struct _has;
    BOOL __encodeLegacyGloryData;
    _INPBAppId *_appId;
    _INPBBuildId *_buildId;
    NSArray *_intentSupports;
    NSArray *_localizedProjects;
    NSArray *_supportedPlatforms;
}

+ (BOOL)supportsSecureCoding;
+ (Class)supportedPlatformsType;
+ (Class)localizedProjectsType;
+ (Class)intentSupportType;
@property(nonatomic, setter=_setEncodeLegacyGloryData:) BOOL _encodeLegacyGloryData; // @synthesize _encodeLegacyGloryData=__encodeLegacyGloryData;
@property(copy, nonatomic) NSArray *supportedPlatforms; // @synthesize supportedPlatforms=_supportedPlatforms;
@property(copy, nonatomic) NSArray *localizedProjects; // @synthesize localizedProjects=_localizedProjects;
@property(copy, nonatomic) NSArray *intentSupports; // @synthesize intentSupports=_intentSupports;
@property(retain, nonatomic) _INPBBuildId *buildId; // @synthesize buildId=_buildId;
@property(retain, nonatomic) _INPBAppId *appId; // @synthesize appId=_appId;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)supportedPlatformsAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long supportedPlatformsCount;
- (void)addSupportedPlatforms:(id)arg1;
- (void)clearSupportedPlatforms;
- (id)localizedProjectsAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long localizedProjectsCount;
- (void)addLocalizedProjects:(id)arg1;
- (void)clearLocalizedProjects;
- (id)intentSupportAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long intentSupportsCount;
- (void)addIntentSupport:(id)arg1;
- (void)clearIntentSupports;
@property(readonly, nonatomic) BOOL hasBuildId;
@property(readonly, nonatomic) BOOL hasAppId;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

