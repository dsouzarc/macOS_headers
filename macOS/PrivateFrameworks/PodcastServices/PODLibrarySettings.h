//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PodcastServices/PODFeedHandlingSettingsProtocol-Protocol.h>
#import <PodcastServices/PODSecureCoding-Protocol.h>

@class NSString;

@interface PODLibrarySettings : NSObject <PODSecureCoding, PODFeedHandlingSettingsProtocol>
{
    long long _downloadAction;
    long long _limitRule;
    long long _removePlayedRule;
    double _refreshInterval;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) double refreshInterval; // @synthesize refreshInterval=_refreshInterval;
@property(readonly, nonatomic) long long removePlayedRule; // @synthesize removePlayedRule=_removePlayedRule;
@property(readonly, nonatomic) long long limitRule; // @synthesize limitRule=_limitRule;
@property(readonly, nonatomic) long long downloadAction; // @synthesize downloadAction=_downloadAction;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithFeedHandlingSettings:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

