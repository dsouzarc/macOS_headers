//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString;

@interface ITMListSessionsResponse_Tab : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) BOOL hasTabId; // @dynamic hasTabId;
@property(retain, nonatomic) NSMutableArray *sessionsArray; // @dynamic sessionsArray;
@property(readonly, nonatomic) unsigned long long sessionsArray_Count; // @dynamic sessionsArray_Count;
@property(copy, nonatomic) NSString *tabId; // @dynamic tabId;

@end

