//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSDictionary;

__attribute__((visibility("hidden")))
@interface VCChannelModel : NSObject
{
    struct tagHANDLE *_hVCChannel;
    NSData *_localConnectionData;
    NSDictionary *_optionsDictionary;
}

- (void)setOptionsDictionary:(id)arg1;
- (void)setLocalConnectionData:(id)arg1;
- (void)sethVCChannel:(struct tagHANDLE *)arg1;
- (id)optionsDictionary;
- (id)localConnectionData;
- (struct tagHANDLE *)hVCChannel;
- (void)dealloc;
- (id)init;

@end

