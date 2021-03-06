//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue, _NSURLSessionEventDelegate, _NSURLSessionHTTPRewriter;

@interface __CFN_GlobalMetrics : NSObject
{
    struct os_unfair_lock_s lock;
    id <_NSURLSessionEventDelegate> delegate;
    NSObject<OS_dispatch_queue> *delegateQueue;
    id <_NSURLSessionHTTPRewriter> _HTTPRewriter;
    id <_NSURLSessionEventDelegate> _forwardingDelegate;
    NSMutableDictionary *_defaultSessionMetrics;
    NSMutableDictionary *_ephemeralSessionMetrics;
    NSMutableDictionary *_backgroundSessionMetrics;
}

+ (id)globalMetrics;
@property(retain, nonatomic) NSMutableDictionary *backgroundSessionMetrics; // @synthesize backgroundSessionMetrics=_backgroundSessionMetrics;
@property(retain, nonatomic) NSMutableDictionary *ephemeralSessionMetrics; // @synthesize ephemeralSessionMetrics=_ephemeralSessionMetrics;
@property(retain, nonatomic) NSMutableDictionary *defaultSessionMetrics; // @synthesize defaultSessionMetrics=_defaultSessionMetrics;
@property(retain, nonatomic) id <_NSURLSessionEventDelegate> forwardingDelegate; // @synthesize forwardingDelegate=_forwardingDelegate;
@property(retain) id <_NSURLSessionHTTPRewriter> HTTPRewriter; // @synthesize HTTPRewriter=_HTTPRewriter;
- (void).cxx_destruct;
- (void)sessionDestroy:(id)arg1;
- (void)sessionCreate:(id)arg1;
- (id)init;

@end

