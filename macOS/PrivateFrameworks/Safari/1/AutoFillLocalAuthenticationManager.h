//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class LAContext, NSObject<OS_dispatch_queue>, NSOperationQueue;

@interface AutoFillLocalAuthenticationManager : NSObject
{
    NSOperationQueue *_authenticationQueue;
    LAContext *_laContext;
    NSObject<OS_dispatch_queue> *_laContextQueue;
    long long _currentTouchIDStatus;
}

+ (long long)_touchIDStatusForError:(long long)arg1;
@property long long currentTouchIDStatus; // @synthesize currentTouchIDStatus=_currentTouchIDStatus;
- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL isBiometricAuthenticationAvailable;
- (void)updateTouchIDSupportAndAvailability;
- (id)authenticateWithReason:(id)arg1 delegate:(id)arg2;
- (id)init;

@end

