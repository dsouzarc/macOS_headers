//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class NSURL;

@interface HMFCache : HMFObject
{
    BOOL _exists;
    NSURL *_URL;
}

+ (id)defaultCache;
@property(readonly, getter=isExists) BOOL exists; // @synthesize exists=_exists;
@property(readonly, copy) NSURL *URL; // @synthesize URL=_URL;
- (void).cxx_destruct;
- (id)initWithName:(id)arg1;
- (id)init;

@end

