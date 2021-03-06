//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DiskActivityStatCollectorItem.h"

@class DiskActivityStatCollectorItemWrapper;

@interface DiskActivityStatCollectorItemMac : DiskActivityStatCollectorItem
{
    unsigned int registryEntry;
    DiskActivityStatCollectorItemWrapper *_wrapper;
    double _lastTime;
}

@property(nonatomic) double lastTime; // @synthesize lastTime=_lastTime;
@property(nonatomic) DiskActivityStatCollectorItemWrapper *wrapper; // @synthesize wrapper=_wrapper;
- (void)addSampleWithRead:(double)arg1 write:(double)arg2 iopsRead:(double)arg3 iopsWrite:(double)arg4 time:(double)arg5 identifier:(double)arg6;
- (void)updateWithTime:(double)arg1 identifier:(double)arg2;
- (void)setRegistryEntry:(unsigned int)arg1;
- (unsigned int)registryEntry;

@end

