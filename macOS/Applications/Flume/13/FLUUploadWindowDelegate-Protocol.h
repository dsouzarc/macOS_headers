//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol FLUUploadWindowDelegate <NSObject>
- (void)flu_uploadWindowConcludeDragOperation:(id <NSDraggingInfo>)arg1;
- (BOOL)flu_uploadWindowPerformDragOperation:(id <NSDraggingInfo>)arg1;
- (BOOL)flu_uploadWindowPrepareForDragOperation:(id <NSDraggingInfo>)arg1;
- (void)flu_uploadWindowDraggingExited:(id <NSDraggingInfo>)arg1;
- (void)flu_uploadWindowDraggingEnded:(id <NSDraggingInfo>)arg1;
- (unsigned long long)flu_uploadWindowDraggingEntered:(id <NSDraggingInfo>)arg1;
@end

