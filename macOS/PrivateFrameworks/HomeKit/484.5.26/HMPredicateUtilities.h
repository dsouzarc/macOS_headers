//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface HMPredicateUtilities : NSObject
{
}

+ (BOOL)containsPresenceEvents:(id)arg1;
+ (id)rewritePredicateForDaemon:(id)arg1 characteristicIsInvalid:(char *)arg2;
+ (id)rewritePredicateForMerge:(id)arg1 existingHome:(id)arg2 characteristicIsInvalid:(char *)arg3;
+ (id)rewritePredicateForClient:(id)arg1 home:(id)arg2;
+ (BOOL)areOnlyHourAndMinuteSet:(id)arg1;
+ (BOOL)validatePredicate:(id)arg1;

@end

