//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DBSerializable.h"
#import "NSCopying.h"

@class DBSHARINGSharedFolderAccessError, NSString;

@interface DBSHARINGRelinquishFolderMembershipError : NSObject <DBSerializable, NSCopying>
{
    DBSHARINGSharedFolderAccessError *_accessError;
    long long _tag;
}

+ (id)deserialize:(id)arg1;
+ (id)serialize:(id)arg1;
@property(readonly, nonatomic) long long tag; // @synthesize tag=_tag;
- (void).cxx_destruct;
- (BOOL)isEqualToRelinquishFolderMembershipError:(id)arg1;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
- (id)tagName;
- (BOOL)isOther;
- (BOOL)isNoExplicitAccess;
- (BOOL)isNoPermission;
- (BOOL)isTeamFolder;
- (BOOL)isGroupAccess;
- (BOOL)isMounted;
- (BOOL)isFolderOwner;
- (BOOL)isAccessError;
@property(readonly, nonatomic) DBSHARINGSharedFolderAccessError *accessError; // @synthesize accessError=_accessError;
- (id)initWithOther;
- (id)initWithNoExplicitAccess;
- (id)initWithNoPermission;
- (id)initWithTeamFolder;
- (id)initWithGroupAccess;
- (id)initWithMounted;
- (id)initWithFolderOwner;
- (id)initWithAccessError:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

