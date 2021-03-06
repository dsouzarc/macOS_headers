//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@interface NviContext : NSObject
{
    BOOL _requestHistoricalAudio;
    BOOL _shouldLogRawSensorData;
    NSDictionary *_voiceTriggerInfo;
    unsigned long long _reqStartAudioSampleId;
    unsigned long long _reqStartMachAbsTime;
    NSString *_rootLogDir;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *rootLogDir; // @synthesize rootLogDir=_rootLogDir;
@property(nonatomic) BOOL shouldLogRawSensorData; // @synthesize shouldLogRawSensorData=_shouldLogRawSensorData;
@property(nonatomic) unsigned long long reqStartMachAbsTime; // @synthesize reqStartMachAbsTime=_reqStartMachAbsTime;
@property(nonatomic) unsigned long long reqStartAudioSampleId; // @synthesize reqStartAudioSampleId=_reqStartAudioSampleId;
@property(nonatomic) BOOL requestHistoricalAudio; // @synthesize requestHistoricalAudio=_requestHistoricalAudio;
@property(retain, nonatomic) NSDictionary *voiceTriggerInfo; // @synthesize voiceTriggerInfo=_voiceTriggerInfo;
- (id)description;

@end

