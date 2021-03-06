//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVAudioIOController;

@interface AVAudioIOClient : NSObject
{
    AVAudioIOController *_ioController;
    shared_ptr_883eff98 _impl;
}

@property(nonatomic) shared_ptr_883eff98 impl; // @synthesize impl=_impl;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType IOEventBlock;
- (void)stop;
- (BOOL)startAsyncAndReturnError:(id *)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)startWithoutWaitingAndReturnError:(id *)arg1;
- (BOOL)startAndReturnError:(id *)arg1;
@property(readonly, nonatomic) BOOL inputEnabled;
@property(readonly, nonatomic) BOOL outputEnabled;
@property(readonly, nonatomic) __weak AVAudioIOController *IOController;
- (id)initWithIOController:(id)arg1 impl:(shared_ptr_883eff98)arg2;

@end

