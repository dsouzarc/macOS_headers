//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSComboBoxDelegate-Protocol.h"
#import "NSMenuDelegate-Protocol.h"

@class AMSPopupButton, AudioDeviceChannelPropertiesTable, MessageView, NSBox, NSComboBox, NSMutableDictionary, NSPopUpButton, NSScrollView, NSString, NSView;

@interface AudioDeviceController : NSObject <NSComboBoxDelegate, NSMenuDelegate>
{
    AMSPopupButton *uiStreamPopUp;
    AMSPopupButton *uiDataSourcePopUp;
    NSComboBox *uiSampleRateComboBox;
    NSPopUpButton *uiStreamFormatPopUp;
    NSBox *uiDeviceBox;
    NSScrollView *uiDeviceTableViewScroller;
    double bottomBorder;
    NSView *uiEnabledView;
    AudioDeviceChannelPropertiesTable *uiAudioDeviceChannelPropertiesTable;
    MessageView *mDisabledView;
    unsigned int mAudioDeviceScope;
    unsigned char mAudioDeviceSection;
    NSMutableDictionary *mAudioFormatNameDictionary;
    struct CAAudioHardwareDevice *mCurrentDevice;
    struct CAAudioHardwareStream *mCurrentStream;
    int mSelectedStreamIndex;
    BOOL streamFormatSelected;
    BOOL streamFormatNeedsUpdating;
    struct vector<CAStreamBasicDescription, std::__1::allocator<CAStreamBasicDescription>> *mStreamVector;
}

+ (void)popupRateChanged:(id)arg1 forDevice:(unsigned int)arg2 scope:(unsigned int)arg3;
+ (void)populateSampleRateList:(id)arg1 forDevice:(unsigned int)arg2 scope:(unsigned int)arg3;
+ (void)privAddSampleRate:(double)arg1 toList:(id)arg2;
+ (void)privSynchronizeUIWithSampleRate:(id)arg1 deviceID:(unsigned int)arg2 scope:(unsigned int)arg3;
- (void)iaStreamFormatChanged:(id)arg1;
- (void)iaSampleRateChanged:(id)arg1;
- (void)iaDataSourceChanged:(id)arg1;
- (void)iaStreamSelectionChanged:(id)arg1;
- (void)setEnabled:(BOOL)arg1;
- (struct CAAudioHardwareDevice *)getCurrentDevice;
- (void)setCurrentDevice:(const struct CAAudioHardwareDevice *)arg1;
- (void)streamFormatPopUpWillAppear:(id)arg1;
- (void)menuDidClose:(id)arg1;
- (void)comboBoxWillDismiss:(id)arg1;
- (void)awakeFromNib;
- (void)dealloc;
- (id)init;
- (int)audioDevicePropertyChanged:(unsigned int)arg1 property:(unsigned int)arg2 forChannel:(unsigned int)arg3 isInput:(BOOL)arg4;
- (void)privControllerEnableSwapOld:(id)arg1 withNew:(id)arg2;
- (void)privSynchronizeUIForNewDevice;
- (void)privSynchronizeUIWithStream;
- (void)privPopulateSampleRateList;
- (void)privPopulateDataSourcesPopUp;
- (void)privPopulateStreamPopUp;
- (void)privPopulateStreamFormatsPopUp;
- (void)privSynchronizeUIWithStreamFormat;
- (void)privSynchronizeUIWithDataSource;
- (id)privGetFormatNameStringForOSType:(unsigned int)arg1;
- (void)execute:(struct CAAudioHardwareStream *)arg1 forChannel:(unsigned int)arg2 forProperty:(unsigned int)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

