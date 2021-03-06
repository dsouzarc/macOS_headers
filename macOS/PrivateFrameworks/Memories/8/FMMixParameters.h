//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray;

@interface FMMixParameters : NSObject
{
    NSMutableArray *_volumeKeyFrames;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *volumeKeyFrames; // @synthesize volumeKeyFrames=_volumeKeyFrames;
- (BOOL)removeRedundantVolumeKeyFrames;
- (BOOL)volumeKeyframesAreValid;
- (void)insertVolumeKeyframe:(id)arg1;
- (BOOL)appendVolumeKeyframe:(id)arg1;
- (id)lastVolumeKeyFrame;
- (float)volumeValueAtTime:(long long)arg1;
- (id)description;
- (id)init;

@end

