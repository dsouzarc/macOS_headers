//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GQDNameMappable.h"
#import "ICExportable.h"

@class GQDColor, GQDRStrokePattern, NSString;

@interface GQDRStroke : NSObject <ICExportable, GQDNameMappable>
{
    float mMiterLimit;
    float mWidth;
    int mCap;
    int mJoin;
    GQDColor *mColor;
    struct __CFString *mName;
    unsigned int mRandomSeed;
    GQDRStrokePattern *mPattern;
}

+ (const struct StateSpec *)stateForReading;
- (int)readAttributesFromReader:(struct _xmlTextReader *)arg1;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)randomSeed;
- (id)pattern;
- (struct __CFString *)name;
- (id)color;
- (int)join;
- (int)cap;
- (float)width;
- (float)miterLimit;
- (void)dealloc;
- (void)setPattern:(id)arg1;
- (void)setName:(struct __CFString *)arg1;
- (void)setColor:(id)arg1;
- (void)setJoin:(int)arg1;
- (void)setCap:(int)arg1;
- (void)setRandomSeed:(unsigned int)arg1;
- (void)setWidth:(float)arg1;
- (void)setMiterLimit:(float)arg1;
- (id)initWithTSDStroke:(id)arg1 exporter:(id)arg2;
- (BOOL)encodeWithExporter:(id)arg1;
- (void)encodeAttributesWithExporter:(id)arg1;
- (char *)elementName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

