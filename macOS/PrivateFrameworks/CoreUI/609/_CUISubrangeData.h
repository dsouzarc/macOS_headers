//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSData.h"

__attribute__((visibility("hidden")))
@interface _CUISubrangeData : NSData
{
    struct _NSRange _range;
    NSData *_data;
}

- (id)copyWithZone:(struct _NSZone *)arg1;
- (const void *)bytes;
- (unsigned long long)length;
- (void)dealloc;
- (id)initWithData:(id)arg1 range:(struct _NSRange)arg2;

@end

