//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol IDDiagnosticsProtocol <NSObject>
- (void)clearDiagnosticMessages:(void (^)(BOOL))arg1;
- (void)clearSingleDiagnosticMessage:(long long)arg1 completionHandler:(void (^)(BOOL))arg2;
- (void)recordDiagnosticMessage:(long long)arg1 withData:(NSString *)arg2 completionHandler:(void (^)(BOOL))arg3;
- (void)finishMessageTransport;
- (void)startMessageTransport;
- (void)finishInstall;
- (void)startNewInstall;
@end

