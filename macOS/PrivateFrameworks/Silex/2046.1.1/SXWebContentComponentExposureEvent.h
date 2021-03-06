//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Silex/SXAnalyticsEvent.h>

@class NSString, NSURL;

@interface SXWebContentComponentExposureEvent : SXAnalyticsEvent
{
    NSString *_componentIdentifier;
    NSURL *_URL;
    NSString *_exposureIdentifier;
}

@property(readonly, nonatomic) NSString *exposureIdentifier; // @synthesize exposureIdentifier=_exposureIdentifier;
@property(readonly, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(readonly, nonatomic) NSString *componentIdentifier; // @synthesize componentIdentifier=_componentIdentifier;
- (void).cxx_destruct;
- (id)initWithComponent:(id)arg1;

@end

