//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class LoginTrackerFactory;

@interface MigrationManager : NSObject
{
    LoginTrackerFactory *_trackFactory;
}

@property(retain, nonatomic) LoginTrackerFactory *trackFactory; // @synthesize trackFactory=_trackFactory;
- (void).cxx_destruct;
- (BOOL)shouldParseLogFileToApplicationData;
- (void)parseTrackingFileToApplicationData;
- (void)migrateTrackingFileIfNeeded;
- (void)migrateIfNeeded;
- (id)init;

@end

