//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSError, NSString, NSXPCConnection;
@protocol AuthenticationHintsDelegate, OS_dispatch_queue, OS_dispatch_semaphore;

@interface LUIAuthenticationServiceProvider : NSObject
{
    NSObject<OS_dispatch_queue> *providerQueue;
    NSObject<OS_dispatch_semaphore> *providerSemaphore;
    NSString *_serviceName;
    NSString *_userName;
    NSXPCConnection *_serviceConnection;
    NSError *_error;
    BOOL _sessionUnlocked;
    BOOL _serviceActive;
    id <AuthenticationHintsDelegate> _hintsDelegate;
}

@property BOOL serviceActive; // @synthesize serviceActive=_serviceActive;
@property id <AuthenticationHintsDelegate> hintsDelegate; // @synthesize hintsDelegate=_hintsDelegate;
@property BOOL sessionUnlocked; // @synthesize sessionUnlocked=_sessionUnlocked;
@property(retain) NSXPCConnection *serviceConnection; // @synthesize serviceConnection=_serviceConnection;
@property(copy) NSError *error; // @synthesize error=_error;
@property(copy) NSString *userName; // @synthesize userName=_userName;
@property(copy) NSString *serviceName; // @synthesize serviceName=_serviceName;
- (void)dealloc;
- (void)deactivateWithContext:(id)arg1;
- (void)deactivate;
- (void)activateMode:(long long)arg1 withOptions:(id)arg2;
- (void)activate;
- (void)activateWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)connectionWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)initWithServiceName:(id)arg1;

@end

