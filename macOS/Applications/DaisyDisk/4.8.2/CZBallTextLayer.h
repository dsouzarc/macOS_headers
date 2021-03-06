//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CALayerDelegate.h"

@class CALayer, NSString, TextStyles;

@interface CZBallTextLayer : NSObject <CALayerDelegate>
{
    CALayer *_layer;
    TextStyles *_textStyles;
    NSString *_text;
}

@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
@property(retain, nonatomic) TextStyles *textStyles; // @synthesize textStyles=_textStyles;
- (void).cxx_destruct;
- (void)drawText;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext *)arg2;
- (void)startFadeInAnimationWithDelay:(double)arg1;
- (void)resetTextAfterFadeOutAnimation:(double)arg1;
- (void)removeFromSuperlayer;
- (void)addToSuperlayer:(id)arg1;
- (void)dealloc;
- (id)initWithPosition:(struct CGPoint)arg1 size:(struct CGSize)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

