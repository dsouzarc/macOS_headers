//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TMAContainerInspectorPaneController.h"

@class NSArray, NSMutableDictionary, NSString, TMAInspectorPaneController;
@protocol TMAInspectorPaneProvider;

@interface TMATabbedInspectorPaneController : TMAContainerInspectorPaneController
{
    TMAInspectorPaneController *_contentPane;
    NSMutableDictionary *_cachedPaneControllers;
    NSArray *_paneIdentifiers;
    NSString *_selectedPaneIdentifier;
    id <TMAInspectorPaneProvider> _paneProvider;
}

+ (id)paneWithPaneProvider:(id)arg1;
@property(readonly, nonatomic) id <TMAInspectorPaneProvider> paneProvider; // @synthesize paneProvider=_paneProvider;
@property(copy, nonatomic) NSString *selectedPaneIdentifier; // @synthesize selectedPaneIdentifier=_selectedPaneIdentifier;
- (void)p_updatePaneForSelectedTab;
- (id)p_paneControllerForIdentifier:(id)arg1;
- (void)loadView;
- (id)p_subtableInspectorView;
- (id)p_segmentedControl;
- (void)p_segmentedControlClicked:(id)arg1;
- (id)contentPane;
- (id)p_editorController;
- (void)p_initializeSegmentControl;
- (void)p_editorsDidChange:(id)arg1;
- (void)p_loadPanesForCurrentEditorStack;
- (void)setRepresentedObject:(id)arg1;
- (id)initWithPaneProvider:(id)arg1;
- (id)init;
- (void)dealloc;

@end

