//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/_NSViewAnimator.h>

__attribute__((visibility("hidden")))
@interface _NSViewAnimator_NSStackView : _NSViewAnimator
{
}

- (void)removeArrangedSubview:(id)arg1;
- (void)insertArrangedSubview:(id)arg1 atIndex:(long long)arg2;
- (void)addArrangedSubview:(id)arg1;
- (void)removeView:(id)arg1;
- (void)insertView:(id)arg1 atIndex:(unsigned long long)arg2 inGravity:(long long)arg3;
- (void)addView:(id)arg1 withGravity:(long long)arg2;
- (void)setVisibilityPriority:(float)arg1 forView:(id)arg2;
- (void)setDistribution:(long long)arg1;
- (void)setOrientation:(long long)arg1;
- (void)setAlignment:(long long)arg1;
- (void)setEdgeInsets:(struct NSEdgeInsets)arg1;
- (void)setCustomSpacing:(double)arg1 afterView:(id)arg2;
- (void)setSpacing:(double)arg1;
- (id)stackViewTarget;

@end

