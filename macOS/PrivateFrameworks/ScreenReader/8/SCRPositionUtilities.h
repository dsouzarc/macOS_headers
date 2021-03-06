//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface SCRPositionUtilities : NSObject
{
}

+ (long long)_precisionForMeasurement:(id)arg1 supportsPrecision:(BOOL)arg2;
+ (id)_measurementForPixels:(double)arg1 convertToUnit:(long long)arg2;
+ (id)_picasDescriptionForPixelValue:(double)arg1;
+ (id)_pixelDescriptionForPixelValue:(double)arg1;
+ (id)_descriptionForMeasurement:(id)arg1 precision:(unsigned long long)arg2;
+ (id)localizedDescriptionForPixelValue:(double)arg1 unit:(long long)arg2 precision:(unsigned long long)arg3;
+ (id)localizedDescriptionForPixelValue:(double)arg1 unit:(long long)arg2 supportsPrecision:(BOOL)arg3;
+ (id)descriptionForDouble:(double)arg1 precision:(unsigned long long)arg2;
+ (id)numberFormatterWithPrecision:(unsigned long long)arg1;
+ (id)sharedNumberFormatter;
+ (id)sharedMeasurementFormatter;

@end

