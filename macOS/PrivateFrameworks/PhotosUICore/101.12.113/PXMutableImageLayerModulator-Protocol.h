//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class CALayer;

@protocol PXMutableImageLayerModulator <NSObject>
@property(nonatomic) BOOL displayingVideoComplement;
@property(retain, nonatomic) CALayer *layer;
- (void)removeFilterFromUnownedLayer:(CALayer *)arg1;
- (void)animateChangesWithDuration:(double)arg1;
@end

