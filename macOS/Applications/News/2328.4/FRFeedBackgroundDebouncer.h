//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FRFeedBackgroundDetectorDelegate-Protocol.h"

@class NSString;
@protocol FRFeedBackgroundDetectorType;

@interface FRFeedBackgroundDebouncer : NSObject <FRFeedBackgroundDetectorDelegate>
{
    BOOL _enabled;
    id <FRFeedBackgroundDetectorType> _backgroundDetector;
    unsigned long long _debouncesRequired;
    unsigned long long _debounces;
    CDUnknownBlockType _backgroundedBlock;
    CDUnknownBlockType _foregroundingBlock;
    double _beginDebouncingTime;
}

@property(nonatomic) double beginDebouncingTime; // @synthesize beginDebouncingTime=_beginDebouncingTime;
@property(copy, nonatomic) CDUnknownBlockType foregroundingBlock; // @synthesize foregroundingBlock=_foregroundingBlock;
@property(copy, nonatomic) CDUnknownBlockType backgroundedBlock; // @synthesize backgroundedBlock=_backgroundedBlock;
@property(nonatomic) unsigned long long debounces; // @synthesize debounces=_debounces;
@property(nonatomic) unsigned long long debouncesRequired; // @synthesize debouncesRequired=_debouncesRequired;
@property(nonatomic) BOOL enabled; // @synthesize enabled=_enabled;
@property(retain, nonatomic) id <FRFeedBackgroundDetectorType> backgroundDetector; // @synthesize backgroundDetector=_backgroundDetector;
- (void).cxx_destruct;
- (void)applicationWillEnterForeground;
- (void)applicationDidEnterForeground;
- (void)applicationDidEnterBackground;
- (void)runWhenForegrounding:(CDUnknownBlockType)arg1;
- (void)runWhenBackgrounded:(CDUnknownBlockType)arg1;
- (void)debounce:(CDUnknownBlockType)arg1;
- (id)initWithBackgroundDetector:(id)arg1 enabled:(BOOL)arg2 debouncesRequired:(unsigned long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

