//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class NSColor, NSImage;

@interface CalUILayerBackedView : NSView
{
    BOOL _acceptsFirstResponderStatus;
    BOOL _settableIsOpaque;
    BOOL _overrideAllowsVibrancy;
    BOOL _overrideAllowsVibrancyValue;
    CDUnknownBlockType _updateLayerBlock;
    NSImage *_image;
    NSColor *_backgroundColor;
    struct CGSize _contentSize;
    struct CGRect _contentsCenter;
}

+ (void)disableAnimatedActionsForLayer:(id)arg1;
+ (void)disableAnimatedActionsForLayer:(id)arg1 excludingPosition:(BOOL)arg2;
+ (void)disableAnimatedActionsForLayer:(id)arg1 excludingPosition:(BOOL)arg2 excludingBounds:(BOOL)arg3;
+ (void)updateContentsAttributesForView:(id)arg1 image:(id)arg2 contentCenter:(struct CGRect)arg3;
+ (id)viewWithImage:(id)arg1;
+ (id)viewWithImage:(id)arg1 isOpaque:(BOOL)arg2;
+ (id)viewWithSRGBRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
+ (id)viewWithSRGBRed:(double)arg1 green:(double)arg2 blue:(double)arg3;
+ (id)viewWithColor:(id)arg1 isOpaque:(BOOL)arg2;
+ (id)view;
@property(nonatomic) BOOL overrideAllowsVibrancyValue; // @synthesize overrideAllowsVibrancyValue=_overrideAllowsVibrancyValue;
@property(nonatomic) BOOL overrideAllowsVibrancy; // @synthesize overrideAllowsVibrancy=_overrideAllowsVibrancy;
@property BOOL settableIsOpaque; // @synthesize settableIsOpaque=_settableIsOpaque;
@property struct CGRect contentsCenter; // @synthesize contentsCenter=_contentsCenter;
@property struct CGSize contentSize; // @synthesize contentSize=_contentSize;
@property(retain) NSColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(retain) NSImage *image; // @synthesize image=_image;
@property(copy) CDUnknownBlockType updateLayerBlock; // @synthesize updateLayerBlock=_updateLayerBlock;
@property BOOL acceptsFirstResponderStatus; // @synthesize acceptsFirstResponderStatus=_acceptsFirstResponderStatus;
- (void).cxx_destruct;
- (BOOL)accessibilityIsIgnored;
- (void)disableAnimatedLayerActions;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (BOOL)acceptsFirstResponder;
- (void)updateLayer;
- (void)updateContentsAttributes;
- (void)setContentsImageImmediate:(id)arg1 contentCenter:(struct CGRect)arg2;
- (void)setContentsImageImmediate:(id)arg1;
- (void)setContentsImage:(id)arg1 contentCenter:(struct CGRect)arg2;
- (void)setContentsImage:(id)arg1;
- (void)setContentsBackgroundColor:(id)arg1;
- (void)setIntrinsicContentSize:(struct CGSize)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)setOverrideAllowsVibrancy:(BOOL)arg1 value:(BOOL)arg2;
- (BOOL)allowsVibrancy;
- (BOOL)isOpaque;
- (id)initWithImage:(id)arg1;
- (id)initWithImage:(id)arg1 isOpaque:(BOOL)arg2;
- (id)initWithSRGBRed:(double)arg1 green:(double)arg2 blue:(double)arg3;
- (id)initWithSRGBRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
- (id)initWithColor:(id)arg1 isOpaque:(BOOL)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

