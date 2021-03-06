//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface FCRestrictions : NSObject
{
    BOOL _testing;
    long long _buildVersionNumber;
    long long _isExplicitContentAllowedOverride;
}

+ (long long)integerRepresentationOfShortVersionString:(id)arg1;
+ (id)sharedInstance;
@property(nonatomic) long long isExplicitContentAllowedOverride; // @synthesize isExplicitContentAllowedOverride=_isExplicitContentAllowedOverride;
@property(nonatomic) BOOL testing; // @synthesize testing=_testing;
@property(nonatomic) long long buildVersionNumber; // @synthesize buildVersionNumber=_buildVersionNumber;
- (BOOL)isContentBlockedInStorefrontID:(id)arg1 withAllowedStorefrontIDs:(id)arg2 blockedStorefrontIDs:(id)arg3;
- (BOOL)isNewsVersionAllowed:(long long)arg1;
- (void)t_stopForcingExplicitContentDisallowed;
- (void)t_startForcingExplicitContentDisallowed;
@property(readonly, nonatomic) BOOL isExplicitContentAllowed;
- (id)init;

@end

