//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ABAccountConfiguration.h"

@class NSDictionary;

@protocol ABAccountConfigurationInternal <ABAccountConfiguration>
- (NSDictionary *)allPersistentKeysAndValues;
- (void)setEnabled:(BOOL)arg1;
- (BOOL)isEnabled;
- (void)setSearchable:(BOOL)arg1;
- (BOOL)isSearchable;
- (void)invalidate;
@end

