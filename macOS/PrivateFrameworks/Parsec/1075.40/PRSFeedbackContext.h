//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Parsec/PRSFeedback.h>

@class NSString;

@interface PRSFeedbackContext : PRSFeedback
{
    long long _start_ts;
    NSString *_start_method;
    NSString *_last_search;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) NSString *last_search; // @synthesize last_search=_last_search;
@property(retain, nonatomic) NSString *start_method; // @synthesize start_method=_start_method;
@property(nonatomic) long long start_ts; // @synthesize start_ts=_start_ts;
- (void).cxx_destruct;
- (id)plist;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFeedback:(id)arg1;
- (id)typeString;
- (id)initWithInput:(id)arg1 timestamp:(long long)arg2;

@end

