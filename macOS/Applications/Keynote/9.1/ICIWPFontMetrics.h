//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface ICIWPFontMetrics : NSObject
{
    float _fontSize;
    float _lineHeight;
}

+ (id)fontMetricsWithParagraphStyle:(id)arg1 fontSize:(float)arg2;
@property(readonly, nonatomic) float lineHeight; // @synthesize lineHeight=_lineHeight;
@property(readonly, nonatomic) float fontSize; // @synthesize fontSize=_fontSize;
- (id)initWithFontSize:(float)arg1 lineHeight:(float)arg2;

@end

