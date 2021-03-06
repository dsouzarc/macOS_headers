//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSPanel.h"

@class NSWindow;

@interface PopupWindow : NSPanel
{
    BOOL shutdown_;
    NSWindow *_owningWindow;
}

@property(retain, nonatomic) NSWindow *owningWindow; // @synthesize owningWindow=_owningWindow;
- (BOOL)autoHidesHotKeyWindow;
- (void)twiddleKeyWindow;
- (void)close;
- (void)shutdown;
- (void)keyDown:(id)arg1;
- (BOOL)canBecomeMainWindow;
- (BOOL)canBecomeKeyWindow;
- (void)dealloc;
- (id)initWithContentRect:(struct CGRect)arg1 styleMask:(unsigned long long)arg2 backing:(unsigned long long)arg3 defer:(BOOL)arg4;

@end

