//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TMAInspectorPaneGroupController.h"

@class TMAChartPresetInspectorPaneController, TMAScrollerInspectorPaneController;

@interface TMAChartPresetTabController : TMAInspectorPaneGroupController
{
    TMAChartPresetInspectorPaneController *mPresetInspector;
    TMAScrollerInspectorPaneController *mScrollerController;
    BOOL mIsShowingPresetInspector;
}

- (void).cxx_destruct;
- (void)setRepresentedObject:(id)arg1;
- (void)p_updatePanes;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)updatePanes;
- (void)loadView;
- (void)dealloc;
- (id)initWithGroupController:(id)arg1;

@end

