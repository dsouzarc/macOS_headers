//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <QuartzCore/CALayer.h>

#import "TSCHMultiDataElementShapeLayer-Protocol.h"

@interface TSCHMultiDataScatterSeriesRenderingElementShapeLayer : CALayer <TSCHMultiDataElementShapeLayer>
{
}

- (id)currentValueLayer;
- (BOOL)aboveIntercept;
- (void)updateElementFrame:(struct CGRect)arg1 forSeries:(id)arg2 addingAnimationsToAnimationInfo:(id)arg3;
- (void)updateElementFrameToNullForSeries:(id)arg1 addingAnimationsToAnimationInfo:(id)arg2;
- (void)p_addAnimationsForUpdatingImage:(struct CGImage *)arg1 frame:(struct CGRect)arg2 toAnimationInfo:(id)arg3;
- (id)chartRep;
- (void)setFill:(id)arg1 stroke:(id)arg2 withViewScale:(double)arg3;

@end

