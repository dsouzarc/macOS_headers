//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FIRStorageMetadata, FIRStorageReference, FIRStorageTaskSnapshot, GTMSessionFetcher, GTMSessionFetcherService, NSError, NSObject<OS_dispatch_queue>, NSProgress, NSURLRequest;

@interface FIRStorageTask : NSObject
{
    long long _state;
    FIRStorageMetadata *_metadata;
    NSError *_error;
    NSProgress *_progress;
    FIRStorageReference *_reference;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    FIRStorageTaskSnapshot *_snapshot;
    NSURLRequest *_baseRequest;
    GTMSessionFetcher *_fetcher;
    GTMSessionFetcherService *_fetcherService;
    CDUnknownBlockType _fetcherCompletion;
}

@property(readonly, copy) CDUnknownBlockType fetcherCompletion; // @synthesize fetcherCompletion=_fetcherCompletion;
@property(readonly, nonatomic) GTMSessionFetcherService *fetcherService; // @synthesize fetcherService=_fetcherService;
@property(retain) GTMSessionFetcher *fetcher; // @synthesize fetcher=_fetcher;
@property(readonly, copy, nonatomic) NSURLRequest *baseRequest; // @synthesize baseRequest=_baseRequest;
@property(retain, nonatomic) FIRStorageTaskSnapshot *snapshot; // @synthesize snapshot=_snapshot;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(retain, nonatomic) FIRStorageReference *reference; // @synthesize reference=_reference;
@property(retain, nonatomic) NSProgress *progress; // @synthesize progress=_progress;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) FIRStorageMetadata *metadata; // @synthesize metadata=_metadata;
@property long long state; // @synthesize state=_state;
- (void).cxx_destruct;
- (void)dispatchAsync:(CDUnknownBlockType)arg1;
- (id)initWithReference:(id)arg1 fetcherService:(id)arg2 dispatchQueue:(id)arg3;
- (id)init;

@end

