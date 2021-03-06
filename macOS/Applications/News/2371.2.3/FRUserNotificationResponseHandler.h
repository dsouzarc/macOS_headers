//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FRUserNotificationResponseHandlerType-Protocol.h"

@class FCCloudContext, NSString;
@protocol FRActivityErrorHandler, FRFeldsparContext, TSBridgedNewsActivityFactoryType, TSBridgedNewsActivityNavigatorType;

@interface FRUserNotificationResponseHandler : NSObject <FRUserNotificationResponseHandlerType>
{
    id <TSBridgedNewsActivityFactoryType> _activityFactory;
    id <FRActivityErrorHandler> _activityErrorHandler;
    id <TSBridgedNewsActivityNavigatorType> _navigator;
    id <FRFeldsparContext> _feldsparContext;
    FCCloudContext *_cloudContext;
}

@property(retain, nonatomic) FCCloudContext *cloudContext; // @synthesize cloudContext=_cloudContext;
@property(retain, nonatomic) id <FRFeldsparContext> feldsparContext; // @synthesize feldsparContext=_feldsparContext;
@property(retain, nonatomic) id <TSBridgedNewsActivityNavigatorType> navigator; // @synthesize navigator=_navigator;
@property(retain, nonatomic) id <FRActivityErrorHandler> activityErrorHandler; // @synthesize activityErrorHandler=_activityErrorHandler;
@property(retain, nonatomic) id <TSBridgedNewsActivityFactoryType> activityFactory; // @synthesize activityFactory=_activityFactory;
- (void).cxx_destruct;
- (id)_articleContextFromNotificationID:(id)arg1 notificationSenderChannelID:(id)arg2 userActionDate:(id)arg3;
- (void)navigateToNotificationSettings;
- (void)navigateToSpotlight;
- (void)shareHeadline:(id)arg1 notificationID:(id)arg2 userActionDate:(id)arg3;
- (void)showHeadline:(id)arg1 notificationID:(id)arg2 userActionDate:(id)arg3;
- (void)saveArticleWithID:(id)arg1 notificationID:(id)arg2 sourceChannelID:(id)arg3 isFreeArticle:(BOOL)arg4 headline:(id)arg5 userActionDate:(id)arg6;
- (void)showArticleWithID:(id)arg1 notificationID:(id)arg2 channelID:(id)arg3 forceArticleUpdate:(BOOL)arg4 userActionDate:(id)arg5;
- (void)shareArticleWithID:(id)arg1 notificationID:(id)arg2 channelID:(id)arg3 forceArticleUpdate:(BOOL)arg4 userActionDate:(id)arg5;
- (id)initWithNewsActivityFactory:(id)arg1 navigator:(id)arg2 feldsparContext:(id)arg3 cloudContext:(id)arg4 activityErrorHandler:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

