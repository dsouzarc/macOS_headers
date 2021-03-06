//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <HomeKit/_HMCameraControl.h>

@class HMCharacteristic;

__attribute__((visibility("hidden")))
@interface _HMCameraSettingsControl : _HMCameraControl
{
    HMCharacteristic *_nightVision;
    HMCharacteristic *_currentHorizontalTilt;
    HMCharacteristic *_targetHorizontalTilt;
    HMCharacteristic *_currentVerticalTilt;
    HMCharacteristic *_targetVerticalTilt;
    HMCharacteristic *_opticalZoom;
    HMCharacteristic *_digitalZoom;
    HMCharacteristic *_imageRotation;
    HMCharacteristic *_imageMirroring;
}

@property(retain, nonatomic) HMCharacteristic *imageMirroring; // @synthesize imageMirroring=_imageMirroring;
@property(retain, nonatomic) HMCharacteristic *imageRotation; // @synthesize imageRotation=_imageRotation;
@property(retain, nonatomic) HMCharacteristic *digitalZoom; // @synthesize digitalZoom=_digitalZoom;
@property(retain, nonatomic) HMCharacteristic *opticalZoom; // @synthesize opticalZoom=_opticalZoom;
@property(retain, nonatomic) HMCharacteristic *targetVerticalTilt; // @synthesize targetVerticalTilt=_targetVerticalTilt;
@property(retain, nonatomic) HMCharacteristic *currentVerticalTilt; // @synthesize currentVerticalTilt=_currentVerticalTilt;
@property(retain, nonatomic) HMCharacteristic *targetHorizontalTilt; // @synthesize targetHorizontalTilt=_targetHorizontalTilt;
@property(retain, nonatomic) HMCharacteristic *currentHorizontalTilt; // @synthesize currentHorizontalTilt=_currentHorizontalTilt;
@property(retain, nonatomic) HMCharacteristic *nightVision; // @synthesize nightVision=_nightVision;
- (void).cxx_destruct;
- (id)initWithCameraProfile:(id)arg1 service:(id)arg2 profileUniqueIdentifier:(id)arg3;

@end

