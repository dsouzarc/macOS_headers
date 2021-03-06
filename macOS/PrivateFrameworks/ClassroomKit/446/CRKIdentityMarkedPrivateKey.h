//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSData, NSUUID;

@interface CRKIdentityMarkedPrivateKey : NSObject <NSSecureCoding>
{
    NSUUID *_keyPairMarker;
    NSData *_privateKeyData;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSData *privateKeyData; // @synthesize privateKeyData=_privateKeyData;
@property(readonly, nonatomic) NSUUID *keyPairMarker; // @synthesize keyPairMarker=_keyPairMarker;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithKeyPairMarker:(id)arg1 privateKeyData:(id)arg2;

@end

