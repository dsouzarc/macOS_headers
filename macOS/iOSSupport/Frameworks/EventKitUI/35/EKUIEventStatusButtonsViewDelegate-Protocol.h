//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <EventKitUI/NSObject-Protocol.h>

@class EKUIEventStatusButtonsView;

@protocol EKUIEventStatusButtonsViewDelegate <NSObject>
- (void)eventStatusButtonsView:(EKUIEventStatusButtonsView *)arg1 calculatedFontSizeToFit:(double)arg2;
- (double)eventStatusButtonsViewButtonFontSize:(EKUIEventStatusButtonsView *)arg1;
- (void)eventStatusButtonsView:(EKUIEventStatusButtonsView *)arg1 didSelectAction:(long long)arg2 ifCancelled:(void (^)(void))arg3;
@end

