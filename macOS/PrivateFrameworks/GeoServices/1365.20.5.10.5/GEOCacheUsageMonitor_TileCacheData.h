//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface GEOCacheUsageMonitor_TileCacheData : NSObject
{
    unsigned int _count;
    unsigned int _byteCount;
}

@property(nonatomic) unsigned int byteCount; // @synthesize byteCount=_byteCount;
@property(nonatomic) unsigned int count; // @synthesize count=_count;
- (BOOL)wouldWrapWithByteCount:(unsigned int)arg1;
- (id)init;

@end

