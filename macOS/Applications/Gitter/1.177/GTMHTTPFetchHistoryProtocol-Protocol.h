//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData, NSMutableURLRequest, NSURLRequest, NSURLResponse;
@protocol GTMCookieStorageProtocol;

@protocol GTMHTTPFetchHistoryProtocol <NSObject>
- (void)removeCachedDataForRequest:(NSURLRequest *)arg1;
- (void)updateFetchHistoryWithRequest:(NSURLRequest *)arg1 response:(NSURLResponse *)arg2 downloadedData:(NSData *)arg3;
- (id <GTMCookieStorageProtocol>)cookieStorage;
- (NSData *)cachedDataForRequest:(NSURLRequest *)arg1;
- (BOOL)shouldCacheETaggedData;
- (void)updateRequest:(NSMutableURLRequest *)arg1 isHTTPGet:(BOOL)arg2;
@end

