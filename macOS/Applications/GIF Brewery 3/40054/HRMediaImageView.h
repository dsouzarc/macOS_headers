//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

#import "CALayerDelegate.h"

@class NSImage, NSString;

@interface HRMediaImageView : NSView <CALayerDelegate>
{
    NSImage *_image;
}

@property(retain, nonatomic) NSImage *image; // @synthesize image=_image;
- (void).cxx_destruct;
- (BOOL)layer:(id)arg1 shouldInheritContentsScale:(double)arg2 fromWindow:(id)arg3;
- (void)displayLayer:(id)arg1;
- (void)layerWillDraw:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

