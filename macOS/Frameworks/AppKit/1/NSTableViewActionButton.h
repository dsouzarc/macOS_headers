//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSControl.h>

#import "NSAccessibilityButton.h"

@class NSColor, NSImage, NSImageView, NSString, NSTableViewRowAction, NSTextField;

__attribute__((visibility("hidden")))
@interface NSTableViewActionButton : NSControl <NSAccessibilityButton>
{
    NSColor *_backgroundColor;
    NSTableViewRowAction *_rowAction;
    struct CGSize _requiredSize;
    NSTextField *_label;
    NSImageView *_imageView;
    BOOL _isHighlighted;
    long long _alignment;
}

+ (id)keyPathsForValuesInvalidatingLayout;
+ (id)keyPathsForValuesInvalidatingDisplay;
@property struct CGSize requiredSize; // @synthesize requiredSize=_requiredSize;
@property(retain) NSTableViewRowAction *rowAction; // @synthesize rowAction=_rowAction;
@property long long alignment; // @synthesize alignment=_alignment;
@property(getter=isHighlighted) BOOL highlighted; // @synthesize highlighted=_isHighlighted;
@property(copy) NSColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
- (BOOL)accessibilityPerformPress;
- (id)accessibilityLabel;
- (id)accessibilityRole;
- (BOOL)isAccessibilityElement;
- (void)mouseDown:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1;
- (BOOL)isFlipped;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layout;
- (CDStruct_a26f6e08)layoutStateForBounds:(struct CGRect)arg1;
- (void)setFrameSize:(struct CGSize)arg1;
- (void)updateLayer;
- (BOOL)wantsLayer;
@property(copy) NSImage *image;
@property(copy) NSString *title;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

