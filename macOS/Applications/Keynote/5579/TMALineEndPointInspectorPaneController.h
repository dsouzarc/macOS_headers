//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TMALayoutInspectingInspectorPaneController.h"

@class NSColor, NSStepper, TSDInteractiveCanvasController, TSUNoCopyDictionary;

@interface TMALineEndPointInspectorPaneController : TMALayoutInspectingInspectorPaneController
{
    CDStruct_c34523b2 mStart;
    CDStruct_c34523b2 mEnd;
    BOOL mStartEnabled;
    BOOL mEndEnabled;
    TSUNoCopyDictionary *mTrackersForLayouts;
    TSDInteractiveCanvasController *mObservingICC;
    NSStepper *mStartXStepper;
    NSStepper *mStartYStepper;
    NSStepper *mEndXStepper;
    NSStepper *mEndYStepper;
}

@property(nonatomic) NSStepper *endYStepper; // @synthesize endYStepper=mEndYStepper;
@property(nonatomic) NSStepper *endXStepper; // @synthesize endXStepper=mEndXStepper;
@property(nonatomic) NSStepper *startYStepper; // @synthesize startYStepper=mStartYStepper;
@property(nonatomic) NSStepper *startXStepper; // @synthesize startXStepper=mStartXStepper;
@property(nonatomic) BOOL endEnabled; // @synthesize endEnabled=mEndEnabled;
@property(nonatomic) BOOL startEnabled; // @synthesize startEnabled=mStartEnabled;
- (void)stopKnobTracker:(id)arg1;
- (void)delayedStopKnobTrackers:(id)arg1;
- (BOOL)commitEditing;
- (void)moveKnob:(unsigned long long)arg1 toPoint:(CDStruct_c34523b2)arg2;
- (id)layouts;
- (void)getValues;
- (void)interactiveCanvasControllerDidLayout:(id)arg1;
@property(nonatomic) double endY;
@property(nonatomic) double endX;
@property(nonatomic) double startY;
@property(nonatomic) double startX;
@property(readonly, nonatomic) NSColor *endYTextColor;
@property(readonly, nonatomic) NSColor *endXTextColor;
@property(readonly, nonatomic) NSColor *startYTextColor;
@property(readonly, nonatomic) NSColor *startXTextColor;
- (id)lineEndStepperToolTip;
- (id)lineStartStepperToolTip;
- (void)unregisterNotifications;
- (void)registerNotifications;
- (id)interactiveCanvasController;
- (void)setRepresentedObject:(id)arg1;
- (void)dealloc;
- (void)loadView;
- (id)nibName;

@end

