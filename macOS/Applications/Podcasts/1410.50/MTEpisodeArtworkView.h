//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class MTNowPlayingIndicatorView, MTVibrantImageView, UIImage, UIImageView, UIView;

@interface MTEpisodeArtworkView : UIControl
{
    BOOL _currentPlayerItem;
    UIImageView *_imageView;
    UIView *_dimmingView;
    MTVibrantImageView *_vibrantImageView;
    MTNowPlayingIndicatorView *_barsView;
}

@property(retain, nonatomic) MTNowPlayingIndicatorView *barsView; // @synthesize barsView=_barsView;
@property(retain, nonatomic) MTVibrantImageView *vibrantImageView; // @synthesize vibrantImageView=_vibrantImageView;
@property(retain, nonatomic) UIView *dimmingView; // @synthesize dimmingView=_dimmingView;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic, getter=isCurrentPlayerItem) BOOL currentPlayerItem; // @synthesize currentPlayerItem=_currentPlayerItem;
- (void).cxx_destruct;
- (BOOL)canBecomeFocused;
- (void)_updateBarMetricsForArtworkSize:(struct CGSize)arg1;
- (id)_blurredArtworkForArtwork:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)updatePlaybackState;
- (void)stopObservingPlaybackState;
- (void)startObservingPlaybackState;
@property(retain, nonatomic) UIImage *artwork;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

