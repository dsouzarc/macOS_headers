//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class MANinePartImageSet;

@interface ILifeMediaBrowserView : NSView
{
    NSView *mCurrentSubResponder;
    id mDelegate;
    MANinePartImageSet *gradientFooterBackground;
}

- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)drawRect:(struct CGRect)arg1;
- (void)unilibViewFirstResponderStateChanged3:(BOOL)arg1;
- (void)subResponderWasChanged:(id)arg1;
- (void)setCurrentSubResponder:(id)arg1;
- (id)currentSubResponder;
- (id)accessibilityAttributeValue:(id)arg1;

@end

