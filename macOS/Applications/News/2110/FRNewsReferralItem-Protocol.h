//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NFCopying-Protocol.h"

@class NSArray, NSDictionary;
@protocol NSSecureCoding;

@protocol FRNewsReferralItem <NFCopying>
+ (Class)encodableElementClass;
@property(readonly, copy, nonatomic) NSArray *assetHandles;
@property(readonly, copy, nonatomic) id <NSSecureCoding> encodableElement;
- (id)initWithEncodableElement:(id <NSSecureCoding>)arg1 assetHandlesByRemoteURL:(NSDictionary *)arg2;
@end

