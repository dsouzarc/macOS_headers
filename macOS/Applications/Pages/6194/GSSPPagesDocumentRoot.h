//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <TSApplication/GSSPApplicationDocumentRoot.h>

@class GSSPPagesDocumentSetting, GSSPSize, NSString;

@interface GSSPPagesDocumentRoot : GSSPApplicationDocumentRoot
{
    GSSPPagesDocumentSetting *mSettings;
    BOOL mUsesSingleHeaderFooter;
    GSSPSize *mPageSize;
    NSString *mPaperID;
    int mOrientation;
    double mLeftMargin;
    double mRightMargin;
    double mTopMargin;
    double mBottomMargin;
    double mHeaderMargin;
    double mFooterMargin;
    BOOL mChangeTrackingEnabled;
}

+ (Class)realClass;
+ (void)registerRealGsspClass:(Class)arg1;
- (void).cxx_destruct;
- (id)description;
- (id)dspClassName;
- (id)jsonNSDictionaryValue;
- (void)populateJsonNSDictionaryValueToDictionary:(id)arg1;
- (int)p_getDiffEncodingScoreWith:(id)arg1;
- (void)p_populateStructHashKey:(struct GSSPHashKeyBuilder *)arg1;
- (unsigned long long)p_getStructHashKeyLength;
- (int)getStructHashId;
- (void)serializeRequiredFieldsWithSerializationContext:(struct GSSPSerializationContext *)arg1 withNextFieldNeedSerialize:(BOOL)arg2 diffBy:(id)arg3;
- (void)serializeOptionalFieldsWithSerializationContext:(struct GSSPSerializationContext *)arg1 withNextFieldNeedSerialize:(BOOL)arg2 diffBy:(id)arg3;
- (id)dspTypeIdString;
- (void)populateRequiredField:(int)arg1 fromContext:(struct GSSPDeserializationContext *)arg2;
- (void)populateOptionalField:(int)arg1 fromContext:(struct GSSPDeserializationContext *)arg2;
- (void)shallowCopyAllFieldsFrom:(id)arg1;
- (void)setChangeTrackingEnabled:(BOOL)arg1;
- (BOOL)changeTrackingEnabled;
- (void)setFooterMargin:(double)arg1;
- (double)footerMargin;
- (void)setHeaderMargin:(double)arg1;
- (double)headerMargin;
- (void)setBottomMargin:(double)arg1;
- (double)bottomMargin;
- (void)setTopMargin:(double)arg1;
- (double)topMargin;
- (void)setRightMargin:(double)arg1;
- (double)rightMargin;
- (void)setLeftMargin:(double)arg1;
- (double)leftMargin;
- (void)setOrientation:(int)arg1;
- (int)orientation;
- (void)setPaperID:(id)arg1;
- (id)paperID;
- (void)setPageSize:(id)arg1;
- (id)pageSize;
- (void)setUsesSingleHeaderFooter:(BOOL)arg1;
- (BOOL)usesSingleHeaderFooter;
- (void)setSettings:(id)arg1;
- (id)settings;

@end

