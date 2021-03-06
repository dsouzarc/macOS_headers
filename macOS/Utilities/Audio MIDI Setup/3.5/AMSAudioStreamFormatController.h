//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSControlTextEditingDelegate-Protocol.h"
#import "NSTableViewDataSource-Protocol.h"
#import "NSTableViewDelegate-Protocol.h"

@class AMSAudioDeviceWrapper, AMSAudioPanelController, AMSAudioStream, AMSFormatPopupSortView, NSArray, NSButton, NSMenuItem, NSOutlineView, NSPopUpButton, NSStackView, NSString, NSTextField;

@interface AMSAudioStreamFormatController : NSObject <NSTableViewDelegate, NSTableViewDataSource, NSControlTextEditingDelegate>
{
    NSTextField *streamLabel;
    NSPopUpButton *streamPopup;
    NSPopUpButton *dataSourcePopup;
    NSPopUpButton *formatPopup;
    NSTextField *formatLabel;
    AMSFormatPopupSortView *sortView;
    AMSAudioPanelController *owner;
    unsigned long long popupSortStyle;
    AMSAudioStream *currentStream;
    long long selectedStreamIndex;
    NSMenuItem *previouslySelectedFormatItem;
    NSStackView *streamStackView;
    NSOutlineView *streamTable;
    NSButton *speakerConfigurationButton;
    NSArray *channelInfoList;
    BOOL hasObservers;
    BOOL _input;
    AMSAudioDeviceWrapper *_device;
}

@property(getter=isInput) BOOL input; // @synthesize input=_input;
@property(retain, nonatomic) AMSAudioDeviceWrapper *device; // @synthesize device=_device;
- (void).cxx_destruct;
- (BOOL)outlineView:(id)arg1 isGroupItem:(id)arg2;
- (id)outlineView:(id)arg1 viewForTableColumn:(id)arg2 item:(id)arg3;
- (id)outlineView:(id)arg1 child:(long long)arg2 ofItem:(id)arg3;
- (BOOL)outlineView:(id)arg1 isItemExpandable:(id)arg2;
- (id)outlineView:(id)arg1 objectValueForTableColumn:(id)arg2 byItem:(id)arg3;
- (long long)outlineView:(id)arg1 numberOfChildrenOfItem:(id)arg2;
- (void)streamConfigurationChanged:(id)arg1;
- (void)handleSampleRateChanged:(id)arg1;
- (void)formatPopupWillBeShown:(id)arg1;
- (void)updateFormatPopupWithStyle:(unsigned long long)arg1;
- (id)localizedStringForValue:(float)arg1;
- (void)updateFormatPopupWithAvailableSampleRates;
- (void)updateStreams;
- (void)updateDataSources;
- (void)updateDataSource;
- (void)speakerConfigurationButtonPressed:(id)arg1;
- (void)rangedStreamFormatChanged:(id)arg1;
- (void)physicalFormatChanged:(id)arg1;
- (void)streamFormatChanged:(id)arg1;
- (void)dataSourceChanged:(id)arg1;
- (void)streamSelectionChanged:(id)arg1;
- (void)setCurrentStream:(id)arg1;
- (id)titleForPreviouslySelectedItem;
- (void)populateFormatPopup;
- (void)sortStyleChanged:(id)arg1;
- (BOOL)needsSortMenu;
- (void)synchronizeUIWithStreamFormat;
- (void)synchronizeUIWithDataSource;
- (void)populateDataSourcesPopup;
- (void)populateStreamPopup;
- (void)dealloc;
- (id)getChannelList;
- (void)setSpeakerController:(id)arg1;
- (void)setDevice:(id)arg1 preserveStreamSelection:(BOOL)arg2;
- (void)cleanup;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

