//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class EKEvent, EKSeriesDetails;

@interface EKSliceDescription : NSObject <NSCopying>
{
    EKEvent *_originalEventToSliceOn;
    EKSeriesDetails *_originalMainSeriesDetails;
}

+ (id)sliceDescriptionForSlicingEvent:(id)arg1;
- (void).cxx_destruct;
@property(retain) EKSeriesDetails *originalMainSeriesDetails; // @synthesize originalMainSeriesDetails=_originalMainSeriesDetails;
- (id)sliceDate;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(retain) EKEvent *originalEventToSliceOn;
- (id)description;

@end

