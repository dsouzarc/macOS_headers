//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TSTDEVValue : NSObject
{
    double _observationInterval;
    double _tdev;
}

@property(readonly, nonatomic) double tdev; // @synthesize tdev=_tdev;
@property(readonly, nonatomic) double observationInterval; // @synthesize observationInterval=_observationInterval;
- (id)description;
- (id)initWithObservationInterval:(double)arg1 andTDEV:(double)arg2;

@end

