//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IPXViewerOverlayController.h"

@class NSButton;
@protocol IPXBurstFavoriteOverlayControllerDelegate;

__attribute__((visibility("hidden")))
@interface IPXBurstFavoriteOverlayController : IPXViewerOverlayController
{
    NSButton *_checkmarkButton;
    id <IPXBurstFavoriteOverlayControllerDelegate> _delegate;
}

+ (Class)viewClass;
@property __weak id <IPXBurstFavoriteOverlayControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)a_burstFavorited:(id)arg1;
- (void)mouseDown:(id)arg1;
- (struct NSEdgeInsets)contentInset;
- (unsigned long long)position;
- (void)loadView;

@end

