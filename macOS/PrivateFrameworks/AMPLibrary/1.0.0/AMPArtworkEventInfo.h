//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AMPLibrary/NSSecureCoding-Protocol.h>

@class NSArray, NSString;

@interface AMPArtworkEventInfo : NSObject <NSSecureCoding>
{
    unsigned int _kind;
    unsigned int _status;
    unsigned long long _dbID;
    NSString *_uuid;
    NSArray *_persistentIDs;
    unsigned long long _imageDataHash;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) unsigned long long imageDataHash; // @synthesize imageDataHash=_imageDataHash;
@property(nonatomic) unsigned int status; // @synthesize status=_status;
@property(retain, nonatomic) NSArray *persistentIDs; // @synthesize persistentIDs=_persistentIDs;
@property(nonatomic) unsigned int kind; // @synthesize kind=_kind;
@property(retain, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property(nonatomic) unsigned long long dbID; // @synthesize dbID=_dbID;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end

