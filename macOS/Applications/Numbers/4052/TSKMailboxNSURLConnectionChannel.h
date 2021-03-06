//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSKMailboxNetworkChannel.h"

#import "TSKICloudHTTPRequestSenderDelegate-Protocol.h"

@class NSMutableData, NSOperationQueue, NSString, TSKICloudHTTPRequestSender, TSKICloudHTTPRequestSenderFactory;

@interface TSKMailboxNSURLConnectionChannel : TSKMailboxNetworkChannel <TSKICloudHTTPRequestSenderDelegate>
{
    TSKICloudHTTPRequestSenderFactory *_requestSenderFactory;
    unsigned long long _statusCode;
    NSOperationQueue *_operationQueue;
    TSKICloudHTTPRequestSender *_requestSender;
    NSMutableData *_data;
}

@property(retain, nonatomic) NSMutableData *data; // @synthesize data=_data;
@property(retain, nonatomic) TSKICloudHTTPRequestSender *requestSender; // @synthesize requestSender=_requestSender;
- (void).cxx_destruct;
- (id)logDescription;
- (void)abort;
- (id)p_nextResponse;
- (id)p_responses;
- (void)_processResponses;
- (void)iCloudHTTPRequestSender:(id)arg1 didCompleteWithError:(id)arg2;
- (void)iCloudHTTPRequestSender:(id)arg1 didReceiveData:(id)arg2;
- (void)iCloudHTTPRequestSender:(id)arg1 didReceiveResponse:(id)arg2;
- (void)send:(id)arg1 seq:(int)arg2 sessionId:(id)arg3;
- (id)initWithName:(id)arg1 requestSenderFactory:(id)arg2 push:(BOOL)arg3 operationQueue:(id)arg4 responder:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

