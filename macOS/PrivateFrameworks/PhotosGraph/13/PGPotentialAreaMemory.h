//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotosGraph/PGPotentialMemory.h>

@class NSArray, NSDate, NSMutableSet, NSString, PGGraphNode;

@interface PGPotentialAreaMemory : PGPotentialMemory
{
    NSMutableSet *_mutableMomentNodes;
    PGGraphNode *_areaNode;
    long long _year;
    NSArray *_assetsInArea;
    NSDate *_startDate;
    NSDate *_endDate;
}

- (void).cxx_destruct;
@property(retain) NSDate *endDate; // @synthesize endDate=_endDate;
@property(retain) NSDate *startDate; // @synthesize startDate=_startDate;
@property(retain) NSArray *assetsInArea; // @synthesize assetsInArea=_assetsInArea;
@property(readonly) long long year; // @synthesize year=_year;
@property(readonly) PGGraphNode *areaNode; // @synthesize areaNode=_areaNode;
@property(readonly) NSString *area;
- (void)addMomentNode:(id)arg1;
- (id)initWithAreaNode:(id)arg1 year:(long long)arg2;

@end

