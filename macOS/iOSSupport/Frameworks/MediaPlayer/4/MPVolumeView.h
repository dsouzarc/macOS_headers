//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <MediaPlayer/MPAVLightweightRoutingControllerDelegate-Protocol.h>
#import <MediaPlayer/NSCoding-Protocol.h>

@class MPAVLightweightRoutingController, MPMediaControls, MPVolumeSlider, NSString, UIButton, UIImage, UILabel;

@interface MPVolumeView : UIView <MPAVLightweightRoutingControllerDelegate, NSCoding>
{
    MPMediaControls *_mediaControls;
    MPAVLightweightRoutingController *_lightweightRoutingController;
    BOOL _hasNonDefaultRouteButtonImages;
    BOOL _hasNonDefaultMaxVolumeSliderImage;
    BOOL _hasNonDefaultMinVolumeSliderImage;
    BOOL _hidesRouteLabelWhenNoRouteChoice;
    UIButton *_routeButton;
    BOOL _routeButtonShowsTouchWhenHighlighted;
    BOOL _routeDiscoveryEnabled;
    UILabel *_routeLabel;
    BOOL _showingButton;
    BOOL _showingLabel;
    BOOL _showingSlider;
    BOOL _showsRouteButton;
    BOOL _showsVolumeSlider;
    long long _style;
    MPVolumeSlider *_volumeSlider;
    BOOL _volumeSliderShrinksFromBothEnds;
    BOOL _wirelessRouteIsPicked;
    BOOL _wirelessRoutesAvailable;
    BOOL _pushedRouteDiscoveryModeState;
}

- (void).cxx_destruct;
- (void)_volumeSliderVolumeControlAvailabilityDidChangeNotification:(id)arg1;
- (void)_applicationWillEnterForegroundNotification:(id)arg1;
- (void)_applicationDidEnterBackgroundNotification:(id)arg1;
- (void)_updateWirelessRouteStatus;
- (void)_setRouteDiscoveryEnabled:(BOOL)arg1;
- (void)_setShowsVolumeSlider:(BOOL)arg1;
- (void)_setShowsRouteButton:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_getDefaultVolumeSliderFrame:(struct CGRect *)arg1 routeButtonFrame:(struct CGRect *)arg2 forBounds:(struct CGRect)arg3;
- (void)_stopPrewarmingAudioRoutePicker;
- (void)_startPrewarmingAudioRoutePicker;
- (void)_displayAudioRoutePicker;
- (void)_loadAudioRoutePickerIfNeeded;
- (id)_defaultRouteButtonImageAsSelected:(BOOL)arg1;
- (void)_createSubviews;
- (id)_routeButton;
@property(readonly, nonatomic) BOOL isShowingRouteButton;
@property(readonly, nonatomic) BOOL isVisible;
@property(nonatomic) BOOL volumeSliderShrinksFromBothEnds;
@property(nonatomic) BOOL hidesRouteLabelWhenNoRouteChoice;
@property(readonly, nonatomic) MPVolumeSlider *volumeSlider;
@property(readonly, nonatomic) long long style;
- (struct CGRect)volumeThumbRectForBounds:(struct CGRect)arg1 volumeSliderRect:(struct CGRect)arg2 value:(float)arg3;
- (id)volumeThumbImageForState:(unsigned long long)arg1;
- (struct CGRect)volumeSliderRectForBounds:(struct CGRect)arg1;
@property(nonatomic) BOOL showsVolumeSlider;
@property(nonatomic) BOOL showsRouteButton;
- (void)setVolumeThumbImage:(id)arg1 forState:(unsigned long long)arg2;
@property(nonatomic) BOOL routeButtonShowsTouchWhenHighlighted;
- (void)setRouteButtonImage:(id)arg1 forState:(unsigned long long)arg2;
@property(retain, nonatomic) UIImage *volumeWarningSliderImage;
- (void)setMaximumVolumeSliderImage:(id)arg1 forState:(unsigned long long)arg2;
- (void)setMinimumVolumeSliderImage:(id)arg1 forState:(unsigned long long)arg2;
- (struct CGRect)routeButtonRectForBounds:(struct CGRect)arg1;
- (id)routeButtonImageForState:(unsigned long long)arg1;
- (id)maximumVolumeSliderImageForState:(unsigned long long)arg1;
- (id)minimumVolumeSliderImageForState:(unsigned long long)arg1;
@property(readonly, nonatomic, getter=areWirelessRoutesAvailable) BOOL wirelessRoutesAvailable;
@property(readonly, nonatomic, getter=isWirelessRouteActive) BOOL wirelessRouteActive;
- (void)lightweightRoutingController:(id)arg1 didChangePickedRoutes:(id)arg2;
- (void)lightweightRoutingController:(id)arg1 didChangeDevicePresenceDetected:(BOOL)arg2;
- (void)setHidden:(BOOL)arg1;
- (void)setAlpha:(double)arg1;
- (void)didMoveToWindow;
- (void)didMoveToSuperview;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (BOOL)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_initWithStyle:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

