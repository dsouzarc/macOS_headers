//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "XSDefinitionProvider.h"

@class NSArray, NSString;

@interface EWSNotificationType : NSObject <XSDefinitionProvider>
{
    BOOL _MoreEvents;
    NSString *_SubscriptionId;
    NSString *_PreviousWatermark;
    NSArray *_Events;
}

+ (id)definition;
@property(copy, nonatomic) NSArray *Events; // @synthesize Events=_Events;
@property(nonatomic) BOOL MoreEvents; // @synthesize MoreEvents=_MoreEvents;
@property(copy, nonatomic) NSString *PreviousWatermark; // @synthesize PreviousWatermark=_PreviousWatermark;
@property(copy, nonatomic) NSString *SubscriptionId; // @synthesize SubscriptionId=_SubscriptionId;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

