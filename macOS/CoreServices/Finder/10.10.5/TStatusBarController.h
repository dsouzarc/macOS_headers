//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TViewController.h"

#import "TCoalescingNodeObserverProtocol-Protocol.h"

@class NSImageView, NSProgressIndicator, NSSlider, NSString, TBrowserWindowController, TNodeViewSettings, TRefreshButton, TStatusTextFldController;

@interface TStatusBarController : TViewController <TCoalescingNodeObserverProtocol>
{
    NSImageView *_noWriteImageView;
    _Bool _targetIsNotWritable;
    TStatusTextFldController *_statusTextFldController;
    NSProgressIndicator *_busyIndicator;
    _Bool _browserIsBusy;
    _Bool _doNotShowBusy;
    unsigned long long _busyLevel;
    double _busyIndicatorRefreshPBFButtonGap;
    TRefreshButton *_refreshPBFButton;
    _Bool _targetIsPBF;
    double _refreshPBFButtonIconSizeSliderGap;
    NSSlider *_iconSizeSlider;
    _Bool _showIconSizeSlider;
    struct TFENode _targetNode;
    struct TFENode _targetVolume;
    struct TFENode _targetPBF;
    unsigned long long _pbfSize;
    unsigned long long _pbfDeviceCapacity;
    struct TPBFSizingThread *_pbfSizingThread;
    struct TPBFSizingThreadCallbackCocoaBridge *_pbfSizingThreadBridge;
    set_55a3e8f7 _nodesAddedToPBF;
    _Bool _isPBFSizingInProgress;
    _Bool _isSearchInProgress;
    _Bool _isPopulationInProgress;
    NSString *_viewStyle;
    struct TCoalescingNodeObserverCocoaBridge *_nodeObserver;
    TBrowserWindowController *_browserWindowController;
    struct CGRect _previousStatusBarFrame;
}

+ (struct CGRect)frameForMode:(_Bool)arg1 inFrame:(struct CGRect)arg2;
+ (double)defaultHeightForMode:(_Bool)arg1;
+ (void)initialize;
@property(retain, nonatomic) TStatusTextFldController *statusTextFldController; // @synthesize statusTextFldController=_statusTextFldController;
@property(retain, nonatomic) NSString *viewStyle; // @synthesize viewStyle=_viewStyle;
@property(readonly, nonatomic) TBrowserWindowController *browserWindowController; // @synthesize browserWindowController=_browserWindowController;
@property(readonly, nonatomic) _Bool isPopulationInProgress; // @synthesize isPopulationInProgress=_isPopulationInProgress;
@property(nonatomic) _Bool isPBFSizingInProgress; // @synthesize isPBFSizingInProgress=_isPBFSizingInProgress;
@property(nonatomic) _Bool showIconSizeSlider; // @synthesize showIconSizeSlider=_showIconSizeSlider;
@property(nonatomic) _Bool targetIsPBF; // @synthesize targetIsPBF=_targetIsPBF;
@property(nonatomic) _Bool doNotShowBusy; // @synthesize doNotShowBusy=_doNotShowBusy;
@property(nonatomic) _Bool browserIsBusy; // @synthesize browserIsBusy=_browserIsBusy;
@property(nonatomic) _Bool targetIsNotWritable; // @synthesize targetIsNotWritable=_targetIsNotWritable;
- (id).cxx_construct;
- (void).cxx_destruct;
- (struct TNodeBrowser *)nodeBrowser;
- (void)unbindViewSettings;
- (void)bindViewSettings;
@property(readonly, nonatomic) TNodeViewSettings *viewSettings;
- (void)updateControlsLayout;
- (void)updateControls;
- (void)updateTextLayout;
- (void)updateText:(_Bool)arg1;
- (void)updateImageViewsLayout;
- (void)updateImageViews;
- (double)availableWidth;
- (void)statusBarFrameChanged:(id)arg1;
- (void)viewDidMoveToWindow;
- (void)stopSpinner;
- (void)startSpinner;
@property(readonly, nonatomic) _Bool isSearchInProgress; // @synthesize isSearchInProgress=_isSearchInProgress;
- (_Bool)isShowingSearchStatus;
- (_Bool)isShowingPBFStatus;
- (unsigned long long)pbfDeviceCapacity;
- (unsigned long long)pbfSize;
- (const struct TFENode *)targetPBF;
- (const struct TFENode *)targetVolume;
- (const struct TFENode *)targetNode;
- (void)iconViewIconSizeTrackingStopped:(id)arg1;
- (void)iconViewIconSizeTrackingStarted:(id)arg1;
- (_Bool)shouldShowSliderForViewStyle:(id)arg1;
- (void)setLocation:(_Bool)arg1;
- (void)setIsSearchInProgress:(_Bool)arg1;
- (void)setIsPopulationInProgress:(_Bool)arg1;
- (void)nodesDeleted:(const struct TFENodeVector *)arg1 fromObservedNode:(const struct TFENode *)arg2;
- (void)nodesChanged:(const vector_614ab7ad *)arg1 inObservedNode:(const struct TFENode *)arg2;
- (void)nodesAdded:(const struct TFENodeVector *)arg1 toObservedNode:(const struct TFENode *)arg2;
- (void)pbfRefreshButtonClicked:(id)arg1;
- (void)cancelPBFCalculation;
- (void)pbfSizingCompletionCallback:(unsigned long long)arg1;
- (void)calculatePBFSpace;
- (double)configureForMode:(_Bool)arg1 inFrame:(struct CGRect)arg2;
- (void)setIsInMetalWindow:(_Bool)arg1;
- (void)setTarget:(const struct TFENode *)arg1;
- (void)viewLoaded;
- (id)nibName;
- (void)aboutToTearDown;
- (id)initWithFrame:(struct CGRect)arg1 browseMode:(_Bool)arg2 windowController:(id)arg3;
- (id)activeContainer;
- (id)statusBar;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

