//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ClassKit/CLSChangeNotifiable-Protocol.h>
#import <ClassKit/CLSClientRemoteObject-Protocol.h>

@class NSError;

@protocol CLSQuery <CLSClientRemoteObject, CLSChangeNotifiable>
- (oneway void)clientRemote_finishWithState:(unsigned long long)arg1 error:(NSError *)arg2;
@end

