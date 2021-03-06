//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebKit/WKObject-Protocol.h>

@class NSString, _WKAutomationSessionConfiguration;
@protocol _WKAutomationSessionDelegate;

@interface _WKAutomationSession : NSObject <WKObject>
{
    struct ObjectStorage<WebKit::WebAutomationSession> _session;
    struct RetainPtr<_WKAutomationSessionConfiguration> _configuration;
    struct WeakObjCPtr<id<_WKAutomationSessionDelegate>> _delegate;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly) struct Object *_apiObject;
- (void)markEventAsSynthesizedForAutomation:(id)arg1;
- (BOOL)wasEventSynthesizedForAutomation:(id)arg1;
@property(readonly, nonatomic, getter=isSimulatingUserInteraction) BOOL simulatingUserInteraction;
@property(readonly, nonatomic, getter=isPaired) BOOL paired;
@property(readonly, copy, nonatomic) _WKAutomationSessionConfiguration *configuration;
@property(copy, nonatomic) NSString *sessionIdentifier;
@property(nonatomic) __weak id <_WKAutomationSessionDelegate> delegate;
- (void)dealloc;
- (id)initWithConfiguration:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

