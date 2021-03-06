//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSSplitView.h>

@interface CalAnimatedSplitView : NSSplitView
{
    CDUnknownBlockType _enqueuedAnimation;
}

@property(copy) CDUnknownBlockType enqueuedAnimation; // @synthesize enqueuedAnimation=_enqueuedAnimation;
- (void).cxx_destruct;
- (BOOL)isOpaque;
- (id)autosaveName;
- (double)dividerThickness;
- (BOOL)isSubviewAtIndexCollapsed:(long long)arg1;
- (void)setCollapsed:(BOOL)arg1 ofSubviewAtIndex:(long long)arg2 byAnimating:(BOOL)arg3 enqueueAnimation:(BOOL)arg4;
- (void)setCollapsed:(BOOL)arg1 ofSubviewAtIndex:(long long)arg2 byAnimating:(BOOL)arg3;
- (void)addSubview:(id)arg1 withMinCoordinate:(double)arg2 maxCoordinate:(double)arg3 initialCoordinate:(double)arg4 collapsed:(BOOL)arg5;
- (void)addSubview:(id)arg1;
- (void)setSizeOfView:(id)arg1 value:(double)arg2;
- (double)sizeOfView:(id)arg1;
- (long long)sizeAttribute;

@end

