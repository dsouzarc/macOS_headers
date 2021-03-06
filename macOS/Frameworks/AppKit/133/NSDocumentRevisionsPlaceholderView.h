//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSProgressIndicator, NSString, NSTextField;

__attribute__((visibility("hidden")))
@interface NSDocumentRevisionsPlaceholderView : NSView
{
    NSTextField *messageField1;
    NSTextField *messageField2;
    NSProgressIndicator *progressIndicator;
    BOOL progressIndicatorVisible;
    BOOL animating;
    BOOL hideElements;
    BOOL preventLayout;
}

- (void)setElementsHidden:(BOOL)arg1;
@property BOOL progressIndicatorAnimating;
- (BOOL)_hasButtonOrProgress;
@property BOOL progressIndicatorVisible;
@property(copy) NSString *message2;
@property(copy) NSString *message1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)makeMessageTextField:(BOOL)arg1;
- (void)_layout;

@end

