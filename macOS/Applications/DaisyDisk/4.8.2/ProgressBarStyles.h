//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "StylesBase.h"

@class GradientStyles, SlicedImage;

@interface ProgressBarStyles : StylesBase
{
    SlicedImage *_candyImage;
    double _grooveCornerRadius;
    double _grooveBorderWidth;
    double _candyAnimationSpeed;
    double _candyAnimationSpeedGain;
}

@property(nonatomic) double candyAnimationSpeedGain; // @synthesize candyAnimationSpeedGain=_candyAnimationSpeedGain;
@property(nonatomic) double candyAnimationSpeed; // @synthesize candyAnimationSpeed=_candyAnimationSpeed;
@property(nonatomic) double grooveBorderWidth; // @synthesize grooveBorderWidth=_grooveBorderWidth;
@property(nonatomic) double grooveCornerRadius; // @synthesize grooveCornerRadius=_grooveCornerRadius;
@property(retain, nonatomic) SlicedImage *candyImage; // @synthesize candyImage=_candyImage;
- (void).cxx_destruct;

// Remaining properties
@property(copy, nonatomic) GradientStyles *fillGradient; // @dynamic fillGradient;
@property(copy, nonatomic) GradientStyles *grooveGradient; // @dynamic grooveGradient;
@property(copy, nonatomic) GradientStyles *indeterminateFillGradient; // @dynamic indeterminateFillGradient;

@end

