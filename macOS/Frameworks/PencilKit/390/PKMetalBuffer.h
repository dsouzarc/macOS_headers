//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PKMetalResource.h"

@class NSString;

@interface PKMetalBuffer : NSObject <PKMetalResource>
{
    unsigned long long _lockCount;
    // Error parsing type: Ai, name: _isPurged
    id <MTLBuffer> _metalBuffer;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <MTLBuffer> metalBuffer; // @synthesize metalBuffer=_metalBuffer;
- (BOOL)isPurged;
- (void)unlock;
- (BOOL)lock;
- (id)initWithDevice:(id)arg1 length:(unsigned long long)arg2 bytes:(const void *)arg3 options:(unsigned long long)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

