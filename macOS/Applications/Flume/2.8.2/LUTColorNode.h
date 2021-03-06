//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <SceneKit/SCNNode.h>

@class LUTColor;

@interface LUTColorNode : SCNNode
{
    LUTColor *_identityColor;
    LUTColor *_transformedColor;
    double _animationPercentage;
    unsigned long long _r;
    unsigned long long _g;
    unsigned long long _b;
}

@property unsigned long long b; // @synthesize b=_b;
@property unsigned long long g; // @synthesize g=_g;
@property unsigned long long r; // @synthesize r=_r;
@property(nonatomic) double animationPercentage; // @synthesize animationPercentage=_animationPercentage;
@property(retain, nonatomic) LUTColor *transformedColor; // @synthesize transformedColor=_transformedColor;
@property(retain) LUTColor *identityColor; // @synthesize identityColor=_identityColor;
- (void).cxx_destruct;
- (void)updatePosition;

@end

