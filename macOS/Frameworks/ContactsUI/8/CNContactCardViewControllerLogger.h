//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CNContactCardViewControllerLogger.h"

@class NSObject<OS_os_log>;

@interface CNContactCardViewControllerLogger : NSObject <CNContactCardViewControllerLogger>
{
    NSObject<OS_os_log> *_log;
}

@property(readonly, nonatomic) NSObject<OS_os_log> *log; // @synthesize log=_log;
- (void).cxx_destruct;
- (void)logCommitedEditingResults:(id)arg1;
- (void)logReceivedRequestToSaveContact:(id)arg1;
- (void)logDidSaveContact:(id)arg1;
- (void)logWillSaveContact:(id)arg1;
- (void)logDidSetPropertyKeysToDisplay:(id)arg1;
- (void)logDidReceiveRefreshedContact:(id)arg1 forSetContact:(id)arg2;
- (void)logContactWasSet:(id)arg1;
- (void)logTotalCalculatedDesiredHeight:(double)arg1;
- (void)logWidget:(id)arg1 reportedCustomSpacing:(double)arg2;
- (void)logWidget:(id)arg1 reportedDesiredHeight:(double)arg2;
- (id)init;

@end

