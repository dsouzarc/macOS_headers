//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <JetEngine/JSExport-Protocol.h>

@class JSValue, NSString;

@protocol _TtP9JetEngineP33_3B280445E2AC6E2542A3DCC2FD82BB2C19JSHostObjectExports_ <JSExport>
- (BOOL)isOSAtLeast:(JSValue *)arg1:(JSValue *)arg2:(JSValue *)arg3;
@property(nonatomic, readonly) NSString *clientVersion;
@property(nonatomic, readonly) NSString *clientIdentifier;
@property(nonatomic, readonly) NSString *deviceLocalizedModel;
@property(nonatomic, readonly) NSString *deviceModel;
@property(nonatomic, readonly) NSString *osBuild;
@property(nonatomic, readonly) NSString *platform;
@end

