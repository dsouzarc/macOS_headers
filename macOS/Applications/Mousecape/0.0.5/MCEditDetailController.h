//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

#import "MMAnimatingImageViewDelegate.h"

@class MCCursor, MMAnimatingImageView, NSPopUpButton;

__attribute__((visibility("hidden")))
@interface MCEditDetailController : NSViewController <MMAnimatingImageViewDelegate>
{
    MCCursor *_cursor;
    NSPopUpButton *_typePopUpButton;
    MMAnimatingImageView *_rep100View;
    MMAnimatingImageView *_rep200View;
    MMAnimatingImageView *_rep500View;
    MMAnimatingImageView *_rep1000View;
}

@property MMAnimatingImageView *rep1000View; // @synthesize rep1000View=_rep1000View;
@property MMAnimatingImageView *rep500View; // @synthesize rep500View=_rep500View;
@property MMAnimatingImageView *rep200View; // @synthesize rep200View=_rep200View;
@property MMAnimatingImageView *rep100View; // @synthesize rep100View=_rep100View;
@property NSPopUpButton *typePopUpButton; // @synthesize typePopUpButton=_typePopUpButton;
@property(retain) MCCursor *cursor; // @synthesize cursor=_cursor;
- (void).cxx_destruct;
- (void)imageView:(id)arg1 didDragOutImage:(id)arg2;
- (void)imageView:(id)arg1 didAcceptDroppedImages:(id)arg2;
- (BOOL)imageView:(id)arg1 shouldPerformDragOperation:(id)arg2;
- (BOOL)imageView:(id)arg1 shouldPrepareForDragOperation:(id)arg2;
- (unsigned long long)imageView:(id)arg1 draggingEntered:(id)arg2;
- (void)awakeFromNib;

@end

