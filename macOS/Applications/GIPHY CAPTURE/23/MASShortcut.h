//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class NSString;

@interface MASShortcut : NSObject <NSSecureCoding, NSCopying>
{
    unsigned long long _keyCode;
    unsigned long long _modifierFlags;
}

+ (BOOL)supportsSecureCoding;
+ (id)shortcutWithEvent:(id)arg1;
+ (id)shortcutWithKeyCode:(unsigned long long)arg1 modifierFlags:(unsigned long long)arg2;
@property(readonly, nonatomic) unsigned long long modifierFlags; // @synthesize modifierFlags=_modifierFlags;
@property(readonly, nonatomic) unsigned long long keyCode; // @synthesize keyCode=_keyCode;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
@property(readonly, nonatomic) NSString *modifierFlagsString;
@property(readonly, nonatomic) NSString *keyCodeString;
@property(readonly, nonatomic) NSString *keyCodeStringForKeyEquivalent;
- (id)description;
@property(readonly, nonatomic) unsigned int carbonFlags;
@property(readonly, nonatomic) unsigned int carbonKeyCode;
- (id)initWithKeyCode:(unsigned long long)arg1 modifierFlags:(unsigned long long)arg2;

@end

