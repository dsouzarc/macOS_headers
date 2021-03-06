//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class WFSetBrightnessIntent;

@protocol WFSetBrightnessIntentHandling <NSObject>
- (void)resolveValueForSetBrightness:(WFSetBrightnessIntent *)arg1 withCompletion:(void (^)(WFSetBrightnessValueResolutionResult *))arg2;
- (void)handleSetBrightness:(WFSetBrightnessIntent *)arg1 completion:(void (^)(WFSetBrightnessIntentResponse *))arg2;

@optional
- (void)confirmSetBrightness:(WFSetBrightnessIntent *)arg1 completion:(void (^)(WFSetBrightnessIntentResponse *))arg2;
@end

