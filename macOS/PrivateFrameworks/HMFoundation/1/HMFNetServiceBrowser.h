//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HMFoundation/NSNetServiceBrowserDelegate-Protocol.h>

@class NSArray, NSHashTable, NSNetServiceBrowser, NSObject, NSString;
@protocol HMFNetServiceBrowserDelegate, OS_dispatch_queue;

@interface HMFNetServiceBrowser : HMFObject <NSNetServiceBrowserDelegate>
{
    NSHashTable *_cachedNetServices;
    BOOL _shouldCache;
    BOOL _browsing;
    id <HMFNetServiceBrowserDelegate> _delegate;
    NSString *_domain;
    NSString *_serviceType;
    NSObject<OS_dispatch_queue> *_clientQueue;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSObject<OS_dispatch_queue> *_propertyQueue;
    NSNetServiceBrowser *_internal;
    CDUnknownBlockType _browseBlock;
}

+ (id)shortDescription;
@property(copy, nonatomic) CDUnknownBlockType browseBlock; // @synthesize browseBlock=_browseBlock;
@property(readonly, nonatomic) NSNetServiceBrowser *internal; // @synthesize internal=_internal;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *propertyQueue; // @synthesize propertyQueue=_propertyQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property(readonly, copy, nonatomic) NSString *serviceType; // @synthesize serviceType=_serviceType;
@property(readonly, copy, nonatomic) NSString *domain; // @synthesize domain=_domain;
@property __weak id <HMFNetServiceBrowserDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)netServiceBrowser:(id)arg1 didRemoveService:(id)arg2 moreComing:(BOOL)arg3;
- (void)netServiceBrowser:(id)arg1 didRemoveDomain:(id)arg2 moreComing:(BOOL)arg3;
- (void)netServiceBrowser:(id)arg1 didFindService:(id)arg2 moreComing:(BOOL)arg3;
- (void)netServiceBrowser:(id)arg1 didNotSearch:(id)arg2;
- (void)netServiceBrowserDidStopSearch:(id)arg1;
- (void)netServiceBrowserWillSearch:(id)arg1;
- (void)notifyDelegateOfRemovedService:(id)arg1;
- (void)notifyDelegateOfAddedService:(id)arg1;
- (void)notifyDelegateBrowserStoppedWithError:(id)arg1;
- (void)_stopBrowsingWithError:(id)arg1;
- (void)stopBrowsing;
- (void)startBrowsingWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(nonatomic, getter=isBrowsing) BOOL browsing; // @synthesize browsing=_browsing;
- (void)removeNetServiceFromCache:(id)arg1;
- (void)addNetServiceToCache:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *cachedNetServices;
@property(nonatomic) BOOL shouldCache; // @synthesize shouldCache=_shouldCache;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *debugDescription;
- (id)descriptionWithPointer:(BOOL)arg1;
- (id)shortDescription;
- (void)dealloc;
- (id)initWithDomain:(id)arg1 serviceType:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

