//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "iTermPromptOnCloseReason.h"

@class NSString;

@interface iTermPromptOnCloseMessageReason : iTermPromptOnCloseReason
{
    NSString *_message;
    double _priority;
}

- (id)priority;
- (id)message;
- (void)dealloc;
- (id)initWithMessage:(id)arg1 priority:(double)arg2;

@end

