//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSTextFinder.h>

@protocol CSKTextFinderDelegate;

@interface CSKTextFinder : NSTextFinder
{
    id <CSKTextFinderDelegate> _delegate;
}

@property(nonatomic) __weak id <CSKTextFinderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)performAction:(long long)arg1;
- (void)dealloc;
- (void)setFindBarContainer:(id)arg1;

@end

