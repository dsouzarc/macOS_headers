//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PFInitialization : NSObject
{
}

+ (void)endInitializationActivity;
+ (void)beginInitializationActivity;
+ (void)requestInitialization:(CDUnknownBlockType)arg1;
+ (void)addInitializationCompletionCallbackBlock:(CDUnknownBlockType)arg1;
+ (void)waitForInitialization;
+ (unsigned long long)initializationTrigger;
+ (id)workItem;
+ (id)_getWorkItem_completed;
+ (id)_getWorkItem;
+ (Class)workItemClass;
+ (void)_synchronize:(CDUnknownBlockType)arg1;
+ (void)_initializationComplete;
+ (void)performInitialization;
+ (void)_willInitialize;
+ (id)subordinates;
+ (id)dependencies;
+ (BOOL)mainThreadOnly;
+ (id)associationKey;
+ (void)scanForInitializationClasses;
+ (void)startInitialization;
+ (void)initialize;
+ (id)singletonConfigurationClasses;
+ (void)configureSingleton:(id)arg1 forClass:(Class)arg2;

@end

