//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSXPCListenerDelegate.h"
#import "_DPDaemonProtocol.h"

@class NSString, NSXPCListener, _DPStorage;

@interface _DPServer : NSObject <NSXPCListenerDelegate, _DPDaemonProtocol>
{
    NSXPCListener *_listener;
    _DPStorage *_db;
}

+ (BOOL)shouldNotRecord:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) _DPStorage *db; // @synthesize db=_db;
@property(readonly, nonatomic) NSXPCListener *listener; // @synthesize listener=_listener;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (BOOL)retireReports:(id)arg1 inDirectory:(id)arg2;
- (void)retireReports:(id)arg1 withReply:(CDUnknownBlockType)arg2;
- (id)reportsNotYetSubmittedInDirecory:(id)arg1;
- (void)reportsNotYetSubmittedWithReply:(CDUnknownBlockType)arg1;
- (void)recordWords:(id)arg1 forKey:(id)arg2 withReply:(CDUnknownBlockType)arg3;
- (void)recordStrings:(id)arg1 forKey:(id)arg2 withReply:(CDUnknownBlockType)arg3;
- (void)recordNumbers:(id)arg1 forKey:(id)arg2 withReply:(CDUnknownBlockType)arg3;
- (void)recordBitValues:(id)arg1 forKey:(id)arg2 withReply:(CDUnknownBlockType)arg3;
- (void)recordValues:(id)arg1 forKey:(id)arg2 usingSelector:(SEL)arg3;
- (void)start;
- (id)initWithDatabaseDirectoryPath:(id)arg1 reportsDirectoryPath:(id)arg2 enablePeriodicTasks:(BOOL)arg3 enterSandbox:(BOOL)arg4;
- (void)setupPeriodicTasksWith:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

