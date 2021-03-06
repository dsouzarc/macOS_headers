//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "StylesBase.h"

@class NSColor, TextStyles;

@interface DropAreaMarchingAntsViewStyles : StylesBase
{
    NSColor *_backgroundColor;
    double _frameCornerRadius;
    double _framePadding;
    NSColor *_frameStrokeColor;
    double _frameStrokeDashLength;
    double _frameStrokeGapLength;
    double _frameStrokeWidth;
    double _marchingAntsAnimationPeriod;
    double _iconBottomMargin;
    double _iconRightMargin;
}

@property(nonatomic) double iconRightMargin; // @synthesize iconRightMargin=_iconRightMargin;
@property(nonatomic) double iconBottomMargin; // @synthesize iconBottomMargin=_iconBottomMargin;
@property(nonatomic) double marchingAntsAnimationPeriod; // @synthesize marchingAntsAnimationPeriod=_marchingAntsAnimationPeriod;
@property(nonatomic) double frameStrokeWidth; // @synthesize frameStrokeWidth=_frameStrokeWidth;
@property(nonatomic) double frameStrokeGapLength; // @synthesize frameStrokeGapLength=_frameStrokeGapLength;
@property(nonatomic) double frameStrokeDashLength; // @synthesize frameStrokeDashLength=_frameStrokeDashLength;
@property(retain, nonatomic) NSColor *frameStrokeColor; // @synthesize frameStrokeColor=_frameStrokeColor;
@property(nonatomic) double framePadding; // @synthesize framePadding=_framePadding;
@property(nonatomic) double frameCornerRadius; // @synthesize frameCornerRadius=_frameCornerRadius;
@property(retain, nonatomic) NSColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
- (void).cxx_destruct;

// Remaining properties
@property(copy, nonatomic) TextStyles *text; // @dynamic text;

@end

