//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData;

@interface DCAsset : NSObject
{
    unsigned long long _version;
    double _publicKeyRefreshInterval;
    NSData *_publicKey;
}

+ (id)assetWithMobileAsset:(id)arg1;
@property(copy, nonatomic) NSData *publicKey; // @synthesize publicKey=_publicKey;
@property(nonatomic) double publicKeyRefreshInterval; // @synthesize publicKeyRefreshInterval=_publicKeyRefreshInterval;
@property(nonatomic) unsigned long long version; // @synthesize version=_version;
- (void).cxx_destruct;
- (id)description;

@end

