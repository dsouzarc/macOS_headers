//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSString;

@interface CRKSystemInfo : NSObject
{
    NSString *_buildVersion;
    NSString *_systemVersion;
}

+ (id)sharedSystemInfo;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *systemVersion; // @synthesize systemVersion=_systemVersion;
@property(readonly, copy, nonatomic) NSString *buildVersion; // @synthesize buildVersion=_buildVersion;
@property(readonly, nonatomic, getter=isEphemeralMultiUser) BOOL ephemeralMultiUser;
@property(readonly, copy, nonatomic) NSDate *bootDate;
@property(readonly, nonatomic) unsigned long long platform;
- (void)populateVersions;
- (id)init;

@end

