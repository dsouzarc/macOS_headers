//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSSplitView.h"

@interface PTYSplitView : NSSplitView
{
    BOOL _dead;
}

- (void)forceRedraw;
- (void)willRemoveSubview:(id)arg1;
- (void)didAddSubview:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (id)description;
- (id)dividerColor;
- (void)dealloc;

// Remaining properties
@property __weak id <PTYSplitViewDelegate> delegate; // @dynamic delegate;

@end

