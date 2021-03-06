//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSScrollView.h>

@class PDFScrollViewPrivate;

__attribute__((visibility("hidden")))
@interface PDFScrollView : NSScrollView
{
    PDFScrollViewPrivate *_private;
}

+ (BOOL)isCompatibleWithResponsiveScrolling;
- (void).cxx_destruct;
- (void)setAccessibilityFocused:(BOOL)arg1;
- (void)scrollWheel:(id)arg1;
- (void)magnificationDidChange:(id)arg1;
- (void)magnificationWillChange:(id)arg1;
- (void)boundsDidChange;
- (void)smartMagnifyWithEvent:(id)arg1;
- (void)setForcesTopAlignment:(_Bool)arg1;
- (void)updateLayout;
- (id)pdfDocumentView;
- (void)dealloc;
- (void)setDocument:(id)arg1;
- (void)setPDFView:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

