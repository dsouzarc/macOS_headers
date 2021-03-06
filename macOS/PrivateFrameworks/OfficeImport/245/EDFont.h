//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <OfficeImport/EDImmutableObject-Protocol.h>
#import <OfficeImport/NSCopying-Protocol.h>

@class EDColorReference, EDResources, NSString;

@interface EDFont : NSObject <NSCopying, EDImmutableObject>
{
    EDResources *mResources;
    NSString *mName;
    EDColorReference *mColorReference;
    int mUnderline;
    int mScript;
    double mHeightInTwips;
    int mCharSet;
    int mFamily;
    unsigned int mWeight;
    _Bool mBold;
    _Bool mItalic;
    _Bool mShadow;
    _Bool mStrike;
    _Bool mOutline;
    _Bool mUnderlineOverridden;
    _Bool mStrikeOverridden;
    _Bool mBoldOverridden;
    _Bool mWeightOverridden;
    _Bool mItalicOverridden;
    _Bool mHeightOverridden;
    _Bool mNameOverridden;
    _Bool mDoNotModify;
}

+ (id)fontWithResources:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)setDoNotModify:(_Bool)arg1;
- (void)setWeight:(unsigned int)arg1;
- (_Bool)isWeightOverridden;
- (unsigned int)weight;
- (void)setFamily:(int)arg1;
- (int)family;
- (void)setCharSet:(int)arg1;
- (int)charSet;
- (void)setHeight:(double)arg1;
- (_Bool)isHeightOverridden;
- (double)height;
- (void)setStrike:(_Bool)arg1;
- (_Bool)isStrikeOverridden;
- (_Bool)isStrike;
- (void)setOutline:(_Bool)arg1;
- (_Bool)isOutline;
- (void)setShadow:(_Bool)arg1;
- (_Bool)isShadow;
- (void)setItalic:(_Bool)arg1;
- (_Bool)isItalicOverridden;
- (_Bool)isItalic;
- (void)setBold:(_Bool)arg1;
- (_Bool)isBoldOverridden;
- (_Bool)isBold;
- (void)setColor:(id)arg1;
- (id)color;
- (_Bool)isNameOverridden;
- (void)setName:(id)arg1;
- (id)name;
- (void)setUnderline:(int)arg1;
- (_Bool)isUnderlineOverridden;
- (int)underline;
- (void)setScript:(int)arg1;
- (int)script;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToFont:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithResources:(id)arg1;
- (void)setColorReference:(id)arg1;
- (id)colorReference;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

