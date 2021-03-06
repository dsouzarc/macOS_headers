//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding-Protocol.h"

@class NSDictionary, NSMutableDictionary;

@interface AZHardwareElement : NSObject <NSCoding>
{
    unsigned long long _instanceID;
    NSDictionary *fDescription;
    NSDictionary *fProperties;
    NSMutableDictionary *fConfiguration;
}

- (id)description;
- (id)deviceSettingsController;
- (int)radioProtocol;
- (double)softConnectInterval;
- (id)softConnectMessage;
- (_Bool)needsSoftConnect;
- (_Bool)isMacLayout;
- (_Bool)__isSecurable;
- (_Bool)hasSmartShift;
- (float)wheelResolution;
- (float)getAxisOrientation;
- (float)getResolution;
- (unsigned long)__getWheelCount;
- (unsigned long)getButtonCount;
- (unsigned char)__getChannel;
- (double)batteryCondition;
- (_Bool)batteryChargingStatus;
- (double)_computeBatteryMileage:(double)arg1 dischargeRate:(double)arg2 betweenSamples:(id)arg3;
- (double)_computeBatteryDischargeRate:(id)arg1;
- (double)batteryMileageForData:(id)arg1;
- (double)batteryMileage;
- (_Bool)hasBatteryMileage;
- (double)batteryLevel;
- (unsigned long)locationID;
- (_Bool)isFLockable;
- (_Bool)isConnected;
- (_Bool)isCordless;
- (_Bool)isHub;
- (_Bool)isReceiver;
- (_Bool)isPresenter;
- (_Bool)isKeyboard;
- (_Bool)isPointing;
- (_Bool)isTrackball;
- (_Bool)isMouse;
- (_Bool)isCorded;
- (unsigned long)releaseNumber;
- (unsigned long)subProductID;
- (unsigned long)originalProductID;
- (unsigned long)productID;
- (id)name;
- (id)maximumSystemVersion;
- (id)minimumSystemVersion;
- (id)_productName;
- (id)_codeName;
- (id)_deviceKind;
- (id)_deviceIdentifier;
- (id)deviceFamily;
- (_Bool)isKnownAndSupported;
- (void)removeConfigurationForKey:(id)arg1;
- (void)setConfiguration:(id)arg1 forKey:(id)arg2;
- (id)configurationForKey:(id)arg1;
- (void)setProperties:(id)arg1;
- (id)properties;
- (void)setDescription:(id)arg1;
- (id)_getDescription;
- (unsigned long long)instanceID;
- (void)dealloc;
- (id)replacementObjectForPortCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

