//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AMSBagProtocol.h"

@class NSDate, NSString;

@interface AMSBag : NSObject <AMSBagProtocol>
{
    id <AMSBagDataSourceProtocol> _dataSource;
}

+ (void)_resetBagCache;
+ (id)bagCacheAccessQueue;
+ (id)bagCache;
+ (id)bagForProfile:(id)arg1 profileVersion:(id)arg2 processInfo:(id)arg3;
+ (id)bagForProfile:(id)arg1 profileVersion:(id)arg2;
+ (id)internalBag;
@property(retain) id <AMSBagDataSourceProtocol> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (id)dictionaryForKey:(id)arg1;
- (id)URLForKey:(id)arg1 account:(id)arg2;
- (id)URLForKey:(id)arg1;
- (id)stringForKey:(id)arg1;
- (id)integerForKey:(id)arg1;
- (id)doubleForKey:(id)arg1;
- (id)boolForKey:(id)arg1;
- (id)arrayForKey:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)createSnapshotWithCompletion:(CDUnknownBlockType)arg1;
- (BOOL)isLoaded;
@property(readonly, copy) NSString *profileVersion;
@property(readonly, copy) NSString *profile;
@property(readonly, getter=isExpired) BOOL expired;
@property(readonly) NSDate *expirationDate;
- (id)initWithDataSource:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

