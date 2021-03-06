//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface PKIDSDestination : NSObject
{
    NSString *_deviceIdentifier;
    NSString *_name;
}

+ (id)destinationWithDeviceIdentifier:(id)arg1 name:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) NSString *deviceIdentifier; // @synthesize deviceIdentifier=_deviceIdentifier;
- (id)description;
- (id)initWithDeviceIdentifier:(id)arg1 name:(id)arg2;

@end

