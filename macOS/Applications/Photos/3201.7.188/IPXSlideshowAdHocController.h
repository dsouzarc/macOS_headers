//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IPXAutomationSlideshowAdHocController-Protocol.h"
#import "IPXFullscreenSlideshowViewDelegate-Protocol.h"

@class IPXFullscreenSlideshowView, NSString, NSView;

@interface IPXSlideshowAdHocController : NSObject <IPXAutomationSlideshowAdHocController, IPXFullscreenSlideshowViewDelegate>
{
    CDUnknownBlockType _playbackCompletionBlock;
    NSView *_view;
    IPXFullscreenSlideshowView *_slideshowView;
}

@property(copy, nonatomic) CDUnknownBlockType playbackCompletionBlock; // @synthesize playbackCompletionBlock=_playbackCompletionBlock;
@property(retain, nonatomic) IPXFullscreenSlideshowView *slideshowView; // @synthesize slideshowView=_slideshowView;
@property(retain, nonatomic) NSView *view; // @synthesize view=_view;
- (void).cxx_destruct;
- (void)cancelPlayback;
- (id)currentlyPlayingSlideshow;
- (void)playSlideshowWithStyleID:(id)arg1 name:(id)arg2 assets:(id)arg3 audioPaths:(id)arg4;
- (id)createSlideshowWithStyleID:(id)arg1 name:(id)arg2 assets:(id)arg3 audioPaths:(id)arg4;
- (void)playSlideshowFullScreen:(id)arg1;
- (void)playSlideshowFullScreen:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)playbackIsOver:(id)arg1;
- (void)_syncMainThread:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

