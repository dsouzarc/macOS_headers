//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

@class NCWidgetWindow, NSButton, NSSlider;

__attribute__((visibility("hidden")))
@interface NCWidgetWindowCustomizerViewController : NSViewController
{
    NCWidgetWindow *_targetWindow;
    NSSlider *_opacitySlider;
    NSSlider *_blurSlider;
    NSSlider *_brightnessSlider;
    NSButton *_floatToggle;
    NSButton *_matchSystemToggle;
}

@property __weak NSButton *matchSystemToggle; // @synthesize matchSystemToggle=_matchSystemToggle;
@property __weak NSButton *floatToggle; // @synthesize floatToggle=_floatToggle;
@property __weak NSSlider *brightnessSlider; // @synthesize brightnessSlider=_brightnessSlider;
@property __weak NSSlider *blurSlider; // @synthesize blurSlider=_blurSlider;
@property __weak NSSlider *opacitySlider; // @synthesize opacitySlider=_opacitySlider;
@property __weak NCWidgetWindow *targetWindow; // @synthesize targetWindow=_targetWindow;
- (void).cxx_destruct;
- (void)toggleMatchSystemAppearance:(id)arg1;
- (void)toggleFloating:(id)arg1;
- (void)brightnessValueChanged:(id)arg1;
- (void)blurValueChanged:(id)arg1;
- (void)opacityValueChanged:(id)arg1;
- (void)viewDidDisappear;
- (void)viewDidLoad;

@end

