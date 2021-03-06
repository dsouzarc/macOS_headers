//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class PLPhotoLibraryPathManager;

@interface PLDataMigratorSupport : NSObject
{
    struct os_unfair_lock_s _lock;
    PLPhotoLibraryPathManager *_pathManager;
}

@property(readonly, nonatomic) PLPhotoLibraryPathManager *pathManager; // @synthesize pathManager=_pathManager;
- (void).cxx_destruct;
- (void)recordDataMigrationInfo:(id)arg1;
- (BOOL)hasCapturedOTARestoreStatus;
- (void)setCapturedOTARestoreStatus;
- (void)writeModelMigratorPostProcessingToken;
- (id)initWithPathManager:(id)arg1;

@end

