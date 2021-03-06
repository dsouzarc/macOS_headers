//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class GPBInt32Array, GPBTimestamp, NSData, RPCStatus;

@interface GCFSTargetChange : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) RPCStatus *cause; // @dynamic cause;
@property(nonatomic) BOOL hasCause; // @dynamic hasCause;
@property(nonatomic) BOOL hasReadTime; // @dynamic hasReadTime;
@property(retain, nonatomic) GPBTimestamp *readTime; // @dynamic readTime;
@property(copy, nonatomic) NSData *resumeToken; // @dynamic resumeToken;
@property(nonatomic) int targetChangeType; // @dynamic targetChangeType;
@property(retain, nonatomic) GPBInt32Array *targetIdsArray; // @dynamic targetIdsArray;
@property(readonly, nonatomic) unsigned long long targetIdsArray_Count; // @dynamic targetIdsArray_Count;

@end

