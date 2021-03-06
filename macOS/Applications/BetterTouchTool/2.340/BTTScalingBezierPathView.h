//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class NSBezierPath, NSColor;

__attribute__((visibility("hidden")))
@interface BTTScalingBezierPathView : NSView
{
    NSBezierPath *_bezierPath;
    NSBezierPath *_scaledPath;
    NSColor *_strokeColor;
}

@property(retain, nonatomic) NSColor *strokeColor; // @synthesize strokeColor=_strokeColor;
@property(retain, nonatomic) NSBezierPath *scaledPath; // @synthesize scaledPath=_scaledPath;
@property(retain, nonatomic) NSBezierPath *bezierPath; // @synthesize bezierPath=_bezierPath;
- (void).cxx_destruct;
- (CDStruct_f73a0172)bezierPathInfoToFitRect:(struct CGRect)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)updateStrokeColor;
- (id)initWithCoder:(id)arg1;
- (void)awakeFromNib;

@end

