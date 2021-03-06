//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITextSelectionRect.h>

@class PDFPage;

__attribute__((visibility("hidden")))
@interface PDFTextSelectionRect : UITextSelectionRect
{
    PDFPage *_page;
    struct CGRect _rect;
    _Bool _isStartingRect;
    _Bool _isEndingRect;
}

- (void).cxx_destruct;
- (id)description;
- (void)setIsEndingRect:(_Bool)arg1;
- (void)setIsStartingRect:(_Bool)arg1;
- (BOOL)isVertical;
- (BOOL)containsEnd;
- (BOOL)containsStart;
- (long long)writingDirection;
- (struct CGRect)rect;
- (id)initWithRect:(struct CGRect)arg1 onPage:(id)arg2;

@end

