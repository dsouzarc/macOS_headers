//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMapTable;

@interface GEORPLegacyProblemRequester : NSObject
{
    NSMapTable *_pendingRequests;
    struct os_unfair_lock_s _pendingRequestsLock;
}

+ (id)sharedRequester;
- (void).cxx_destruct;
- (void)cancelRequest:(id)arg1;
- (void)startStatusRequest:(id)arg1 finished:(CDUnknownBlockType)arg2 networkActivity:(CDUnknownBlockType)arg3 error:(CDUnknownBlockType)arg4;
- (void)startSubmissionRequest:(id)arg1 finished:(CDUnknownBlockType)arg2 networkActivity:(CDUnknownBlockType)arg3 error:(CDUnknownBlockType)arg4;
- (void)dealloc;
- (id)init;

@end

