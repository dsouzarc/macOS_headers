//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSCHKnobTracker.h"

@class NSTimer, TSCHChartMultiDataControl;

@interface TSCHChartMultiDataControlStepperKnobTracker : TSCHKnobTracker
{
    TSCHChartMultiDataControl *mMultiDataControl;
    unsigned long long mStartingIndex;
    unsigned long long mCurrentIndex;
    unsigned long long mMaxIndex;
    NSTimer *mTimer;
}

- (BOOL)allowHUDToDisplay;
- (BOOL)wantsAutoscroll;
- (BOOL)operationShouldBeDynamic;
- (BOOL)shouldHideSelectionHighlight;
- (BOOL)shouldHideOtherKnobs;
- (void)handleEndMovingKnob;
- (void)moveKnobToRepPosition:(struct CGPoint)arg1;
- (void)p_autoStepWithTimer:(id)arg1;
- (void)p_moveKnobOneStep;
- (void)beginMovingKnob;
- (void)dealloc;
- (id)initWithRep:(id)arg1 knob:(id)arg2 multiDataControl:(id)arg3;

@end

