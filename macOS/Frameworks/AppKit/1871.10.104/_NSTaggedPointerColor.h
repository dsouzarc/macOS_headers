//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSColor.h>

__attribute__((visibility("hidden")))
@interface _NSTaggedPointerColor : NSColor
{
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)alloc;
- (void)encodeWithCoder:(id)arg1;
- (Class)classForCoder;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (void)setStroke;
- (void)setFill;
- (void)set;
- (struct CGColor *)CGColor;
- (struct CGColor *)_createCGColorWithAlpha:(double)arg1;
- (id)colorWithAlphaComponent:(double)arg1;
- (double)whiteComponent;
- (void)getWhite:(double *)arg1 alpha:(double *)arg2;
- (double)brightnessComponent;
- (double)saturationComponent;
- (double)hueComponent;
- (void)getHue:(double *)arg1 saturation:(double *)arg2 brightness:(double *)arg3 alpha:(double *)arg4;
- (double)blueComponent;
- (double)greenComponent;
- (double)redComponent;
- (void)getRed:(double *)arg1 green:(double *)arg2 blue:(double *)arg3 alpha:(double *)arg4;
- (double)alphaComponent;
- (void)getComponents:(double *)arg1;
- (long long)numberOfComponents;
- (id)colorUsingColorSpace:(id)arg1;
- (id)colorSpace;
- (id)colorUsingColorSpaceName:(id)arg1 device:(id)arg2;
- (id)colorSpaceName;
- (id)colorUsingType:(long long)arg1;
- (long long)type;

@end

