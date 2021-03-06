//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ISAVPlayer;

__attribute__((visibility("hidden")))
@interface ISRateCurveRequest : NSObject
{
    double _startTime;
    CDStruct_1b6d18a9 _startVideoTime;
    BOOL _cancelled;
    id _boundaryObserver;
    double _stepInterval;
    long long _stepIndex;
    float _initialRate;
    double _duration;
    ISAVPlayer *_avPlayer;
    CDUnknownBlockType _progressHandler;
    CDStruct_1b6d18a9 _targetTime;
}

@property(readonly, copy, nonatomic) CDUnknownBlockType progressHandler; // @synthesize progressHandler=_progressHandler;
@property(readonly, nonatomic) __weak ISAVPlayer *avPlayer; // @synthesize avPlayer=_avPlayer;
@property(readonly, nonatomic) float initialRate; // @synthesize initialRate=_initialRate;
@property(readonly, nonatomic) double duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) CDStruct_1b6d18a9 targetTime; // @synthesize targetTime=_targetTime;
- (void).cxx_destruct;
- (void)_stopObservingPlayer;
- (void)dealloc;
- (void)cancel;
- (void)_didReachTargetTime;
- (void)_stepDownRate;
- (void)start;
- (id)initWithTargetTime:(CDStruct_1b6d18a9)arg1 duration:(double)arg2 initialRate:(float)arg3 avPlayer:(id)arg4 progressHandler:(CDUnknownBlockType)arg5;

@end

