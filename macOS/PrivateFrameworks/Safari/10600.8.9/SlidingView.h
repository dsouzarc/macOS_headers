//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSView;

__attribute__((visibility("hidden")))
@interface SlidingView : NSObject
{
    NSView *view;
    struct CGRect startFrame;
    struct CGRect endFrame;
    double startTime;
    double duration;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct CGRect)frameForTime:(double)arg1;
- (struct CGRect)endFrame;
- (id)initWithStartFrame:(struct CGRect)arg1 endFrame:(struct CGRect)arg2 duration:(double)arg3;

@end

