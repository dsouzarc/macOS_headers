//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CalendarUI/EKUISingleTextFieldGadget.h>

@class NSArray;

@interface EKUIAttendeeCommentGadget : EKUISingleTextFieldGadget
{
    BOOL _cachedShouldDisplay;
    NSArray *_cachedParticipantsWithComment;
}

+ (id)interestedChangeKeys;
@property(retain) NSArray *cachedParticipantsWithComment; // @synthesize cachedParticipantsWithComment=_cachedParticipantsWithComment;
@property BOOL cachedShouldDisplay; // @synthesize cachedShouldDisplay=_cachedShouldDisplay;
- (void).cxx_destruct;
- (void)updateWithChanges:(id)arg1;
- (void)setObject:(id)arg1;
- (void)refreshCachedProperties;
- (id)currentComments;
- (BOOL)shouldDisplay;
- (BOOL)isEditable;
- (double)maxHeight;
- (id)initWithViewController:(id)arg1;

@end

