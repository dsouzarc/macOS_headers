//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class DelegateView, IXKeyEvent, IXMouseEvent, NSView;

@protocol DelegateViewDelegate <NSObject>

@optional
- (void)view:(DelegateView *)arg1 mouseExited:(IXMouseEvent *)arg2;
- (void)view:(DelegateView *)arg1 mouseMoved:(IXMouseEvent *)arg2;
- (void)view:(DelegateView *)arg1 scrollWheel:(IXMouseEvent *)arg2;
- (void)view:(DelegateView *)arg1 magnifyWithEvent:(IXMouseEvent *)arg2;
- (void)view:(DelegateView *)arg1 swipeWithEvent:(IXMouseEvent *)arg2;
- (BOOL)view:(NSView *)arg1 keyDown:(IXKeyEvent *)arg2;
@end

