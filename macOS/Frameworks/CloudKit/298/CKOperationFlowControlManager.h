//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface CKOperationFlowControlManager : NSObject
{
    NSMutableDictionary *_flowControlledOperationKeys;
}

- (void).cxx_destruct;
@property(readonly) NSMutableDictionary *flowControlledOperationKeys; // @synthesize flowControlledOperationKeys=_flowControlledOperationKeys;
- (void)unlimitAllOperations;
- (void)limitOperation:(id)arg1 retryAfter:(id)arg2 error:(id)arg3;
- (double)secondsUntilUnlimited:(id)arg1;
- (BOOL)isOperationLimited:(id)arg1 outLimitError:(id *)arg2;
- (id)CKStatusReportArray;
- (id)init;

@end

