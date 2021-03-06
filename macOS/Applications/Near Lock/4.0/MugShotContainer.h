//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NLWindowController.h"

@class NSImageView, NSTextField, NSView;

@interface MugShotContainer : NLWindowController
{
    NSImageView *_bustedImageView;
    NSImageView *_nearLockIconImage;
    NSImageView *_mugShotImageView;
    NSTextField *_mugShotTextField;
    NSTextField *_mugShotBottomTextField;
    NSView *_view;
}

@property(retain, nonatomic) NSView *view; // @synthesize view=_view;
@property(retain, nonatomic) NSTextField *mugShotBottomTextField; // @synthesize mugShotBottomTextField=_mugShotBottomTextField;
@property(retain, nonatomic) NSTextField *mugShotTextField; // @synthesize mugShotTextField=_mugShotTextField;
@property(retain, nonatomic) NSImageView *mugShotImageView; // @synthesize mugShotImageView=_mugShotImageView;
@property(retain, nonatomic) NSImageView *nearLockIconImage; // @synthesize nearLockIconImage=_nearLockIconImage;
@property(retain, nonatomic) NSImageView *bustedImageView; // @synthesize bustedImageView=_bustedImageView;
- (void).cxx_destruct;
- (void)setBackgroundImage:(id)arg1;
- (void)windowDidLoad;
- (id)nibName;
- (id)init;

@end

