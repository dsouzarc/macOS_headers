//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSWindow.h>

@class CLgPlayheadView, CLgView, NSMutableDictionary, NSView;

@interface CLgPlayheadWindow : NSWindow
{
    BOOL _didSubscribeToContainerViewFrameChangeNotifications;
    BOOL _didSubscribeToContainerSuperviewFrameChangeNotifications;
    BOOL _didSubscribeToWindowContentViewFrameChangeNotifications;
    BOOL _isOverview;
    BOOL _inLiveResize;
    int _trimTopLeftHeight;
    int _trimTopLeftWidth;
    struct CGPoint _lastSeenWindowsFrameOriginOffset;
    NSMutableDictionary *_cachedAssets;
    CLgPlayheadView *_playheadView;
    CLgView *_baseView;
    NSView *_baseContainerView;
    NSView *_baseContainerSuperview;
    NSView *_baseContentView;
}

@property(nonatomic) NSView *baseContentView; // @synthesize baseContentView=_baseContentView;
@property(nonatomic) NSView *baseContainerSuperview; // @synthesize baseContainerSuperview=_baseContainerSuperview;
@property(nonatomic) NSView *baseContainerView; // @synthesize baseContainerView=_baseContainerView;
@property(nonatomic) CLgView *baseView; // @synthesize baseView=_baseView;
@property(nonatomic) CLgPlayheadView *playheadView; // @synthesize playheadView=_playheadView;
@property(retain, nonatomic) NSMutableDictionary *cachedAssets; // @synthesize cachedAssets=_cachedAssets;
- (void)redrawPlayhead;
- (void)updatePlayheadCharacteristics;
- (void)updatePlayhead;
- (void)updateOverviewPlayhead;
- (void)updatePlayheadStep2;
- (void)updatePlayheadPositionFromFenster:(struct FENSTER *)arg1;
- (void)updatePlayheadUsingJustCurrentXYPosLineFromFenster:(struct FENSTER *)arg1;
- (void)updateRealtimePlayheadFuturePositionsFrom:(struct PlayheadManagement *)arg1 pxyhPtr:(struct XYH *)arg2 inFenster:(struct FENSTER *)arg3;
- (struct CGRect)_updatePlayheadCommon:(struct XYH *)arg1 inFenster:(struct FENSTER *)arg2;
- (id)thumbImage:(id)arg1 variant:(int)arg2 isWide:(BOOL)arg3;
- (void)checkSPLWindowAlignment;
- (void)configureForLiveResize:(BOOL)arg1;
- (void)baseViewContentBoundsDidChange;
- (void)baseViewContentBoundsDidChange:(id)arg1;
- (void)startObservingFrameChangesForContainerViewAndWindowIfPossible;
- (void)systemDidWakeUp:(id)arg1;
- (void)forceFullRefresh;
- (void)clearBackground;
- (void)forceSPLPositioningNowToIndex0;
- (void)unhidePlayhead;
- (void)hidePlayhead;
- (void)hidePlayheadUntilNextPositionUpdateOrExplicitUnhide;
- (struct CGRect)desiredFrame;
- (void)setSPLAreaToNormalSizeMinusTopLeftWidth:(int)arg1 topLeftHeight:(int)arg2;
- (void)dealloc;
- (void)close;
- (id)initWithView:(id)arg1 forOverview:(BOOL)arg2;

@end

