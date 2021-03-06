//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SNAnalyzerProviding.h"
#import "SNRequest.h"

@class NSString, SNDetectSignalThresholdRequestImpl;

@interface SNDetectSignalThresholdRequest : NSObject <SNAnalyzerProviding, SNRequest>
{
    SNDetectSignalThresholdRequestImpl *_detector;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) __weak id <SNAnalyzing> analyzer;
@property(nonatomic) double magnitudeThreshold;
@property(nonatomic) unsigned int blockSize;
@property(nonatomic) double sampleRate;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

