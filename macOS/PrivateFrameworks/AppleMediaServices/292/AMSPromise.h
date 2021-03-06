//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AMSPromiseCompletionBlocks, AMSPromiseResult, NSConditionLock;

@interface AMSPromise : NSObject
{
    AMSPromiseCompletionBlocks *_completionBlocks;
    AMSPromiseResult *_promiseResult;
    NSConditionLock *_stateLock;
}

+ (id)_globalPromiseStorageAccessQueue;
+ (id)_globalPromiseStorage;
+ (void)_finishPromise:(id)arg1 withPromise:(id)arg2;
+ (BOOL)_errorIsTimeOutError:(id)arg1;
+ (BOOL)_errorIsCanceledError:(id)arg1;
+ (void)_enumeratePromises:(id)arg1 startingAt:(long long)arg2 block:(CDUnknownBlockType)arg3;
+ (void)_configureFlattenedPromise:(id)arg1 withPromises:(id)arg2 results:(id)arg3 previousError:(id)arg4 currentPromiseIndex:(unsigned long long)arg5;
+ (id)promiseWithFlattenedPromises:(id)arg1;
+ (id)promiseWithAny:(id)arg1 timeout:(double)arg2;
+ (id)promiseWithAny:(id)arg1;
+ (id)promiseWithAll:(id)arg1 timeout:(double)arg2;
+ (id)promiseWithAll:(id)arg1;
+ (id)promiseWithResult:(id)arg1;
+ (id)promiseWithError:(id)arg1;
+ (id)promiseFinishedWithDefaultErrorOrResult:(id)arg1;
- (void).cxx_destruct;
@property(retain) NSConditionLock *stateLock; // @synthesize stateLock=_stateLock;
@property(retain) AMSPromiseResult *promiseResult; // @synthesize promiseResult=_promiseResult;
@property(retain) AMSPromiseCompletionBlocks *completionBlocks; // @synthesize completionBlocks=_completionBlocks;
- (BOOL)_isFinished;
- (BOOL)_finishWithResult:(id)arg1 error:(id)arg2 logDuplicateFinishes:(BOOL)arg3;
- (void)_addBlock:(CDUnknownBlockType)arg1 orCallWithResult:(CDUnknownBlockType)arg2;
- (CDUnknownBlockType)nilValueCompletionHandlerAdapter;
- (CDUnknownBlockType)errorOnlyCompletionHandlerAdapter;
- (CDUnknownBlockType)completionHandlerAdapter;
- (CDUnknownBlockType)boolCompletionHandlerAdapter;
- (BOOL)finishWithResult:(id)arg1 error:(id)arg2;
- (BOOL)finishWithResult:(id)arg1;
- (BOOL)finishWithPromise:(id)arg1;
- (BOOL)finishWithError:(id)arg1;
- (BOOL)cancel;
- (id)thenWithBlock:(CDUnknownBlockType)arg1;
- (id)continueWithBlock:(CDUnknownBlockType)arg1;
- (id)catchWithBlock:(CDUnknownBlockType)arg1;
- (void)waitUntilFinishedWithTimeout:(double)arg1;
- (void)waitUntilFinished;
- (void)startTimeout:(double)arg1;
- (id)resultWithTimeout:(double)arg1 error:(id *)arg2;
- (id)resultWithError:(id *)arg1;
- (id)resultBeforeDate:(id)arg1 error:(id *)arg2;
- (void)addSuccessBlock:(CDUnknownBlockType)arg1;
- (void)addFinishBlock:(CDUnknownBlockType)arg1;
- (void)addErrorBlock:(CDUnknownBlockType)arg1;
@property(readonly, getter=isTimedOut) BOOL timedOut;
@property(readonly, getter=isFinished) BOOL finished;
@property(readonly, getter=isCancelled) BOOL cancelled;
- (id)promiseWithTimeout:(double)arg1;
- (id)initWithTimeout:(double)arg1;
- (id)init;
- (id)binaryPromiseAdapter;

@end

