//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DBSerializable.h"
#import "NSCopying.h"

@class DBTEAMLOGPlacementRestriction, NSString;

@interface DBTEAMLOGDataPlacementRestrictionSatisfyPolicyDetails : NSObject <DBSerializable, NSCopying>
{
    DBTEAMLOGPlacementRestriction *_placementRestriction;
}

+ (id)deserialize:(id)arg1;
+ (id)serialize:(id)arg1;
@property(readonly, nonatomic) DBTEAMLOGPlacementRestriction *placementRestriction; // @synthesize placementRestriction=_placementRestriction;
- (void).cxx_destruct;
- (BOOL)isEqualToDataPlacementRestrictionSatisfyPolicyDetails:(id)arg1;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithPlacementRestriction:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

