//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ADMUser, NSImage, NSString;

@interface UserInfo : NSObject
{
    ADMUser *_currentUser;
    NSString *_shortName;
    NSString *_longName;
    unsigned int _userID;
    unsigned int _groupID;
    NSString *_guid;
    NSImage *_userPicture;
    NSString *_homeDirectory;
    BOOL _guestAccount;
}

+ (id)sharedUserInfo;
- (id)homeDirectory;
- (BOOL)guestAccount;
- (id)guid;
- (unsigned int)groupID;
- (unsigned int)userID;
- (id)longName;
- (id)shortName;
- (id)userPicture;
- (id)currentUser;
- (void)resetUserInfo;
- (void)stopListeningForUserRecordChanges;
- (void)startListeningForUserRecordChanges:(id)arg1;
- (id)loadUserPicture;
- (void)dealloc;
- (id)init;

@end

