//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class CNChangeHistoryAnchor, CNGroup, NSNumber, NSString;

@interface CNChangeHistoryGroupChange : NSObject <NSSecureCoding>
{
    NSString *_groupIdentifier;
    long long _changeType;
    CNGroup *_group;
    CNChangeHistoryAnchor *_changeAnchor;
    NSNumber *_changeID;
    NSString *_externalID;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *externalID; // @synthesize externalID=_externalID;
@property(retain, nonatomic) NSNumber *changeID; // @synthesize changeID=_changeID;
@property(retain, nonatomic) CNChangeHistoryAnchor *changeAnchor; // @synthesize changeAnchor=_changeAnchor;
@property(retain, nonatomic) CNGroup *group; // @synthesize group=_group;
@property(nonatomic) long long changeType; // @synthesize changeType=_changeType;
@property(readonly, nonatomic) NSString *groupIdentifier; // @synthesize groupIdentifier=_groupIdentifier;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 changeType:(long long)arg2 changeAnchor:(id)arg3 changeID:(id)arg4 externalID:(id)arg5;

@end

