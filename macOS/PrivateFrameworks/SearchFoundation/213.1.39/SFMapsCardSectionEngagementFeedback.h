//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <SearchFoundation/SFCardSectionEngagementFeedback.h>

@interface SFMapsCardSectionEngagementFeedback : SFCardSectionEngagementFeedback
{
    int _feedbackType;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) int feedbackType; // @synthesize feedbackType=_feedbackType;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFeedbackType:(int)arg1;

@end

