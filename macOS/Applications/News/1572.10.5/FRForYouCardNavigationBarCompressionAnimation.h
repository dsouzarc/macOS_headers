//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FRInteractiveBarCompressionAnimating-Protocol.h"

@class UINavigationBar;

@interface FRForYouCardNavigationBarCompressionAnimation : NSObject <FRInteractiveBarCompressionAnimating>
{
    BOOL _shouldCompressAtTopOfFeed;
    double _compressionTopOffset;
    double _maximumBarHeight;
    UINavigationBar *_navigationBar;
}

@property(readonly, nonatomic) UINavigationBar *navigationBar; // @synthesize navigationBar=_navigationBar;
@property(nonatomic) BOOL shouldCompressAtTopOfFeed; // @synthesize shouldCompressAtTopOfFeed=_shouldCompressAtTopOfFeed;
@property(nonatomic) double maximumBarHeight; // @synthesize maximumBarHeight=_maximumBarHeight;
@property(nonatomic) double compressionTopOffset; // @synthesize compressionTopOffset=_compressionTopOffset;
- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL prefersCompressedStyling;
- (void)reloadWithTraitCollection:(id)arg1;
@property(readonly, nonatomic) BOOL closeGapWhenCompressed;
@property(readonly, nonatomic) BOOL shouldCompressAtTop;
@property(readonly, nonatomic) double topOffset;
- (void)scrollViewIsAtTop:(BOOL)arg1;
- (BOOL)animationShouldBeginForScrollView:(id)arg1 currentlyFullyCompressed:(BOOL)arg2;
- (double)minimumBarHeightForTraitCollection:(id)arg1;
- (double)maximumBarHeightForTraitCollection:(id)arg1;
- (void)updateWithPercentage:(double)arg1;
- (id)initWithNavigationBar:(id)arg1;

@end

