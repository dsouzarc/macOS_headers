//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSObject<OS_dispatch_queue>;

@interface _SUAppStoreControllerCancelHandler : NSObject
{
    NSArray *_keys;
    BOOL _isCancelled;
    NSObject<OS_dispatch_queue> *_syncQueue;
}

- (id)description;
- (void)cancelUsingConnection:(id)arg1;
- (void)setProductKeys:(id)arg1;
- (BOOL)isCancelled;
- (void)dealloc;
- (id)init;

@end

