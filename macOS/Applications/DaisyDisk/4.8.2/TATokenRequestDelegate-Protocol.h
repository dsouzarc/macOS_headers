//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class TATokenRequest;

@protocol TATokenRequestDelegate
- (void)taTokenRequest:(TATokenRequest *)arg1 didFailWithResult:(long long)arg2 serverError:(long long)arg3;
- (void)taTokenRequestDidComplete:(TATokenRequest *)arg1;
@end

