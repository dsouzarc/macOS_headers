//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FMFXPCServerProtocol.h"

@class FMFHandle, NSString;

@protocol FMFXPCInternalServerProtocol <FMFXPCServerProtocol>
- (oneway void)showShareMyLocationiCloudSettingsOffAlert;
- (oneway void)getDataForPerformanceRequest:(void (^)(NSData *, NSError *))arg1;
- (oneway void)sessionHandleReport:(void (^)(NSDictionary *))arg1;
- (oneway void)dumpStateWithCompletion:(void (^)(NSDictionary *))arg1;
- (oneway void)sendIDSPacket:(NSString *)arg1 toHandle:(FMFHandle *)arg2;
- (oneway void)isIn5XXGracePeriodWithCompletion:(void (^)(BOOL))arg1;
- (oneway void)exit5XXGracePeriod;
- (oneway void)crashDaemon;
- (oneway void)setSessionClientBundleId:(NSString *)arg1;
- (oneway void)iCloudAccountNameWithCompletion:(void (^)(NSString *))arg1;
@end

