//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKit/HMFLogging-Protocol.h>
#import <HomeKit/HMFMerging-Protocol.h>
#import <HomeKit/HMFMessageReceiver-Protocol.h>
#import <HomeKit/NSSecureCoding-Protocol.h>

@class HMAccessorySettings, HMFUnfairLock, NSArray, NSMutableOrderedSet, NSString, NSUUID, _HMContext;
@protocol NSCopying><NSSecureCoding, OS_dispatch_queue, _HMAccesorySettingDelegate;

@interface _HMAccessorySetting : NSObject <HMFLogging, HMFMessageReceiver, HMFMerging, NSSecureCoding>
{
    HMFUnfairLock *_lock;
    NSMutableOrderedSet *_constraints;
    BOOL _reflected;
    id <NSCopying><NSSecureCoding> _value;
    id <_HMAccesorySettingDelegate> _delegate;
    NSUUID *_identifier;
    long long _type;
    unsigned long long _properties;
    NSString *_name;
    HMAccessorySettings *_accessorySettings;
    _HMContext *_context;
}

+ (BOOL)supportsSecureCoding;
+ (id)supportedConstraintClasses;
+ (id)supportedValueClasses;
+ (id)logCategory;
+ (id)_replaceConstraintsPayloadWithAdditions:(id)arg1 removals:(id)arg2;
+ (id)_encodedConstraintsToAdd:(id)arg1;
+ (id)_encodedConstraintsToRemove:(id)arg1;
+ (id)shortDescription;
@property(retain, nonatomic) _HMContext *context; // @synthesize context=_context;
@property(retain, nonatomic) HMAccessorySettings *accessorySettings; // @synthesize accessorySettings=_accessorySettings;
@property(readonly, copy) NSString *name; // @synthesize name=_name;
@property(readonly) unsigned long long properties; // @synthesize properties=_properties;
@property(readonly) long long type; // @synthesize type=_type;
@property(readonly, copy) NSUUID *identifier; // @synthesize identifier=_identifier;
@property __weak id <_HMAccesorySettingDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
- (id)messageDestination;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (BOOL)mergeConstraints:(id)arg1;
- (BOOL)mergeObject:(id)arg1;
- (id)logIdentifier;
- (void)updateValue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_handleUpdatedValue:(id)arg1;
@property(copy) id <NSCopying><NSSecureCoding> value; // @synthesize value=_value;
- (void)updateConstraints:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)replaceConstraints:(id)arg1 withConstraints:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_handleReflectedUpdate:(id)arg1;
- (void)setReflected:(BOOL)arg1;
@property(readonly, getter=isReflected) BOOL reflected; // @synthesize reflected=_reflected;
- (void)removeConstraint:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_handleRemovedConstraint:(id)arg1;
- (void)notifyDelegateOfRemovedConstraint:(id)arg1;
- (void)removeConstraint:(id)arg1;
- (void)addConstraint:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_handleAddedConstraint:(id)arg1;
- (void)notifyDelegateOfAddedConstraint:(id)arg1;
- (void)addConstraint:(id)arg1;
- (id)constraintWithType:(long long)arg1;
- (void)setConstraints:(id)arg1;
@property(readonly, copy) NSArray *constraints;
- (void)_registerNotificationHandlers;
- (void)configureWithAccessorySettings:(id)arg1 context:(id)arg2;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *debugDescription;
- (id)descriptionWithPointer:(BOOL)arg1;
- (id)shortDescription;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (void)dealloc;
- (id)initWithType:(long long)arg1 properties:(unsigned long long)arg2 name:(id)arg3 constraints:(id)arg4;

// Remaining properties
@property(readonly) Class superclass;

@end

