//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class CTDataUsage, CTDataUsed, NSString;

@interface CTAppDataUsage : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_bundleId;
    NSString *_displayName;
    CTDataUsed *_used;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) CTDataUsed *used; // @synthesize used=_used;
@property(readonly, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, nonatomic) NSString *bundleId; // @synthesize bundleId=_bundleId;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) CTDataUsage *usage;
- (id)init:(id)arg1 withDisplayName:(id)arg2 andUsage:(id)arg3;

@end

