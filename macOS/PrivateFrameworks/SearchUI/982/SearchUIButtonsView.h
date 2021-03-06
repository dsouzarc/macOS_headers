//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NUIContainerBoxView.h"

@class SearchUIMovieCardSectionView;

@interface SearchUIButtonsView : NUIContainerBoxView
{
    SearchUIMovieCardSectionView *_cardSectionView;
}

+ (BOOL)playActionNeedsPlayButton:(id)arg1;
+ (id)adamIdForOffer:(id)arg1;
@property __weak SearchUIMovieCardSectionView *cardSectionView; // @synthesize cardSectionView=_cardSectionView;
- (void).cxx_destruct;
- (id)buttonWithTitle:(id)arg1 subtitle:(id)arg2 punchoutURL:(id)arg3;
- (void)sendErrorFeedbackIfNecessary:(id)arg1;
- (void)fetchButtonsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithCardSectionView:(id)arg1;

@end

