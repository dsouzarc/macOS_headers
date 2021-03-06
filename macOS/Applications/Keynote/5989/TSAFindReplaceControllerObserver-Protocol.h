//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class TSAFindReplaceController, TSWPInteractiveCanvasController;

@protocol TSAFindReplaceControllerObserver <NSObject>
- (void)didEncounterHistoryOrReplaceAllChanges;
- (BOOL)shouldExitFindModeForHistoryAndReplaceAllChanges;
- (BOOL)canSetSelectionForReplace;
- (void)findReplaceControllerCollaborativeTimerDidTrigger:(TSAFindReplaceController *)arg1;

@optional
- (void)findReplaceController:(TSAFindReplaceController *)arg1 didRemoveHighlightedInteractiveCanvasController:(TSWPInteractiveCanvasController *)arg2;
- (void)findReplaceController:(TSAFindReplaceController *)arg1 willAddHighlightedInteractiveCanvasController:(TSWPInteractiveCanvasController *)arg2;
@end

