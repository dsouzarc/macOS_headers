//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Cards/CRBasicPayloadCommand.h>

#import "CRPayloadCommand.h"

@class NSDictionary, NSString, SFPunchout;

@interface CRPunchoutCommand : CRBasicPayloadCommand <CRPayloadCommand>
{
    SFPunchout *_punchout;
}

@property(retain, nonatomic) SFPunchout *punchout; // @synthesize punchout=_punchout;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(retain, nonatomic) id <NSSecureCoding><NSCopying> payload;

// Remaining properties
@property(nonatomic) unsigned long long commandDirection;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSDictionary *userInfo;

@end

