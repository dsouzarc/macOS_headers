//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface CocoaNotifierImp : NSObject
{
    CDUnknownFunctionPointerType callback;
    void *context;
}

@property void *context; // @synthesize context;
@property CDUnknownFunctionPointerType callback; // @synthesize callback;
- (void)notify:(id)arg1;
- (void)dealloc;
- (id)initWithNotificationCallback:(CDUnknownFunctionPointerType)arg1 withContext:(void *)arg2;

@end

