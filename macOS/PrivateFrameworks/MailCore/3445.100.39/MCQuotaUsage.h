//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MCQuotaUsage : NSObject
{
    CDStruct_d3e19d9e _current;
    CDStruct_d3e19d9e _maximum;
}

@property(nonatomic) CDStruct_d3e19d9e maximum; // @synthesize maximum=_maximum;
@property(nonatomic) CDStruct_d3e19d9e current; // @synthesize current=_current;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)incrementCurrentBy:(CDStruct_d3e19d9e)arg1;
- (void)decrementCurrentBy:(CDStruct_d3e19d9e)arg1;

@end

