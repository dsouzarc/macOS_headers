//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Vision/VNObservation.h>

@interface VNHorizonObservation : VNObservation
{
    struct CGAffineTransform _transform;
    double _angle;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) double angle; // @synthesize angle=_angle;
@property(nonatomic) struct CGAffineTransform transform; // @synthesize transform=_transform;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

