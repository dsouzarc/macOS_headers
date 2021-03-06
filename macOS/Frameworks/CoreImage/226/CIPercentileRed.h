//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CIPercentileRed : CIFilter
{
    CIImage *inputImage;
    NSNumber *inputPercentile;
    NSNumber *inputCount;
    NSNumber *inputScale;
    NSNumber *inputNormalize;
    NSNumber *inputClip;
    NSNumber *inputHard;
}

+ (id)customAttributes;
@property(retain, nonatomic) NSNumber *inputHard; // @synthesize inputHard;
@property(retain, nonatomic) NSNumber *inputClip; // @synthesize inputClip;
@property(retain, nonatomic) NSNumber *inputNormalize; // @synthesize inputNormalize;
@property(retain, nonatomic) NSNumber *inputScale; // @synthesize inputScale;
@property(retain, nonatomic) NSNumber *inputCount; // @synthesize inputCount;
@property(retain, nonatomic) NSNumber *inputPercentile; // @synthesize inputPercentile;
- (id)outputImage;

@end

