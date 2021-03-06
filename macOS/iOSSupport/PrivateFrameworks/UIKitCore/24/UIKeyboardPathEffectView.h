//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIView.h>

@class CADisplayLink, NSMutableArray, NSMutableIndexSet, UIKBHandwritingQuadCurvePointFIFO;

__attribute__((visibility("hidden")))
@interface UIKeyboardPathEffectView : UIView
{
    BOOL _increasedContrastEnabled;
    BOOL _done;
    UIKBHandwritingQuadCurvePointFIFO *_pointInterpolator;
    double _startTime;
    NSMutableArray *_paths;
    NSMutableIndexSet *_pointDecayQueue;
    CADisplayLink *_pointDecayDisplayLink;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CADisplayLink *pointDecayDisplayLink; // @synthesize pointDecayDisplayLink=_pointDecayDisplayLink;
@property(retain, nonatomic) NSMutableIndexSet *pointDecayQueue; // @synthesize pointDecayQueue=_pointDecayQueue;
@property(nonatomic) BOOL done; // @synthesize done=_done;
@property(nonatomic) BOOL increasedContrastEnabled; // @synthesize increasedContrastEnabled=_increasedContrastEnabled;
@property(retain, nonatomic) NSMutableArray *paths; // @synthesize paths=_paths;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) UIKBHandwritingQuadCurvePointFIFO *pointInterpolator; // @synthesize pointInterpolator=_pointInterpolator;
- (void)drawRect:(struct CGRect)arg1;
- (CDStruct_d2b197d1)_currentThemeSettings;
- (void)accessibilityValueChanged:(id)arg1;
- (long long)keyboardAppearance;
- (void)reset;
- (void)buildOut;
- (void)_clearPointInterpolators;
- (void)addPoint:(struct CGPoint)arg1 force:(double)arg2 timestamp:(double)arg3;
- (void)_addDrawingPoint:(struct CGPoint)arg1 force:(double)arg2 sentinel:(BOOL)arg3;
- (void)_displayLinkFired:(id)arg1;
- (id)_currentPath;
- (id)_pushNewPath;
- (void)didMoveToWindow;
- (int)textEffectsVisibilityLevel;
- (id)initWithFrame:(struct CGRect)arg1;

@end

