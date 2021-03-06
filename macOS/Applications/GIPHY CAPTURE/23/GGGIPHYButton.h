//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSColor, NSDictionary, NSString, NSTextField, _TtC13GIPHY_CAPTURE17GGDimmedGlassView;
@protocol GGGIPHYButtonDelegate;

@interface GGGIPHYButton : NSView
{
    BOOL _titleFontBold;
    BOOL _isEnabled;
    BOOL _innerShadowOnClick;
    BOOL _isClicked;
    BOOL _isHovered;
    int _icon;
    float _titleFontSize;
    float _iconSize;
    id <GGGIPHYButtonDelegate> _delegate;
    NSColor *_backgroundColor;
    NSColor *_hoveredBackgroundColor;
    NSString *_titleText;
    NSColor *_titleColor;
    unsigned long long _alignment;
    NSTextField *_titleLabel;
    NSTextField *_iconLabel;
    NSDictionary *_iconsDict;
    _TtC13GIPHY_CAPTURE17GGDimmedGlassView *_glassView;
}

@property(retain) _TtC13GIPHY_CAPTURE17GGDimmedGlassView *glassView; // @synthesize glassView=_glassView;
@property(retain) NSDictionary *iconsDict; // @synthesize iconsDict=_iconsDict;
@property(retain) NSTextField *iconLabel; // @synthesize iconLabel=_iconLabel;
@property(retain) NSTextField *titleLabel; // @synthesize titleLabel=_titleLabel;
@property BOOL isHovered; // @synthesize isHovered=_isHovered;
@property BOOL isClicked; // @synthesize isClicked=_isClicked;
@property(nonatomic) BOOL innerShadowOnClick; // @synthesize innerShadowOnClick=_innerShadowOnClick;
@property(nonatomic) BOOL isEnabled; // @synthesize isEnabled=_isEnabled;
@property(nonatomic) unsigned long long alignment; // @synthesize alignment=_alignment;
@property(nonatomic) float iconSize; // @synthesize iconSize=_iconSize;
@property(nonatomic) float titleFontSize; // @synthesize titleFontSize=_titleFontSize;
@property(nonatomic) BOOL titleFontBold; // @synthesize titleFontBold=_titleFontBold;
@property(retain, nonatomic) NSColor *titleColor; // @synthesize titleColor=_titleColor;
@property(retain, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;
@property(nonatomic) int icon; // @synthesize icon=_icon;
@property(retain, nonatomic) NSColor *hoveredBackgroundColor; // @synthesize hoveredBackgroundColor=_hoveredBackgroundColor;
@property(retain, nonatomic) NSColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property __weak id <GGGIPHYButtonDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setFrame:(struct CGRect)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)hideGlass;
- (void)showGlass;
- (id)getIconFontWithSize:(float)arg1;
- (id)getIconStringAttributes;
- (id)getTitleFontWithSize:(float)arg1 bold:(BOOL)arg2;
- (id)getTitleStringAttributes;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (BOOL)mouseDownCanMoveWindow;
- (void)resizeSubviews;
- (void)drawRect:(struct CGRect)arg1;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

