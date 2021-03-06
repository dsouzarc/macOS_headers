//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData, NSString;

@protocol PCKeyItem <NSObject>
- (void)setPassphrase:(NSString *)arg1;
- (NSString *)passphrase;
- (NSData *)data;
- (NSString *)name;

@optional
- (BOOL)setPassphrase:(NSString *)arg1 saveToKeychain:(BOOL)arg2;
- (void)setPath:(NSString *)arg1;
- (NSString *)path;
@end

