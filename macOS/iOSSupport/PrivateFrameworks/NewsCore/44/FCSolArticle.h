//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/NSCopying-Protocol.h>
#import <NewsCore/NSSecureCoding-Protocol.h>

@class NSSet, NSString;

@interface FCSolArticle : NSObject <NSSecureCoding, NSCopying>
{
    BOOL _accessible;
    NSString *_identifier;
    NSString *_publisherID;
    double _score;
    NSSet *_whitelistedTopicIDs;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) NSSet *whitelistedTopicIDs; // @synthesize whitelistedTopicIDs=_whitelistedTopicIDs;
@property(nonatomic) BOOL accessible; // @synthesize accessible=_accessible;
@property(nonatomic) double score; // @synthesize score=_score;
@property(retain, nonatomic) NSString *publisherID; // @synthesize publisherID=_publisherID;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)initWithID:(id)arg1 publisherID:(id)arg2 score:(double)arg3 accessible:(BOOL)arg4;
- (id)initWithID:(id)arg1 publisherID:(id)arg2 score:(double)arg3 accessible:(BOOL)arg4 whitelistedTopicIDs:(id)arg5;

@end

