//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppleScriptKit/ASKApplicationEventHandler.h>

@interface ASKApplicationOpenEventHandler : ASKApplicationEventHandler
{
    long long _oldHandlerRefCon;
    CDUnknownFunctionPointerType _oldOpenEventHandlerUPP;
    CDUnknownFunctionPointerType _openEventHandlerUPP;
}

- (void)handleAppleEvent:(id)arg1 withReplyEvent:(id)arg2;
- (void)willFinishLaunching:(id)arg1;
- (void)disable;
- (void)enable;

@end

