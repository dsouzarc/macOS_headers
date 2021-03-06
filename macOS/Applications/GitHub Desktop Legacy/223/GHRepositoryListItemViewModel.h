//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ReactiveViewModel/RVMViewModel.h>

#import "GHRepositoryListItem-Protocol.h"

@class GHCloningRepositoriesManager, GHRepository, GHUsageTracker, NSArray, NSAttributedString, NSImage, NSString, RACCommand, RACSignal;

@interface GHRepositoryListItemViewModel : RVMViewModel <GHRepositoryListItem>
{
    BOOL _selected;
    BOOL _cloningOrSyncing;
    RACCommand *_openInTerminalCommand;
    RACCommand *_openInFinderCommand;
    RACCommand *_openInAtomCommand;
    GHRepository *_repository;
    NSImage *_icon;
    NSAttributedString *_displayName;
    GHCloningRepositoriesManager *_cloningRepositoriesManager;
    GHUsageTracker *_usageTracker;
    RACSignal *_repositoryExists;
}

@property(readonly, nonatomic) RACSignal *repositoryExists; // @synthesize repositoryExists=_repositoryExists;
@property(readonly, nonatomic) GHUsageTracker *usageTracker; // @synthesize usageTracker=_usageTracker;
@property(readonly, nonatomic) GHCloningRepositoriesManager *cloningRepositoriesManager; // @synthesize cloningRepositoriesManager=_cloningRepositoriesManager;
@property(readonly, nonatomic, getter=isCloningOrSyncing) BOOL cloningOrSyncing; // @synthesize cloningOrSyncing=_cloningOrSyncing;
@property(nonatomic, getter=isSelected) BOOL selected; // @synthesize selected=_selected;
@property(readonly, copy, nonatomic) NSAttributedString *displayName; // @synthesize displayName=_displayName;
@property(readonly, nonatomic) NSImage *icon; // @synthesize icon=_icon;
@property(readonly, nonatomic) GHRepository *repository; // @synthesize repository=_repository;
- (void).cxx_destruct;
@property(readonly, nonatomic) id selectionObject;
@property(readonly, copy, nonatomic) NSArray *children;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (long long)caseInsensitiveCompare:(id)arg1;
- (id)iconForRepository:(id)arg1;
- (id)displayName:(id)arg1 withOwner:(id)arg2 selected:(BOOL)arg3;
- (id)initWithRepository:(id)arg1 cloningRepositoriesManager:(id)arg2 usageTracker:(id)arg3 showOwner:(BOOL)arg4;
@property(readonly, nonatomic) RACCommand *openInAtomCommand; // @synthesize openInAtomCommand=_openInAtomCommand;
@property(readonly, nonatomic) RACCommand *openInFinderCommand; // @synthesize openInFinderCommand=_openInFinderCommand;
@property(readonly, nonatomic) RACCommand *openInTerminalCommand; // @synthesize openInTerminalCommand=_openInTerminalCommand;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

