//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <WebKitLegacy/DOMHTMLMediaElement.h>

@class NSString;

@interface DOMHTMLVideoElement : DOMHTMLMediaElement
{
}

- (void)webkitExitFullScreen;
- (void)webkitEnterFullScreen;
- (void)webkitExitFullscreen;
- (void)webkitEnterFullscreen;
@property(readonly) BOOL webkitDisplayingFullscreen;
@property(readonly) BOOL webkitSupportsFullscreen;
@property BOOL playsInline;
@property(copy) NSString *poster;
@property(readonly) unsigned int videoHeight;
@property(readonly) unsigned int videoWidth;
@property unsigned int height;
@property unsigned int width;

@end

