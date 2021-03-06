//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, TSRCWaveformDataSource;

@interface TSAAudioRecordingWaveformRenderer : NSObject
{
    NSMutableArray *_cachedSegments;
    BOOL _frequentUpdatesExpectedHint;
    TSRCWaveformDataSource *_dataSource;
    double _dataPointWidth;
    double _spacingWidth;
    double _scaleFactor;
    double _maximumDecibels;
    double _overdrawScaleFactor;
}

@property(nonatomic) BOOL frequentUpdatesExpectedHint; // @synthesize frequentUpdatesExpectedHint=_frequentUpdatesExpectedHint;
@property(nonatomic) double overdrawScaleFactor; // @synthesize overdrawScaleFactor=_overdrawScaleFactor;
@property(nonatomic) double maximumDecibels; // @synthesize maximumDecibels=_maximumDecibels;
@property(nonatomic) double scaleFactor; // @synthesize scaleFactor=_scaleFactor;
@property(nonatomic) double spacingWidth; // @synthesize spacingWidth=_spacingWidth;
@property(nonatomic) double dataPointWidth; // @synthesize dataPointWidth=_dataPointWidth;
@property(nonatomic) __weak TSRCWaveformDataSource *dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (id)segmentsToRenderForTimeRange:(CDStruct_c3b9c2ee)arg1 highlightTimeRange:(CDStruct_c3b9c2ee)arg2;
- (CDStruct_c3b9c2ee)timeRangeToRequestForVisibleTimeRange:(CDStruct_c3b9c2ee)arg1;
- (id)newRenderingForVisibleTimeRange:(CDStruct_c3b9c2ee)arg1 bounds:(struct CGRect)arg2 insets:(struct NSEdgeInsets)arg3;
- (id)init;

@end

