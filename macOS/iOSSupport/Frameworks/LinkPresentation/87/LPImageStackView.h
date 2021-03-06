//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <LinkPresentation/LPComponentView.h>

@class LPImageViewStyle, NSArray, NSMutableArray;

__attribute__((visibility("hidden")))
@interface LPImageStackView : LPComponentView
{
    NSArray *_images;
    LPImageViewStyle *_style;
    NSMutableArray *_imageViews;
}

- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)_layoutImagesForSize:(struct CGSize)arg1 applyingLayout:(BOOL)arg2;
- (void)layoutComponentView;
- (void)componentViewDidMoveToWindow;
- (id)initWithImages:(id)arg1 style:(id)arg2;
- (id)init;

@end

