//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSXPCListenerDelegate.h"

@class NSObject<OS_dispatch_queue>, NSString, NSTimer, NSXPCConnection, NSXPCListener, PKInAppPaymentService, PKPaymentAuthorizationCoordinatorExportedObject, PKPaymentRequest;

@interface PKPaymentAuthorizationCoordinator : NSObject <NSXPCListenerDelegate>
{
    BOOL _didPresent;
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCConnection *_connection;
    NSTimer *_timer;
    PKPaymentRequest *_paymentRequest;
    NSString *_hostIdentifier;
    PKPaymentAuthorizationCoordinatorExportedObject *_exportedObject;
    CDUnknownBlockType _presentationCompletionBlock;
    PKInAppPaymentService *_inAppPaymentService;
    NSXPCListener *_listener;
    double _connectionTimeout;
}

+ (BOOL)canMakePaymentsUsingNetworks:(id)arg1 capabilities:(unsigned long long)arg2 webDomain:(id)arg3;
+ (BOOL)canMakePaymentsUsingNetworks:(id)arg1 webDomain:(id)arg2;
+ (BOOL)canMakePayments;
- (void).cxx_destruct;
@property(nonatomic) double connectionTimeout; // @synthesize connectionTimeout=_connectionTimeout;
@property(retain, nonatomic) NSXPCListener *listener; // @synthesize listener=_listener;
@property(retain, nonatomic) PKInAppPaymentService *inAppPaymentService; // @synthesize inAppPaymentService=_inAppPaymentService;
@property(copy, nonatomic) CDUnknownBlockType presentationCompletionBlock; // @synthesize presentationCompletionBlock=_presentationCompletionBlock;
@property(retain, nonatomic) PKPaymentAuthorizationCoordinatorExportedObject *exportedObject; // @synthesize exportedObject=_exportedObject;
@property(retain, nonatomic) NSString *hostIdentifier; // @synthesize hostIdentifier=_hostIdentifier;
@property(retain, nonatomic) PKPaymentRequest *paymentRequest; // @synthesize paymentRequest=_paymentRequest;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) BOOL didPresent; // @synthesize didPresent=_didPresent;
- (void)_viewServiceTimerFired:(id)arg1;
- (void)_invokeCallbackWithSuccess:(BOOL)arg1;
- (id)_remoteObjectProxyWithFailureHandler:(CDUnknownBlockType)arg1;
- (id)_remoteObjectProxy;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)dismissWithCompletion:(CDUnknownBlockType)arg1;
- (void)presentWithOrientation:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)presentWithCompletion:(CDUnknownBlockType)arg1;
@property(nonatomic, setter=_setPrivateDelegate:) __weak id <PKPaymentAuthorizationCoordinatorPrivateDelegate> _privateDelegate;
@property(nonatomic) __weak id <PKPaymentAuthorizationCoordinatorDelegate> delegate;
- (void)dealloc;
- (id)initWithPaymentRequest:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

