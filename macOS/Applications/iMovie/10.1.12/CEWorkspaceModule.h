//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "LKContainerModule.h"

@class CEViewerModule, FFAnchoredSequence;

@interface CEWorkspaceModule : LKContainerModule
{
    BOOL _isObservingWindowModuleController;
    int _currentLayoutType;
    FFAnchoredSequence *sequenceBeingEdited;
}

@property(nonatomic) int currentLayoutType; // @synthesize currentLayoutType=_currentLayoutType;
@property(retain, nonatomic) FFAnchoredSequence *sequenceBeingEdited; // @synthesize sequenceBeingEdited;
- (void)doShowThemePicker:(id)arg1;
- (void)doTransitions:(id)arg1;
- (void)doBackgrounds:(id)arg1;
- (void)doTitles:(id)arg1;
- (void)doMusic:(id)arg1;
- (void)doMyMedia:(id)arg1;
- (void)_layoutForEditingTimeline;
- (void)_layoutForAllProjects;
- (void)_layoutForBrowsingAndEditing;
- (void)_hideModulesThatAreNot:(id)arg1;
- (void)_relayout;
- (void)_updateWithActiveSequence:(id)arg1;
- (void)restorePersistentState;
- (void)rememberPersistentState;
- (id)_currentPersistentState;
- (id)_persistenceKeyForSequence:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_removeObservers;
- (void)_addObservers;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (void)sidebarModule:(id)arg1 didSelectNodes:(id)arg2;
- (BOOL)selectionIsEvents;
- (BOOL)photoLibraryIsActive;
- (void)setTimelineShown:(BOOL)arg1;
- (void)setAllProjectsShown:(BOOL)arg1;
- (void)setBrowsingAndEditingShown:(BOOL)arg1;
- (void)timelineForcedToForegroundByUndoNotification:(id)arg1;
- (BOOL)isCurrentLayoutKnown;
- (BOOL)isMediaTabShown;
- (void)showHideLibraryAction:(id)arg1;
- (void)showHideProjectsAction:(id)arg1;
- (void)showHideProjects:(id)arg1;
- (void)hideProjects:(id)arg1;
- (void)showProjects:(id)arg1;
- (BOOL)isEditingTimeline;
- (BOOL)areProjectsShown;
- (void)showNewWorkspace:(id)arg1;
@property(readonly, nonatomic) CEViewerModule *viewerModule; // @dynamic viewerModule;
- (id)mediaDetailContainerModule;
- (id)contentLibrarySpecifierModule;
- (id)sidebarController;
- (id)projectsContainerModule;
- (id)toolbarModule;
- (id)mediaDetailModule;
- (id)sidebarModule;
- (id)sidebarContainerModule;
- (void)viewWillBeRemoved;
- (void)viewWasInstalled;
- (CDStruct_d2b197d1)borderMetrics;
- (void)update;
- (void)postLayout:(id)arg1;
- (BOOL)isCurrentLayoutTypeInvalid;
- (void)takeContentLayoutFromDictionary:(id)arg1;
- (id)contentLayoutDictionary;
- (id)targetModules;
- (id)localModuleActions;
- (struct CGSize)viewMinSize;
- (BOOL)loadView;
- (void)dealloc;

@end

