//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <QTKit/StdMovieUITextItem.h>

@class NSArray, NSMenu;

__attribute__((visibility("hidden")))
@interface StdMovieUIChapterPopup : StdMovieUITextItem
{
    NSArray *_chapterList;
    id _actionTarget;
    SEL _theAction;
    BOOL _enabled;
    unsigned int _currentIndex;
    NSMenu *_chapterMenu;
}

- (void)finalize;
- (void)dealloc;
- (void)setTarget:(id)arg1;
- (BOOL)enabled;
- (void)setEnabled:(BOOL)arg1;
- (void)mouseDown:(id)arg1;
- (unsigned int)currentIndex;
- (void)setCurrentIndex:(unsigned int)arg1;
- (id)chapterList;
- (id)initWithChapterList:(id)arg1 target:(id)arg2 action:(SEL)arg3;
- (void)constructChapterMenu;
- (void)menuAction:(id)arg1;
- (struct CGSize)computeMaximumTitleSize;

@end

