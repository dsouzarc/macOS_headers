//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSFileHandle, NSString;

@interface ACPrivilegedTask : NSObject
{
    struct AuthorizationOpaqueRef *_authorizationRef;
    NSFileHandle *_outputFileHandle;
    BOOL _running;
    int _processIdentifier;
    int _terminationStatus;
    NSString *_launchPath;
    NSArray *_arguments;
}

+ (id)launchedPrivilegedTaskWithLaunchPath:(id)arg1 arguments:(id)arg2;
+ (id)launchedPrivilegedTaskWithLaunchPath:(id)arg1;
+ (struct AuthorizationOpaqueRef *)sharedAuthorization;
@property(nonatomic, getter=isRunning) BOOL running; // @synthesize running=_running;
@property(nonatomic) int terminationStatus; // @synthesize terminationStatus=_terminationStatus;
@property(nonatomic) int processIdentifier; // @synthesize processIdentifier=_processIdentifier;
@property(copy, nonatomic) NSArray *arguments; // @synthesize arguments=_arguments;
@property(copy, nonatomic) NSString *launchPath; // @synthesize launchPath=_launchPath;
- (void).cxx_destruct;
- (id)description;
- (id)standardOutput;
- (void)waitUntilExit;
- (int)launch;
- (id)initWithLaunchPath:(id)arg1 arguments:(id)arg2;
- (id)initWithLaunchPath:(id)arg1;
- (id)init;

@end

