//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class RoutePlanningTiming, TransitPreferences;

__attribute__((visibility("hidden")))
@interface TransitRouteOptions : NSObject <NSCopying>
{
    RoutePlanningTiming *_timing;
    TransitPreferences *_preferences;
}

@property(readonly, copy, nonatomic) TransitPreferences *preferences; // @synthesize preferences=_preferences;
@property(readonly, nonatomic) RoutePlanningTiming *timing; // @synthesize timing=_timing;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToTransitRouteOptions:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithRoutePlanningTiming:(id)arg1 preferences:(id)arg2;

@end

