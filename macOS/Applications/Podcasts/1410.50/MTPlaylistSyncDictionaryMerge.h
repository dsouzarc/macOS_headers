//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;
@protocol OS_os_log;

@interface MTPlaylistSyncDictionaryMerge : NSObject
{
    BOOL _refreshContentsOfUpdatedOrInsertedPlaylists;
    BOOL _syncMergeIsFromCloud;
    NSObject<OS_os_log> *_loggingCategory;
    NSArray *_dictionariesToMerge;
    CDUnknownBlockType _canDeletePlaylistUUIDBlock;
}

@property(nonatomic) BOOL syncMergeIsFromCloud; // @synthesize syncMergeIsFromCloud=_syncMergeIsFromCloud;
@property(nonatomic) BOOL refreshContentsOfUpdatedOrInsertedPlaylists; // @synthesize refreshContentsOfUpdatedOrInsertedPlaylists=_refreshContentsOfUpdatedOrInsertedPlaylists;
@property(copy, nonatomic) CDUnknownBlockType canDeletePlaylistUUIDBlock; // @synthesize canDeletePlaylistUUIDBlock=_canDeletePlaylistUUIDBlock;
@property(readonly, nonatomic) NSArray *dictionariesToMerge; // @synthesize dictionariesToMerge=_dictionariesToMerge;
@property(readonly, nonatomic) NSObject<OS_os_log> *loggingCategory; // @synthesize loggingCategory=_loggingCategory;
- (void).cxx_destruct;
- (void)_mergeSetting:(id)arg1 syncObj:(id)arg2;
- (void)_addSetting:(id)arg1 syncObj:(id)arg2 playlist:(id)arg3;
- (void)_applyOrderingInSyncDictionary:(id)arg1 playlist:(id)arg2;
- (void)performAndWaitWithContext:(id)arg1 save:(BOOL)arg2;
- (id)initWithLoggingCategory:(id)arg1 dictionariesToMerge:(id)arg2;

@end

