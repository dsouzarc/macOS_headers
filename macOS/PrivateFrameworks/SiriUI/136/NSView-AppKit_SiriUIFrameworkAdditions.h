//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@interface NSView (AppKit_SiriUIFrameworkAdditions)
- (void)siriui_setBlendEffectEnabled:(BOOL)arg1;
- (void)siriui_makeFirstResponder;
- (id)addMaskedFilterViewWithImage:(id)arg1 withFilter:(id)arg2 color:(id)arg3;
- (void)setSubViewsEnabled:(BOOL)arg1;
- (void)siriui_disableUserInteraction;
- (void)siriui_enableUserInteraction;
- (id)siriui_heightConstraint:(double)arg1;
- (id)siriui_widthConstraint:(double)arg1;
- (id)siriui_constraintsToBaselinesOnSubview:(id)arg1 top:(double)arg2 bottom:(double)arg3;
- (id)siriui_constraintsOnSubview:(id)arg1 top:(double)arg2 bottom:(double)arg3;
- (id)siriui_constraintsOnSubview:(id)arg1 leading:(double)arg2 trailing:(double)arg3;
- (id)siriui_constraintsToBaselinesOnSubview:(id)arg1 top:(double)arg2 bottom:(double)arg3 leading:(double)arg4 trailing:(double)arg5;
- (id)siriui_constraintsOnSubview:(id)arg1 top:(double)arg2 bottom:(double)arg3 leading:(double)arg4 trailing:(double)arg5;
- (id)siriui_constraintsForPinningToTop:(double)arg1 withHeight:(double)arg2 withInsets:(struct NSEdgeInsets)arg3;
- (id)siriui_imageRepresentation;
- (void)siriui_constrainToFillSuperview;
- (void)siriui_setBackgroundColor:(id)arg1;
@end

