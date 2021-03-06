//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

@class HRScreenRecorderWindowController, NSPopover;

@interface HRScreenRecorderAreaViewController : NSViewController
{
    unsigned long long _width;
    unsigned long long _height;
    NSPopover *_popover;
    HRScreenRecorderWindowController *_screenRecorderController;
    id <HRScreenRecorderAreaDelegate> _delegate;
}

@property(nonatomic) __weak id <HRScreenRecorderAreaDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak HRScreenRecorderWindowController *screenRecorderController; // @synthesize screenRecorderController=_screenRecorderController;
@property(nonatomic) __weak NSPopover *popover; // @synthesize popover=_popover;
@property(nonatomic) unsigned long long height; // @synthesize height=_height;
@property(nonatomic) unsigned long long width; // @synthesize width=_width;
- (void).cxx_destruct;
- (void)setNilValueForKey:(id)arg1;
- (void)cancel:(id)arg1;
- (BOOL)verifyArea:(struct CGSize)arg1;
- (void)resizeArea:(id)arg1;
- (void)viewDidLoad;

@end

