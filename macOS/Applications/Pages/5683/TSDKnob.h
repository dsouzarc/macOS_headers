//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CALayer, CAShapeLayer, TSDRep, TSUBezierPath, TSUWeakReference;

@interface TSDKnob : NSObject
{
    TSUBezierPath *mHitRegionPath;
    CAShapeLayer *mHitRegionLayer;
    CALayer *mLayer;
    int mType;
    struct CGPoint mPosition;
    BOOL mOffsetValid;
    struct CGPoint mOffset;
    double mRadius;
    unsigned long long mTag;
    TSUWeakReference *mRepReference;
    BOOL mWorksWhenRepLocked;
    BOOL mWorksWhenInVersionBrowsingMode;
    BOOL mWorksWhenInReadOnlyMode;
    BOOL mWorksWithStylus;
    BOOL mShouldDisplayDirectlyOverRep;
}

@property(copy, nonatomic) TSUBezierPath *hitRegionPath; // @synthesize hitRegionPath=mHitRegionPath;
@property(nonatomic) BOOL shouldDisplayDirectlyOverRep; // @synthesize shouldDisplayDirectlyOverRep=mShouldDisplayDirectlyOverRep;
@property(nonatomic) BOOL worksWithStylus; // @synthesize worksWithStylus=mWorksWithStylus;
@property(nonatomic) BOOL worksWhenInReadOnlyMode; // @synthesize worksWhenInReadOnlyMode=mWorksWhenInReadOnlyMode;
@property(nonatomic) BOOL worksWhenInVersionBrowsingMode; // @synthesize worksWhenInVersionBrowsingMode=mWorksWhenInVersionBrowsingMode;
@property(nonatomic) BOOL worksWhenRepLocked; // @synthesize worksWhenRepLocked=mWorksWhenRepLocked;
@property(nonatomic) unsigned long long tag; // @synthesize tag=mTag;
@property(nonatomic) double radius; // @synthesize radius=mRadius;
@property(nonatomic) struct CGPoint offset; // @synthesize offset=mOffset;
@property(nonatomic) BOOL offsetValid; // @synthesize offsetValid=mOffsetValid;
@property(nonatomic) struct CGPoint position; // @synthesize position=mPosition;
@property(nonatomic) int type; // @synthesize type=mType;
- (struct CGPoint)pixelAlignedScaledCanvasCenterPositionFromKnobPosition:(struct CGPoint)arg1;
- (id)description;
- (BOOL)obscuresKnob:(id)arg1;
- (BOOL)overlapsWithKnob:(id)arg1;
- (struct CGRect)frameForIntersection;
- (BOOL)transferMouseInsideStateIfDesiredFromKnob:(id)arg1;
- (void)mouseExitedKnobAtPoint:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)mouseMovedAtPoint:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)mouseEnteredKnobAtPoint:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)cursorForRotatingRep:(id)arg1;
- (id)cursorForResizingRep:(id)arg1;
- (void)updateHitRegionPathForRep:(id)arg1;
- (double)i_rotationInDegreesForKnobOnRep:(id)arg1;
- (struct CGRect)boundingBoxOfHitRegionForRep:(id)arg1 scale:(double)arg2;
- (id)hitRegionLayerForRep:(id)arg1;
@property(readonly, retain, nonatomic) CALayer *layer;
- (id)knobImage;
- (BOOL)isHitByUnscaledPoint:(struct CGPoint)arg1 andRep:(id)arg2 returningDistance:(double *)arg3;
- (BOOL)isHitByUnscaledPoint:(struct CGPoint)arg1 andRep:(id)arg2;
- (void)owningRepWillBeRemoved;
@property(readonly, nonatomic) TSDRep *rep;
- (id)init;
- (void)dealloc;
- (id)initWithType:(int)arg1 position:(struct CGPoint)arg2 radius:(double)arg3 tag:(unsigned long long)arg4 onRep:(id)arg5;

@end

