//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Metal/MTLIOAccelCommandEncoder.h>

@interface MTLIOAccelBlitCommandEncoder : MTLIOAccelCommandEncoder
{
}

- (void)optimizeIndirectCommandBuffer:(id)arg1 withRange:(struct _NSRange)arg2;
- (void)copyIndirectCommandBuffer:(id)arg1 sourceRange:(struct _NSRange)arg2 destination:(id)arg3 destinationIndex:(unsigned long long)arg4;
- (void)resetCommandsInBuffer:(id)arg1 withRange:(struct _NSRange)arg2;
- (void)optimizeContentsForCPUAccess:(id)arg1 slice:(unsigned long long)arg2 level:(unsigned long long)arg3;
- (void)optimizeContentsForCPUAccess:(id)arg1;
- (void)optimizeContentsForGPUAccess:(id)arg1 slice:(unsigned long long)arg2 level:(unsigned long long)arg3;
- (void)optimizeContentsForGPUAccess:(id)arg1;
- (unsigned long long)getType;
- (void)waitForFence:(id)arg1;
- (void)updateFence:(id)arg1;

@end

