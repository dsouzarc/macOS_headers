//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

@class NSArray, NSString;

@protocol NSURLStorageCacheClient
- (void)notifyCacheClientOfTimeRelativeResponses:(NSArray *)arg1;
- (void)notifyCachedURLResponseBecameFileBacked:(NSString *)arg1 filePath:(NSString *)arg2 forUUID:(NSString *)arg3;
@end

