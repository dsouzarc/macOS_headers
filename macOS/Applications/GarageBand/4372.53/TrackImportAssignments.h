//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

@interface TrackImportAssignments : NSObject
{
    NSMutableDictionary *_tiAssignmentDict;
    NSMutableArray *_tiAssignmentDictUndoArray;
    int _tiAssignmentDictUndoIndex;
}

- (long long)cacheStoreImportedDstAuConfIndex:(long long)arg1 srcAuConfIndex:(long long)arg2;
- (void)cacheValidateAssignmentDictionaryDstSong:(struct CSong *)arg1;
- (int)cacheCheckForAlreadyImportedGInstDstSong:(struct CSong *)arg1 srcSong:(struct CSong *)arg2 srcGInstID:(int)arg3;
- (struct SAUCONFHEADER *)cacheCheckForAlreadyImportedObjectDstSong:(struct CSong *)arg1 srcSong:(struct CSong *)arg2 searchSrcSph:(struct SAUCONFUNION *)arg3;
- (int)cacheStoreImportedDstGInstID:(int)arg1 srcGInstID:(int)arg2;
- (int)cacheRecallImportedDstBusIndexForSrcBusIndex:(int)arg1;
- (void)cacheStoreImportedDstBusIndex:(int)arg1 srcBusIndex:(int)arg2;
- (void)cacheRemoveAllImportedGInstIDsAndAuConfIndexes;
- (void)cacheRemoveImportedGInstID:(int)arg1;
- (void)redo;
- (void)undo;
- (void)addUndo;
- (void)removeAllObjects;
- (id)tiAssignmentDict;
- (void)dealloc;
- (id)init;

@end

