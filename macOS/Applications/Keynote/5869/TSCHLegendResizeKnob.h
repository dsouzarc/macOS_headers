//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSCHLegendKnob.h"

@interface TSCHLegendResizeKnob : TSCHLegendKnob
{
    int mEdge;
}

@property(readonly) int edge; // @synthesize edge=mEdge;
- (void)updateHUDForRep:(id)arg1 unscaledPoint:(struct CGPoint)arg2 unscaledDelta:(struct CGPoint)arg3;
- (struct CGPoint)constrainedKnobDragPosition:(struct CGPoint)arg1 fromPosition:(struct CGPoint)arg2 startingLegendFrame:(struct CGRect)arg3 forTracker:(id)arg4;
- (id)completionCommandActionString;
- (BOOL)isSimilarToKnob:(id)arg1;
- (struct CGRect)legendModelFrameForTracker:(id)arg1 info:(id)arg2 delta:(struct CGPoint)arg3;
- (BOOL)shouldUpdateRightEdgeForTracker:(id)arg1;
- (BOOL)shouldUpdateLeftEdgeForTracker:(id)arg1;
- (id)knobImage;
- (id)initWithEdge:(int)arg1 onRep:(id)arg2;

@end

