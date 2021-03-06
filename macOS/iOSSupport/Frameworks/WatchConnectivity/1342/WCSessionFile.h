//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <WatchConnectivity/NSSecureCoding-Protocol.h>

@class NSData, NSDate, NSDictionary, NSNumber, NSString, NSURL, WCUserInfo;

@interface WCSessionFile : NSObject <NSSecureCoding>
{
    NSDictionary *_metadata;
    NSDate *_creationDate;
    WCUserInfo *_userInfoStorage;
    NSString *_relativePath;
    NSString *_fileIdentifier;
    NSNumber *_fileSize;
    NSURL *_fileURL;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
@property(copy, nonatomic) NSNumber *fileSize; // @synthesize fileSize=_fileSize;
@property(copy) NSString *fileIdentifier; // @synthesize fileIdentifier=_fileIdentifier;
@property(copy, nonatomic) NSString *relativePath; // @synthesize relativePath=_relativePath;
@property(retain, nonatomic) WCUserInfo *userInfoStorage; // @synthesize userInfoStorage=_userInfoStorage;
@property(retain, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(copy, nonatomic) NSDictionary *metadata; // @synthesize metadata=_metadata;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (long long)compare:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (BOOL)verifyMetadata;
@property(readonly, copy) NSData *userInfoData;
- (BOOL)updateUserInfoData:(id)arg1 error:(id *)arg2;
- (BOOL)updateUserInfo:(id)arg1 error:(id *)arg2;
- (id)initWithIdentifier:(id)arg1 relativePath:(id)arg2;
- (id)initWithFileURL:(id)arg1;
- (id)initWithIdentifier:(id)arg1 fileURL:(id)arg2 relativePath:(id)arg3;

@end

