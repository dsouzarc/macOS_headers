//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSNumber.h"

@interface NSNumber (SyncServicesSqliteExtensions)
+ (id)isd_propertyValueWithType:(int)arg1 bytesEncodedForSqlite:(const void *)arg2;
- (int)isd_sqlitePropertyValueType;
- (void *)isd_bytesEncodedForSqlite;
- (BOOL)isd_isEqual:(id)arg1;
- (int)isd_quickDirtyCoderType;
@end

