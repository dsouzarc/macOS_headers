//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AMSAudioStream, NSString;

@interface AMSSpeakerConfigurationStreamInfo : NSObject
{
    AMSAudioStream *audioStream;
    BOOL _enabled;
}

@property BOOL enabled; // @synthesize enabled=_enabled;
- (void).cxx_destruct;
@property(readonly) unsigned long long channelCount;
@property(readonly) unsigned long long endingChannel;
@property(readonly) unsigned long long startingChannel;
@property(readonly) NSString *streamName;
- (id)initWithStream:(id)arg1;

@end

