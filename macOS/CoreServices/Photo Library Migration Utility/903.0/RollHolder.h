//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Cocoa/NSObject.h>

@interface RollHolder : NSObject
{
    struct IPRoll *mRoll;
    BOOL mDeleteOnDealloc;
}

+ (id)hold:(struct IPRoll *)arg1 deleteOnDealloc:(BOOL)arg2;
+ (id)hold:(struct IPRoll *)arg1;
@property BOOL deleteOnDealloc; // @synthesize deleteOnDealloc=mDeleteOnDealloc;
@property struct IPRoll *roll; // @synthesize roll=mRoll;
- (void)dealloc;
- (id)initWithRoll:(struct IPRoll *)arg1 deleteOnDealloc:(BOOL)arg2;

@end

