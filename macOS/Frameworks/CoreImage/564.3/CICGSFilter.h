//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface CICGSFilter : NSObject
{
    unsigned int _cid;
    unsigned int _filter_id;
}

+ (id)filterWithFilter:(id)arg1 connectionID:(unsigned int)arg2;
- (id)description;
- (int)removeFromWindow:(unsigned int)arg1;
- (int)addToWindow:(unsigned int)arg1 flags:(unsigned int)arg2;
- (void)setValuesForKeysWithDictionary:(id)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (void)finalize;
- (void)dealloc;
- (id)initWithFilter:(id)arg1 connectionID:(unsigned int)arg2;

@end

