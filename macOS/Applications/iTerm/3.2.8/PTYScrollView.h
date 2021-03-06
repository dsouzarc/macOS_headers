//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSScrollView.h>

@class NSDate, NSTimer;

@interface PTYScrollView : NSScrollView
{
    NSDate *creationDate_;
    NSTimer *timer_;
}

+ (BOOL)isCompatibleWithResponsiveScrolling;
- (void)setHasVerticalScroller:(BOOL)arg1 inInit:(BOOL)arg2;
- (void)setHasVerticalScroller:(BOOL)arg1;
- (BOOL)isLegacyScroller;
- (void)reallyShowScroller;
- (void)detectUserScroll;
- (void)scrollWheel:(id)arg1;
- (double)accumulateVerticalScrollFromEvent:(id)arg1;
- (void)it_scrollViewDidScroll:(id)arg1;
- (id)ptyVerticalScroller;
- (id)description;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 hasVerticalScroller:(BOOL)arg2;

@end

