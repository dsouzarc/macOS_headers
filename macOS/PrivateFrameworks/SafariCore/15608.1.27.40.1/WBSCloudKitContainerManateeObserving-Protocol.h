//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <SafariCore/NSObject-Protocol.h>

@class NSString;
@protocol WBSAppleAccountInformationProviding;

@protocol WBSCloudKitContainerManateeObserving <NSObject>
@property(copy, nonatomic) CDUnknownBlockType stateChangeObserver;
@property(readonly, copy, nonatomic) NSString *containerIdentifier;
- (void)determineManateeStateWithCompletion:(void (^)(long long, NSError *))arg1;
- (id)initWithContainerIdentifier:(NSString *)arg1 appleAccountInformationProvider:(id <WBSAppleAccountInformationProviding>)arg2;
@end

