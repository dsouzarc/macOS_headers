//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet, NSString, NSURL;

@interface CalDAVPrincipalEmailDetailsResult : NSObject
{
    NSString *_displayName;
    NSSet *_addresses;
    NSURL *_principalURL;
}

+ (id)resultFromResponseItem:(id)arg1;
@property(retain, nonatomic) NSURL *principalURL; // @synthesize principalURL=_principalURL;
@property(retain, nonatomic) NSSet *addresses; // @synthesize addresses=_addresses;
@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
- (void)dealloc;
- (id)description;

@end

