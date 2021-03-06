//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, TSUDocumentSerializationToken, TSUProgress;
@protocol TSUDocumentSerializationToken;

@protocol TSDModalOperationPresenter <NSObject>
- (void)resumeModalOperationAfterCancel:(BOOL)arg1;
- (void)suspendModalOperation;
- (void)continueAsynchronousWorkOnMainThreadForToken:(id <TSUDocumentSerializationToken>)arg1 usingBlock:(void (^)(void))arg2;
- (void)endModalOperationWithToken:(id <TSUDocumentSerializationToken>)arg1;
- (id <TSUDocumentSerializationToken>)beginModalOperationWithLocalizedMessage:(NSString *)arg1 progress:(TSUProgress *)arg2 parentDocumentSerializationToken:(TSUDocumentSerializationToken *)arg3 cancelHandler:(void (^)(void))arg4;
@end

