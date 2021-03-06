//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoPrintProduct/KHModel.h>

@class NSString;

@interface KHTextStyleLocalization : KHModel
{
    long long _styleId;
    NSString *_languageCode;
    NSString *_font;
    long long _fontSize;
    double _leading;
    double _lineSpacing;
    double _kerning;
    long long _productID;
}

+ (id)modelWithDictionary:(id)arg1 inDatabase:(id)arg2;
+ (id)modelWithDictionary:(id)arg1;
+ (id)localizationForTextStyle:(long long)arg1 language:(id)arg2 fromDatabase:(id)arg3;
+ (id)modelWithLocalizationString:(id)arg1 inDatabase:(id)arg2;
+ (id)modelWithLocalizationString:(id)arg1;
- (void)applyDictionaryProperties:(id)arg1;
- (id)stringValue;
- (void)applyLocalizationString:(id)arg1;
- (void)setLineSpacing:(double)arg1;
- (void)cacheLineSpacing:(double)arg1;
- (double)lineSpacing;
- (void)setProductID:(long long)arg1;
- (void)cacheProductID:(long long)arg1;
- (long long)productID;
- (void)setKerning:(double)arg1;
- (void)cacheKerning:(double)arg1;
- (double)kerning;
- (void)setLeading:(double)arg1;
- (void)cacheLeading:(double)arg1;
- (double)leading;
- (void)setFontSize:(long long)arg1;
- (void)cacheFontSize:(long long)arg1;
- (long long)fontSize;
- (void)setFont:(id)arg1;
- (void)cacheFont:(id)arg1;
- (id)font;
- (void)setLanguageCode:(id)arg1;
- (void)cacheLanguageCode:(id)arg1;
- (id)languageCode;
- (void)setStyleId:(long long)arg1;
- (void)cacheStyleId:(long long)arg1;
- (long long)styleId;
- (void)dealloc;

@end

