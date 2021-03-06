//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBMultiPreviewView.h"

#import "NSComboBoxDataSource-Protocol.h"
#import "NSComboBoxDelegate-Protocol.h"

@class NSArray, NSComboBox, NSSlider, NSString;

@interface FBMultiPreviewResizingView : FBMultiPreviewView <NSComboBoxDelegate, NSComboBoxDataSource>
{
    NSSlider *_sizeSlider;
    NSComboBox *_sampleSizeBox;
    double _size;
    BOOL _adjustedSize;
    NSArray *_comboBoxValues;
}

@property BOOL adjustedSize; // @synthesize adjustedSize=_adjustedSize;
@property(copy) NSArray *comboBoxValues; // @synthesize comboBoxValues=_comboBoxValues;
@property(retain) NSComboBox *sampleSizeBox; // @synthesize sampleSizeBox=_sampleSizeBox;
@property(retain) NSSlider *sizeSlider; // @synthesize sizeSlider=_sizeSlider;
- (void)updateSizeList:(id)arg1;
- (void)updateSliderSizes:(id)arg1;
- (void)updateSizeDisplay:(id)arg1;
- (void)updateDisplay;
@property(readonly) NSString *localizedSize;
- (void)changeSize:(id)arg1;
- (BOOL)control:(id)arg1 textShouldEndEditing:(id)arg2;
- (id)comboBox:(id)arg1 objectValueForItemAtIndex:(long long)arg2;
- (long long)numberOfItemsInComboBox:(id)arg1;
- (void)updateFaces:(id)arg1;
- (id)fontNameStringForFace:(id)arg1;
- (void)notifyOfFontChange;
@property double size;
@property(readonly) BOOL allowsSizeToFit;
@property(readonly) double defaultSize;
@property(readonly) NSString *sizePreferenceKey;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

