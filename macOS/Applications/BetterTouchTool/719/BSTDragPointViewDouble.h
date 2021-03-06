//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSColor;

__attribute__((visibility("hidden")))
@interface BSTDragPointViewDouble : NSView
{
    BOOL _dashedBorder;
    NSColor *_backgroundColor;
    NSColor *_borderColor;
    long long _borderWidth;
    long long _cornerRadius;
}

@property(nonatomic) long long cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(nonatomic) long long borderWidth; // @synthesize borderWidth=_borderWidth;
@property(retain, nonatomic) NSColor *borderColor; // @synthesize borderColor=_borderColor;
@property(retain, nonatomic) NSColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) BOOL dashedBorder; // @synthesize dashedBorder=_dashedBorder;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

