//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface ADNotificationDarwinNotificationClientList : NSObject
{
    int mRegistrationToken;
    NSString *_notificationName;
    NSMutableArray *_clientList;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *clientList; // @synthesize clientList=_clientList;
@property(retain, nonatomic) NSString *notificationName; // @synthesize notificationName=_notificationName;
- (void)signal;
- (id)initWithName:(id)arg1;

@end

