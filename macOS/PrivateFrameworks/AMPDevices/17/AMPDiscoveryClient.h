//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AMPDeviceDiscoveryEventsProtocol.h"

@class DeviceCollection;

@interface AMPDiscoveryClient : NSObject <AMPDeviceDiscoveryEventsProtocol>
{
    DeviceCollection *_deviceCollection;
}

- (void).cxx_destruct;
@property(nonatomic) __weak DeviceCollection *deviceCollection; // @synthesize deviceCollection=_deviceCollection;
- (void)discoveryServiceWillTerminate;
- (void)completedOperationForDeviceWithIdentifier:(id)arg1;
- (void)startedOperationForDeviceWithIdentifier:(id)arg1 allowCancel:(BOOL)arg2;
- (void)nameChangedTo:(id)arg1 forDeviceWithIdentifier:(id)arg2;
- (void)deviceDisconnected:(id)arg1;
- (void)deviceChanged:(id)arg1;
- (void)deviceConnected:(id)arg1;
- (id)initWithDeviceCollection:(id)arg1;

@end

