//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface NSVBTestedFault : NSObject
{
    double _probability;
    unsigned int _tested;
    unsigned int _taken;
}

+ (id)testedFaultWithProbability:(double)arg1;
- (id)description;
- (id)initWithProbability:(double)arg1;

@end

