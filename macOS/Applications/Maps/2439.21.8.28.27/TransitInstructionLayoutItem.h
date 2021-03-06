//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MKMultiPartAttributedString, NSArray, NSDictionary, NSFont, NSTimeZone;

__attribute__((visibility("hidden")))
@interface TransitInstructionLayoutItem : NSObject
{
    MKMultiPartAttributedString *_bestFittingMultiPartString;
    NSArray *_strings;
    NSTimeZone *_formattingTimeZone;
    NSFont *_font;
    NSDictionary *_extraTextAttributes;
    double _width;
}

@property(nonatomic) double width; // @synthesize width=_width;
@property(readonly, copy, nonatomic) NSDictionary *extraTextAttributes; // @synthesize extraTextAttributes=_extraTextAttributes;
@property(readonly, copy, nonatomic) NSFont *font; // @synthesize font=_font;
@property(readonly, copy, nonatomic) NSTimeZone *formattingTimeZone; // @synthesize formattingTimeZone=_formattingTimeZone;
@property(readonly, copy, nonatomic) NSArray *strings; // @synthesize strings=_strings;
- (void).cxx_destruct;
- (id)description;
- (id)_calculateBestFittingString;
@property(readonly, nonatomic) MKMultiPartAttributedString *bestFittingMultiPartString; // @synthesize bestFittingMultiPartString=_bestFittingMultiPartString;
- (BOOL)isEqualToLayoutItem:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)initWithStrings:(id)arg1 font:(id)arg2 width:(double)arg3 extraTextAttributes:(id)arg4;
- (id)initWithStrings:(id)arg1 font:(id)arg2 width:(double)arg3;

@end

