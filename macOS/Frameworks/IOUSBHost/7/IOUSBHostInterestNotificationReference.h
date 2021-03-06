//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IOUSBHostObject, NSRecursiveLock;

@interface IOUSBHostInterestNotificationReference : NSObject
{
    BOOL _interestNotificationPortDestroyed;
    IOUSBHostObject *_hostObject;
    NSRecursiveLock *_interestNotificationLock;
}

- (void).cxx_destruct;
@property(retain) NSRecursiveLock *interestNotificationLock; // @synthesize interestNotificationLock=_interestNotificationLock;
@property BOOL interestNotificationPortDestroyed; // @synthesize interestNotificationPortDestroyed=_interestNotificationPortDestroyed;
@property __weak IOUSBHostObject *hostObject; // @synthesize hostObject=_hostObject;
- (id)initWithHostObject:(id)arg1;

@end

