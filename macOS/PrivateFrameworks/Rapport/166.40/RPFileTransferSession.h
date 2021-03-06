//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Rapport/NSSecureCoding-Protocol.h>
#import <Rapport/RPMessageable-Protocol.h>

@class CUBonjourAdvertiser, CUBonjourBrowser, CUBonjourDevice, CUTCPServer, NSData, NSString, NSURL, RPConnection, RPFileTransferItem, RPFileTransferProgress, RPFileTransferSendEntry, RPIdentity;
@protocol OS_dispatch_io, OS_dispatch_queue;

@interface RPFileTransferSession : NSObject <NSSecureCoding, RPMessageable>
{
    BOOL _activateCalled;
    CUBonjourAdvertiser *_bonjourAdvertiser;
    CUBonjourBrowser *_bonjourBrowser;
    CUBonjourDevice *_bonjourDevice;
    unsigned int _cnxIDLast;
    struct NSMutableSet *_connections;
    RPConnection *_controlCnx;
    int _controlState;
    BOOL _finishPending;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    RPIdentity *_peerIdentity;
    RPFileTransferProgress *_progressCurrent;
    unsigned long long _receiveFileIDLast;
    NSObject<OS_dispatch_io> *_receiveFileIO;
    RPFileTransferItem *_receiveFileItemCurrent;
    NSString *_receiveFileParentPath;
    struct NSMutableDictionary *_registeredEvents;
    struct NSMutableDictionary *_registeredRequests;
    RPIdentity *_selfIdentity;
    struct NSMutableArray *_sendArray;
    RPFileTransferSendEntry *_sendCurrent;
    unsigned long long _sendFileIDLast;
    NSObject<OS_dispatch_io> *_sendFileIO;
    CUTCPServer *_tcpServer;
    struct LogCategory *_ucat;
    unsigned int _flags;
    CDUnknownBlockType _completionHandler;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSString *_label;
    NSData *_peerPublicKey;
    CDUnknownBlockType _progressHandler;
    CDUnknownBlockType _receivedItemHandler;
    NSData *_selfPublicKey;
    NSString *_targetID;
    NSURL *_temporaryDirectoryURL;
    NSData *_selfSecretKey;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSData *selfSecretKey; // @synthesize selfSecretKey=_selfSecretKey;
@property(copy, nonatomic) NSURL *temporaryDirectoryURL; // @synthesize temporaryDirectoryURL=_temporaryDirectoryURL;
@property(copy, nonatomic) NSString *targetID; // @synthesize targetID=_targetID;
@property(copy, nonatomic) NSData *selfPublicKey; // @synthesize selfPublicKey=_selfPublicKey;
@property(copy, nonatomic) CDUnknownBlockType receivedItemHandler; // @synthesize receivedItemHandler=_receivedItemHandler;
@property(copy, nonatomic) CDUnknownBlockType progressHandler; // @synthesize progressHandler=_progressHandler;
@property(copy, nonatomic) NSData *peerPublicKey; // @synthesize peerPublicKey=_peerPublicKey;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(nonatomic) unsigned int flags; // @synthesize flags=_flags;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (void).cxx_destruct;
- (void)_receivedFileNextData:(id)arg1 done:(_Bool)arg2 ioError:(int)arg3 fileID:(unsigned long long)arg4 responseHandler:(CDUnknownBlockType)arg5;
- (void)_receivedFileData:(id)arg1 data:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;
- (void)_receivedFileEnd:(id)arg1 error:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;
- (void)_receivedFileStart:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;
- (void)_sendDone:(id)arg1 entry:(id)arg2;
- (void)_sendNextData:(id)arg1 done:(_Bool)arg2 ioError:(int)arg3 entry:(id)arg4;
- (void)_sendStartEntry:(id)arg1;
- (void)_processSendArray;
- (void)_processFinish;
- (void)_handleIncomingConnectionEnded:(id)arg1;
- (void)_handleIncomingConnectionStarted:(id)arg1;
- (BOOL)_activateTargetAndReturnError:(id *)arg1;
- (void)_controlCnxStartIfNeeded;
- (void)_handleDeviceLost:(id)arg1;
- (void)_handleDeviceFound:(id)arg1;
- (BOOL)_activateSourceAndReturnError:(id *)arg1;
- (void)_receivedRequestID:(id)arg1 request:(id)arg2 options:(id)arg3 responseHandler:(CDUnknownBlockType)arg4;
- (void)sendRequestID:(id)arg1 request:(id)arg2 destinationID:(id)arg3 options:(id)arg4 responseHandler:(CDUnknownBlockType)arg5;
- (void)deregisterRequestID:(id)arg1;
- (void)registerRequestID:(id)arg1 options:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)_receivedEventID:(id)arg1 event:(id)arg2 options:(id)arg3;
- (void)sendEventID:(id)arg1 event:(id)arg2 destinationID:(id)arg3 options:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)deregisterEventID:(id)arg1;
- (void)registerEventID:(id)arg1 options:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)_reportProgressType:(int)arg1;
- (void)_reportProgressControlState;
- (void)_reportCompletion:(id)arg1;
- (void)finish;
- (void)addItem:(id)arg1;
- (void)_invalidated;
- (void)_invalidate;
- (void)invalidate;
- (BOOL)_activateAndReturnError:(id *)arg1;
- (void)activate;
- (BOOL)prepareTemplateAndReturnError:(id *)arg1;
- (id)descriptionWithLevel:(int)arg1;
- (id)description;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

