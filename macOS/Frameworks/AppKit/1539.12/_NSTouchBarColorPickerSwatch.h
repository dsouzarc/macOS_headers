//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSColor, NSColorDisplayView;

__attribute__((visibility("hidden")))
@interface _NSTouchBarColorPickerSwatch : NSView
{
    NSView *_borderView;
    NSColorDisplayView *_colorView;
}

- (id)accessibilityValueAttribute;
- (BOOL)accessibilityIsValueAttributeSettable;
- (id)accessibilityRole;
- (id)accessibilityAttributeNames;
- (BOOL)isAccessibilityElement;
- (struct CGSize)intrinsicContentSize;
@property(copy) NSColor *color;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (BOOL)_shouldDoLayerPerformanceUpdates;

@end

