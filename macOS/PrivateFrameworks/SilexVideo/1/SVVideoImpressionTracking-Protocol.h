//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <SilexVideo/NSObject-Protocol.h>

@protocol SVVideoImpressionTracking <NSObject>
@property(readonly, nonatomic) unsigned long long quartile;
@property(readonly, nonatomic) double impressionThreshold;
@property(readonly, nonatomic, getter=hasPassedImpressionThreshold) BOOL passedImpressionThreshold;
@property(copy, nonatomic, setter=uponQuartileImpression:) CDUnknownBlockType quartileImpressionBlock;
@property(copy, nonatomic, setter=uponThresholdImpression:) CDUnknownBlockType thresholdImpressionBlock;
@end

