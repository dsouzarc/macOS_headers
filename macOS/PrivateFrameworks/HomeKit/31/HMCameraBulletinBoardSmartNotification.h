//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HomeKit/HMBulletinBoardNotification.h>

@class HMCameraUserSettings, NSUUID;

@interface HMCameraBulletinBoardSmartNotification : HMBulletinBoardNotification
{
    NSUUID *_targetUUID;
    HMCameraUserSettings *_cameraUserSettings;
}

+ (id)predicateForCameraSignificantEvent:(unsigned long long)arg1;
+ (id)notificationEventTriggersInPredicate:(id)arg1;
- (void).cxx_destruct;
@property __weak HMCameraUserSettings *cameraUserSettings; // @synthesize cameraUserSettings=_cameraUserSettings;
- (id)targetUUID;
- (void)commitWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(readonly) unsigned long long notificationEventTriggers;
- (void)__configureWithContext:(id)arg1 cameraUserSettings:(id)arg2;
- (id)initWithBulletinBoardNotification:(id)arg1;

@end

