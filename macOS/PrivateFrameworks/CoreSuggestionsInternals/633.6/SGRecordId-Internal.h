//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CoreSuggestions/SGRecordId.h>

@interface SGRecordId (Internal)
+ (id)recordIdForEventWithRowId:(long long)arg1;
+ (id)recordIdForContactDetailWithRowId:(long long)arg1;
+ (id)recordIdForContactWithRowId:(long long)arg1;
+ (id)recordIdForEmailWithRowId:(long long)arg1;
+ (id)recordIdWithTableId:(unsigned char)arg1 rowId:(long long)arg2;
- (long long)rowId;
- (unsigned char)tableId;
@end

