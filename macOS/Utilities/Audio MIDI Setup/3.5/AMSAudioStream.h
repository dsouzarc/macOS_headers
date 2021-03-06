//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AMSAudioDeviceWrapper, AMSAudioStreamFormat, NSString;

@interface AMSAudioStream : NSObject
{
    struct CAHALAudioStream *halStream;
    AMSAudioDeviceWrapper *owningDevice;
}

- (void).cxx_destruct;
- (BOOL)setFormat:(id)arg1;
@property(readonly) unsigned long long numChannels;
@property(readonly) unsigned long long startingChannel;
@property(retain, nonatomic) AMSAudioStreamFormat *currentPhysicalFormat;
- (id)physicalFormatForItemAtIndex:(long long)arg1;
- (long long)numAvailablePhysicalFormats;
- (int)audioDevicePropertyChanged:(unsigned int)arg1 property:(unsigned int)arg2;
@property(readonly) NSString *name;
@property(readonly) unsigned int objectID;
- (void)dealloc;
- (id)initWithStream:(unsigned int)arg1 device:(id)arg2;

@end

