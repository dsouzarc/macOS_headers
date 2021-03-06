//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <QuartzCore/CALayer.h>

@class CAShapeLayer, NSString;
@protocol TSAAudioRecordingSelectionBarLayerAccessibilityDelegate;

@interface TSAAudioRecordingSelectionBarLayer : CALayer
{
    CALayer *_barLayer;
    CALayer *_knobLayer;
    CAShapeLayer *_accessoryLayer;
    id <TSAAudioRecordingSelectionBarLayerAccessibilityDelegate> _accessibilityDelegate;
    long long _barStyle;
    double _barWidth;
    NSString *_knobGravity;
    NSString *_accessibilityLabel;
}

@property(copy, nonatomic) NSString *accessibilityLabel; // @synthesize accessibilityLabel=_accessibilityLabel;
@property(copy, nonatomic) NSString *knobGravity; // @synthesize knobGravity=_knobGravity;
@property(nonatomic) double barWidth; // @synthesize barWidth=_barWidth;
@property(nonatomic) long long barStyle; // @synthesize barStyle=_barStyle;
@property(nonatomic) __weak id <TSAAudioRecordingSelectionBarLayerAccessibilityDelegate> accessibilityDelegate; // @synthesize accessibilityDelegate=_accessibilityDelegate;
- (void).cxx_destruct;
@property(nonatomic) struct CGColor *accessoryStrokeColor;
@property(nonatomic) const struct CGPath *accessoryPath;
@property(nonatomic) BOOL knobHidden;
@property(nonatomic) unsigned long long knobCornerMask;
@property(nonatomic) double knobRadius;
@property(nonatomic) struct CGColor *strokeColor;
- (void)layoutSublayers;
- (id)init;
- (void)accessibilitySetValue:(id)arg1 forAttribute:(id)arg2;
- (struct CGRect)accessibilityFrame;
- (id)accessibilityHelp;
@property(readonly, nonatomic) NSString *accessibilityValue;
- (id)accessibilityRole;
- (id)accessibilityParent;
- (BOOL)isAccessibilityElement;

@end

