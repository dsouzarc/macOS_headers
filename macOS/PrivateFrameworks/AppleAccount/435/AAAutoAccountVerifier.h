//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ACAccount;

@interface AAAutoAccountVerifier : NSObject
{
    ACAccount *_account;
}

- (void).cxx_destruct;
@property(retain, nonatomic) ACAccount *account; // @synthesize account=_account;
- (void)cancel;
- (void)verifyWithHandler:(CDUnknownBlockType)arg1;
- (void)sendVerificationEmail;
- (id)initWithAccount:(id)arg1;

@end

