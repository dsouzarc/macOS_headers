//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Proximity/PRProximityEstimatorDelegate-Protocol.h>

@class NSMutableDictionary, NSSet, NSSortDescriptor, NSString, PRProximityEstimator;
@protocol OS_dispatch_queue, OS_os_log, PRSharingSessionDelegate;

@interface PRSharingSession : NSObject <PRProximityEstimatorDelegate>
{
    _Bool _currentlyInitiating;
    NSObject<OS_os_log> *_logger;
    NSSet *_contacts;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSMutableDictionary *_trackedBTPeers;
    NSMutableDictionary *_trackedBTPeersDevice;
    PRProximityEstimator *_btProxEstimator;
    NSMutableDictionary *_scores;
    struct SharingImportanceMeasurements _measurements;
    struct unique_ptr<SharingImportanceManager, std::__1::default_delete<SharingImportanceManager>> _estimator;
    BOOL _useFullEstimator;
    NSSortDescriptor *_scoreSortDescriptor;
    double _lastUpdateTime;
    double _updateInterval;
    id <PRSharingSessionDelegate> _delegate;
}

+ (basic_string_a1f69cfb)UIntToHexString:(unsigned long long)arg1 len:(unsigned long long)arg2;
+ (id)HexStringToNSDataMac:(const basic_string_a1f69cfb *)arg1;
+ (id)UUIDStringToNSDataMac:(const basic_string_a1f69cfb *)arg1 len:(unsigned long long)arg2;
+ (id)UUIDToNSDataMac:(id)arg1 len:(unsigned long long)arg2;
+ (id)NSDataMacToUUID:(id)arg1;
@property __weak id <PRSharingSessionDelegate> delegate; // @synthesize delegate=_delegate;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)invokeDelegateBlock:(CDUnknownBlockType)arg1;
- (long long)CoarseRangeToProx:(int)arg1;
- (int)ProxToCoarseRange:(long long)arg1;
- (void)didFailWithError:(id)arg1;
- (void)estimator:(id)arg1 didEstimateProximity:(long long)arg2 toPeer:(id)arg3;
- (void)logScores:(id)arg1;
- (void)updateScoresWithNewMeasurement:(const struct NeighborMeasurements *)arg1;
- (id)convertStringToNSData:(basic_string_a1f69cfb)arg1;
- (void)stopProx;
- (BOOL)trackNewBTPeer:(id)arg1 withDviceModel:(id)arg2 error:(id *)arg3;
- (BOOL)addRssiSample:(double)arg1 channel:(unsigned int)arg2 forPeer:(id)arg3 peerDeviceModel:(id)arg4 withError:(id *)arg5;
- (void)stopInitiating;
- (void)startInitiating;
- (id)initWithDelegate:(id)arg1 delegateQueue:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

