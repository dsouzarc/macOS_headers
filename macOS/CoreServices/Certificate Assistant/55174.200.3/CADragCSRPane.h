//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "AFAssistantPane.h"

@class CALearnMoreSheetWindowController, SFCSRDragDropBox;

@interface CADragCSRPane : AFAssistantPane
{
    SFCSRDragDropBox *_dragCSRBox;
    CALearnMoreSheetWindowController *_learnMoreWindowController;
}

- (void)_learnMoreClicked:(id)arg1;
- (void)willEnterPane:(unsigned int)arg1;
- (void)didEnterPane:(unsigned int)arg1;
- (id)nextPane;

@end

