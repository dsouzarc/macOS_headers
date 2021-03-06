//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CALayer;
@protocol StackElementDelegate;

@interface StackElement : NSObject
{
    int _currentState;
    int _nextState;
    int _targetState;
    int _previousState;
    id <StackElementDelegate> _delegate;
    id _item;
    long long _orientation;
    CALayer *_itemLayer;
}

@property(retain, nonatomic) CALayer *itemLayer; // @synthesize itemLayer=_itemLayer;
@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(readonly, nonatomic) int previousState; // @synthesize previousState=_previousState;
@property(readonly, nonatomic) id item; // @synthesize item=_item;
@property(nonatomic) __weak id <StackElementDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (struct CGAffineTransform)_onStackTransform;
- (struct CGAffineTransform)_offscreenTransform;
- (struct CGAffineTransform)_affineTransformWithTranslation:(struct CGSize)arg1;
- (struct CGAffineTransform)_fullsizeTransform;
- (void)_fadeInUnderneathStack:(BOOL)arg1;
- (void)_fadeOutUnderneathStack:(BOOL)arg1;
- (void)_moveOutFromStack:(BOOL)arg1;
- (void)_moveIntoStack:(BOOL)arg1;
- (void)_hide:(BOOL)arg1;
- (void)_animationDidStop:(id)arg1 finished:(id)arg2 animationInfo:(id)arg3;
- (void)_commitAnimation;
- (void)_beginAnimationToState:(int)arg1 withDuration:(double)arg2 beginsFromCurrentState:(BOOL)arg3 animated:(BOOL)arg4;
- (id)_operationNameWithState:(int)arg1;
- (void)removeLayer;
@property(readonly, nonatomic) CALayer *layer;
@property(readonly, nonatomic) double stackIndex;
@property(readonly, nonatomic) BOOL isAnimating;
@property(nonatomic) int targetState;
@property(nonatomic) int currentState;
@property(readonly, nonatomic) BOOL isVisible;
- (void)setNextState:(int)arg1 animated:(BOOL)arg2;
- (void)setNextState:(int)arg1;
@property(readonly, nonatomic) int nextState;
- (int)state;
- (id)description;
- (id)initWithItem:(id)arg1 state:(int)arg2;

@end

