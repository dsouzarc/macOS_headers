//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CoreData/NSManagedObjectContext.h>

@class NSString;

@interface NSManagedObjectContext (IC)
- (void)ic_performBlockAndWait:(CDUnknownBlockType)arg1 andPerformBlockAndWaitOnMainThread:(CDUnknownBlockType)arg2;
- (void)ic_performBlock:(CDUnknownBlockType)arg1 andPerformBlockOnMainThread:(CDUnknownBlockType)arg2;
- (BOOL)ic_saveWithLogDescription:(id)arg1;
- (BOOL)ic_save;
@property(readonly, nonatomic) BOOL ic_isMainThreadContext;
@property(retain, nonatomic) NSString *ic_debugName;
@end

