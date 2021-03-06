//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class KeychainItemBasic;

@interface KCAIdentityItem : NSObject
{
    struct OpaqueSecIdentityRef *_identityRef;
    struct OpaqueSecCertificateRef *_certificateRef;
    KeychainItemBasic *_certificateKeychainItem;
    struct OpaqueSecKeyRef *_privatekeyRef;
    KeychainItemBasic *_privatekeyKeychainItem;
}

+ (id)initWithSecIdentityRef:(struct OpaqueSecIdentityRef *)arg1;
- (struct OpaqueSecKeyRef *)privatekeyRef;
- (id)privatekeyKeychainItem;
- (struct OpaqueSecCertificateRef *)certificateRef;
- (id)certificateKeychainItem;
- (struct OpaqueSecIdentityRef *)identityRef;
- (void)dealloc;
- (id)initWithSecIdentityRef:(struct OpaqueSecIdentityRef *)arg1;

@end

