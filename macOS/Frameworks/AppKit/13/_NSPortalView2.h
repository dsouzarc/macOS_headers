//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSView.h>

#import "NSPortalViewImplementation.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface _NSPortalView2 : NSView <NSPortalViewImplementation>
{
    NSView *_sourceView;
}

- (void)drawRect:(struct CGRect)arg1;
- (void)absoluteGeometryChanged:(id)arg1;
- (void)sourceViewNeedsDisplayInRect:(id)arg1;
@property(retain) NSView *sourceView;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

