//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSKCommand.h"

#import "TSWPSelectionBehaviorCommand-Protocol.h"

@class NSString, TSWPSelection;

@interface TSWPTextBaseCommand : TSKCommand <TSWPSelectionBehaviorCommand>
{
    unsigned int _flags;
    TSWPSelection *_selectionToUseForCommit;
    TSWPSelection *_selectionToUseForRedo;
    TSWPSelection *_selectionToUseForUndo;
    unsigned long long _selectionFlags;
    BOOL _selectionBehaviorHasReadSelections;
    TSWPSelection *_selectionForCommitBehavior;
    TSWPSelection *_selectionForReverseBehavior;
    TSWPSelection *_selectionForForwardBehavior;
}

@property(nonatomic) unsigned long long selectionFlagsAfterCommit; // @synthesize selectionFlagsAfterCommit=_selectionFlags;
@property(nonatomic) BOOL selectionBehaviorHasReadSelections; // @synthesize selectionBehaviorHasReadSelections=_selectionBehaviorHasReadSelections;
@property(retain, nonatomic) TSWPSelection *selectionForForwardSelectionPath; // @synthesize selectionForForwardSelectionPath=_selectionForForwardBehavior;
@property(retain, nonatomic) TSWPSelection *selectionForReverseSelectionPath; // @synthesize selectionForReverseSelectionPath=_selectionForReverseBehavior;
@property(retain, nonatomic) TSWPSelection *selectionForCommitSelectionPath; // @synthesize selectionForCommitSelectionPath=_selectionForCommitBehavior;
- (void)invalidateRange:(struct _NSRange)arg1 onStorage:(id)arg2;
- (void)invalidateSelection:(id)arg1 onStorage:(id)arg2;
@property(nonatomic) BOOL suppressChangeNotifications;
- (void)removeFlag:(int)arg1;
- (void)addFlag:(int)arg1;
- (unsigned int)flags;
- (void)registerChange:(int)arg1 details:(id)arg2 forChangeSource:(id)arg3;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

