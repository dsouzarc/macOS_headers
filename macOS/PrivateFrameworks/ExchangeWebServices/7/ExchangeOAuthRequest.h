//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface ExchangeOAuthRequest : NSObject
{
}

+ (id)downgradeURItoV1:(id)arg1;
+ (id)upgradeURItoV2:(id)arg1;
+ (id)stateFromURL:(id)arg1;
+ (id)authCodeFromURL:(id)arg1;
+ (BOOL)urlPageWillContainAuthorizationCode:(id)arg1;
+ (id)requestForURL:(id)arg1;
+ (id)urlForOAuthURI:(id)arg1 clientID:(id)arg2 redirectURI:(id)arg3 scope:(id)arg4 username:(id)arg5 state:(id)arg6 codeChallenge:(id)arg7 codeChallengeMethod:(id)arg8;

@end

