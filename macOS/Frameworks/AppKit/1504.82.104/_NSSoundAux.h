//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface _NSSoundAux : NSObject
{
    struct OpaqueAudioConverter *_audioConverter;
    struct AudioBuffer _converterBuffer;
    struct ComponentInstanceRecord *_outputUnit;
    struct OpaqueAudioFileID *_audioFile;
    struct AudioStreamBasicDescription _audioFormat;
    long long _audioDataReadHeadPosition;
    unsigned long long _audioDataLength;
    long long _audioValidFrameCount;
    unsigned int _maximumPackets;
    struct AudioStreamPacketDescription *_audioPacketDescriptions;
    NSString *audioDeviceUID;
    float _volume;
    int _spinLock;
    unsigned char _ivarFlags;
    unsigned int _systemSoundID;
}

@end

