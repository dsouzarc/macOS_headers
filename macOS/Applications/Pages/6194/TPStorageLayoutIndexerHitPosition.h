//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface TPStorageLayoutIndexerHitPosition : NSObject
{
    unsigned long long _pageIndex;
    unsigned long long _firstBodyCharIndex;
    struct CGRect _transformedBounds;
}

@property(nonatomic) unsigned long long firstBodyCharIndex; // @synthesize firstBodyCharIndex=_firstBodyCharIndex;
@property(nonatomic) struct CGRect transformedBounds; // @synthesize transformedBounds=_transformedBounds;
@property(nonatomic) unsigned long long pageIndex; // @synthesize pageIndex=_pageIndex;
- (id)description;
- (long long)compare:(id)arg1 isRTL:(BOOL)arg2;

@end

