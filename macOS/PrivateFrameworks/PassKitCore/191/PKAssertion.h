//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSLock, NSString;

@interface PKAssertion : NSObject
{
    NSLock *_invalidationLock;
    BOOL _invalidateWhenBackgrounded;
    NSString *_reason;
    unsigned long long _type;
    CDUnknownBlockType _invalidationHandler;
    NSString *_identifier;
}

+ (void)isAssertionValid:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)acquireAssertionOfType:(unsigned long long)arg1 withReason:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)preheatConnection;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(nonatomic) BOOL invalidateWhenBackgrounded; // @synthesize invalidateWhenBackgrounded=_invalidateWhenBackgrounded;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
@property(readonly, nonatomic) NSString *reason; // @synthesize reason=_reason;
- (id)description;
- (void)markAsInvalidatedAndNotify;
- (void)invalidate;
- (void)dealloc;
- (id)initWithType:(unsigned long long)arg1 identifier:(id)arg2 reason:(id)arg3;

@end

