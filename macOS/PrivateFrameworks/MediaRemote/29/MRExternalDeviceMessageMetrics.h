//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface MRExternalDeviceMessageMetrics : NSObject
{
    NSString *_path;
    NSMutableDictionary *_entries;
}

- (void).cxx_destruct;
- (void)write;
- (void)addMessage:(id)arg1 data:(id)arg2;
- (void)dealloc;
- (id)initWithPath:(id)arg1;

@end

