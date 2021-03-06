//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <FinderKit/TNodeTaskDelegateProtocol-Protocol.h>

@class NSDraggingItem, NSView;
@protocol NSDraggingInfo;

@protocol TDropOperationDelegateProtocol <TNodeTaskDelegateProtocol>
- (void)offsetSpatialData:(struct IconSpatialData *)arg1;

@optional
- (NSView *)dropTargetViewForDraggingInfo:(id <NSDraggingInfo>)arg1;
- (void)receivePromiseDragNode:(const struct TFENode *)arg1 spatialData:(const struct IconSpatialData *)arg2;
- (void)calculateSpatialData:(struct IconSpatialData *)arg1 draggingItem:(NSDraggingItem *)arg2 forcePlace:(_Bool)arg3;
- (void)calculatePropertiesWithDrop:(struct TDropOperation *)arg1 forNode:(const struct TFENode *)arg2 withPasteboardItem:(void *)arg3 pbItemIndex:(unsigned long long)arg4 inPropertyList:(struct TFENodePropertyList *)arg5 forcePlace:(_Bool)arg6 applyNow:(_Bool)arg7;
@end

