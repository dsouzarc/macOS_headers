//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface TSUTextEncodingSniffer : NSObject
{
    unsigned long long _encodingsCount;
    unsigned int *_encodings;
    struct OpaqueTECSnifferObjectRef *_sniffer;
}

- (id)sniff:(id)arg1;
- (void)dealloc;
- (id)init;

@end

