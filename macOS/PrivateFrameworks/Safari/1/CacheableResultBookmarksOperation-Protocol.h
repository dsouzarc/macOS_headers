//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol CacheableResultBookmarksOperation <NSObject>
@property(retain, nonatomic) id result;
@property(readonly, nonatomic) id <NSCopying> cacheKey;

@optional
+ (BOOL)cachedResultIsInvalidatedWhenBookmarksChange;
@end

