//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface PASpindumpBinaryFormat : NSObject
{
}

+ (id)sampleStoreForSpindumpFile:(const char *)arg1;
+ (BOOL)saveBinaryFormatOfSampleStore:(id)arg1 toStream:(struct __sFILE *)arg2;
+ (id)binaryFormatDataWithSampleStore:(id)arg1;

@end

