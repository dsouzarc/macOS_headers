//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TPopoverController.h"

@class TTextField;

@interface TTitlePopoverController : TPopoverController
{
    struct TNSRef<TTextField, void> _titleField;
    struct TKeyValueObserver _effectiveAppearanceObserver;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)showPopover:(id)arg1;
- (id)_popoverAppearance:(id)arg1;
@property(readonly, retain) TTextField *titleField; // @dynamic titleField;
- (void)aboutToTearDown;
- (id)init;

@end

