//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Safari/NSObject-Protocol.h>

@class VisualScrubberViewController;

@protocol VisualScrubberViewControllerDelegate <NSObject>

@optional
- (void)visualScrubberViewController:(VisualScrubberViewController *)arg1 didSelectItemAtIndex:(unsigned long long)arg2;
- (void)visualScrubberViewControllerDidEndInteractionWithScrubber:(VisualScrubberViewController *)arg1;
- (void)visualScrubberViewControllerDidBeginInteractionWithScrubber:(VisualScrubberViewController *)arg1;
@end

