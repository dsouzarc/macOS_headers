//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableSet;

@interface _MKSortedDepartureCollection : NSObject
{
    NSMutableArray *_sortedDepartures;
    NSMutableSet *_groupedSequences;
}

@property(retain, nonatomic) NSMutableSet *groupedSequences; // @synthesize groupedSequences=_groupedSequences;
@property(retain, nonatomic) NSMutableArray *sortedDepartures; // @synthesize sortedDepartures=_sortedDepartures;
- (void).cxx_destruct;

@end

