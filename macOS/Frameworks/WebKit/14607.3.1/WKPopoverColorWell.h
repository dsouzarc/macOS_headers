//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSPopoverColorWell.h>

@protocol WKPopoverColorWellDelegate;

__attribute__((visibility("hidden")))
@interface WKPopoverColorWell : NSPopoverColorWell
{
    struct RetainPtr<NSColorList> _suggestedColors;
    struct WeakObjCPtr<id<WKPopoverColorWellDelegate>> _webDelegate;
}

+ (id)_colorPopoverCreateIfNecessary:(BOOL)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)setSuggestedColors:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1;
- (void)popoverDidClose:(id)arg1;
- (void)_showPopover;
@property(nonatomic) __weak id <WKPopoverColorWellDelegate> webDelegate;

@end

