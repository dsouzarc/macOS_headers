//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CALayer;

@interface CARemoteLayerClient : NSObject
{
    id _impl;
}

@property(retain) CALayer *layer;
@property(readonly) unsigned int clientId;
- (void)invalidate;
- (id)context;
- (void)dealloc;
- (id)initWithServerPort:(unsigned int)arg1;

@end

