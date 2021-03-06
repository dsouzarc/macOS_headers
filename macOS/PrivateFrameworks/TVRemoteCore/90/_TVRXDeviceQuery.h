//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TVRemoteCore/_TVRCMatchPointDeviceQueryDelegate-Protocol.h>
#import <TVRemoteCore/_TVRCMediaRemoteDeviceQueryDelegate-Protocol.h>
#import <TVRemoteCore/_TVRCRapportDeviceQueryDelegate-Protocol.h>

@class NSMutableDictionary, NSSet, NSString, _TVRCMatchPointDeviceQuery, _TVRCMediaRemoteDeviceQuery, _TVRCRapportDeviceQuery;
@protocol _TVRXDeviceQueryDelegate;

@interface _TVRXDeviceQuery : NSObject <_TVRCMediaRemoteDeviceQueryDelegate, _TVRCRapportDeviceQueryDelegate, _TVRCMatchPointDeviceQueryDelegate>
{
    BOOL _isRunning;
    id <_TVRXDeviceQueryDelegate> _delegate;
    NSMutableDictionary *_aggregateDevices;
    _TVRCMediaRemoteDeviceQuery *_mediaRemoteQuery;
    _TVRCRapportDeviceQuery *_rapportDeviceQuery;
    _TVRCMatchPointDeviceQuery *_matchPointQuery;
}

@property(retain, nonatomic) _TVRCMatchPointDeviceQuery *matchPointQuery; // @synthesize matchPointQuery=_matchPointQuery;
@property(retain, nonatomic) _TVRCRapportDeviceQuery *rapportDeviceQuery; // @synthesize rapportDeviceQuery=_rapportDeviceQuery;
@property(retain, nonatomic) _TVRCMediaRemoteDeviceQuery *mediaRemoteQuery; // @synthesize mediaRemoteQuery=_mediaRemoteQuery;
@property(retain, nonatomic) NSMutableDictionary *aggregateDevices; // @synthesize aggregateDevices=_aggregateDevices;
@property(nonatomic) BOOL isRunning; // @synthesize isRunning=_isRunning;
@property(nonatomic) __weak id <_TVRXDeviceQueryDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)rapportDeviceQuery:(id)arg1 removedDevice:(id)arg2;
- (void)rapportDeviceQuery:(id)arg1 addedDevice:(id)arg2;
- (void)matchpointDeviceQuery:(id)arg1 removedService:(id)arg2;
- (void)matchpointDeviceQuery:(id)arg1 addedService:(id)arg2;
- (void)mediaRemoteDeviceQuery:(id)arg1 removedTelevision:(id)arg2;
- (void)mediaRemoteDeviceQuery:(id)arg1 addedTelevision:(id)arg2;
- (void)_notifyDelegateDidUpdateDevices;
- (void)_reevaluateAggregates;
- (id)_findAggregateForIdentifier:(id)arg1 createIfNeeded:(BOOL)arg2;
- (void)_stopSearch;
- (void)_startSearch;
- (void)stop;
- (void)start;
@property(readonly, copy, nonatomic) NSSet *devices;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

