//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSWindowDelegate-Protocol.h"

@class EquationPalettePopupGrid, NSArray, NSString, NSTextField, NSTimer, NSView, NSWindow;

@interface EquationPalettePopup : NSObject <NSWindowDelegate>
{
    NSView *_equationsView;
    EquationPalettePopupGrid *_eqPaletteSmallItemGrid;
    EquationPalettePopupGrid *_eqPaletteBigItemGrid;
    EquationPalettePopupGrid *_showPaletteButtonCellGrid;
    NSTextField *_equationsNameField;
    NSArray *_eqPaletteButtonSet;
    NSWindow *_window;
    NSTimer *_timer;
    long long _numFlashes;
}

+ (id)pickEquationPalettePopupItemFromButton:(id)arg1;
+ (id)installEquationPalettePopupButtonInView:(id)arg1 margin:(struct CGSize)arg2;
- (void)awakeFromNib;
- (void)performClickWithItemNumber:(long long)arg1;
- (long long)pickEquationPalettePopupItemFromButton:(id)arg1;
- (long long)_runEventLoop;
- (long long)_trackMouseDownInWindow:(id)arg1 withSelectedItem:(long long)arg2;
- (void)_flashItem:(long long)arg1;
- (void)_doFlash:(id)arg1;
- (void)_fadeOut:(id)arg1;
- (long long)_trackMenuSelection;
- (void)_updateTextFieldsForItem:(long long)arg1;
- (struct CGRect)windowFrameForEquationPalettePopupButton:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

