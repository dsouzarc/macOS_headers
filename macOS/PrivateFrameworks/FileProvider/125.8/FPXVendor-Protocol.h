//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <FileProvider/FPXOperationService-Protocol.h>
#import <FileProvider/FPXVendorMessaging-Protocol.h>
#import <FileProvider/FPXVendorObservation-Protocol.h>

@class FPFileProviderService, FPItemID, FPSandboxingURLWrapper, NSArray, NSDate, NSDictionary, NSFileHandle, NSString, NSURL;

@protocol FPXVendor <FPXOperationService, FPXVendorObservation, FPXVendorMessaging>
- (void)dumpIndexStateForDomain:(NSString *)arg1 toFileHandler:(NSFileHandle *)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)dropIndexForDomain:(NSString *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)indexOneBatchInDomain:(NSString *)arg1 completionHandler:(void (^)(NSError *, BOOL))arg2;
- (void)removeTrashedItemsOlderThanDate:(NSDate *)arg1 completionHandler:(void (^)(void))arg2;
- (void)refreshInstalledAppsWithCompletionHandler:(void (^)(NSError *))arg1;
- (void)deleteSearchableItemsWithDomainIdentifiers:(NSArray *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)didUpdateAlternateContentsDocumentForDocumentAtURL:(NSURL *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)setAlternateContentsURL:(FPSandboxingURLWrapper *)arg1 onDocumentURL:(NSURL *)arg2 completionHandler:(void (^)(FPItemID *, NSError *))arg3;
- (void)URLForItemID:(FPItemID *)arg1 creatingPlaceholderIfMissing:(BOOL)arg2 ignoreAlternateContentsURL:(BOOL)arg3 completionHandler:(void (^)(FPSandboxingURLWrapper *, FPSandboxingURLWrapper *, NSError *))arg4;
- (void)didChangeItemID:(FPItemID *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)privilegedValuesForAttributes:(NSArray *)arg1 forItemAtURL:(NSURL *)arg2 completionHandler:(void (^)(NSDictionary *, NSError *))arg3;
- (void)updateDomains:(NSDictionary *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)fetchRemoteFileProviderEndpointForProtocolName:(NSString *)arg1 service:(FPFileProviderService *)arg2 itemURL:(NSURL *)arg3 needsItemURL:(BOOL)arg4 completionHandler:(void (^)(NSXPCListenerEndpoint *, NSArray *, NSURL *, NSError *))arg5;
- (void)trashItemAtURL:(NSURL *)arg1 completionHandler:(void (^)(FPItem *, NSError *))arg2;
- (void)itemForURL:(NSURL *)arg1 completionHandler:(void (^)(FPItem *, NSError *))arg2;
- (void)identifierForItemAtURL:(NSURL *)arg1 completionHandler:(void (^)(FPItemID *, NSError *))arg2;
- (void)itemChangedAtURL:(NSURL *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)evictItemAtURL:(NSURL *)arg1 completionHandler:(void (^)(FPItemID *, NSError *))arg2;
- (void)startProvidingItemAtURL:(NSURL *)arg1 readingOptions:(unsigned long long)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)providePlaceholderAtURL:(NSURL *)arg1 completionHandler:(void (^)(NSURL *, NSError *))arg2;
@end

