//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface CKAPSMachServiceConnectionKey : NSObject <NSCopying>
{
    NSString *_environmentName;
    NSString *_namedDelegatePort;
}

@property(copy, nonatomic) NSString *namedDelegatePort; // @synthesize namedDelegatePort=_namedDelegatePort;
@property(copy, nonatomic) NSString *environmentName; // @synthesize environmentName=_environmentName;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithEnvironmentName:(id)arg1 namedDelegatePort:(id)arg2;

@end

