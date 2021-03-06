//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <VectorKit/NSCopying-Protocol.h>

@class GEOLatLng;

@interface VKTrafficFeature : NSObject <NSCopying>
{
    Matrix_6e1d3589 _worldPoint;
    GEOLatLng *_position;
    CDStruct_2c43369c _location;
    float _minZoom;
    float _maxZoom;
    struct PolylineCoordinate _routeOffset;
    long long _trafficFeatureType;
}

@property(readonly, nonatomic) long long trafficFeatureType; // @synthesize trafficFeatureType=_trafficFeatureType;
@property(copy, nonatomic) GEOLatLng *position; // @synthesize position=_position;
@property(nonatomic) CDStruct_c3b9c2ee location; // @synthesize location=_location;
@property(nonatomic) float maxZoom; // @synthesize maxZoom=_maxZoom;
@property(nonatomic) float minZoom; // @synthesize minZoom=_minZoom;
@property(nonatomic) struct PolylineCoordinate routeOffset; // @synthesize routeOffset=_routeOffset;
@property(nonatomic) Matrix_6e1d3589 worldPoint; // @synthesize worldPoint=_worldPoint;
- (id).cxx_construct;
- (BOOL)isIncident;
- (BOOL)isCamera;
@property(readonly, nonatomic) Mercator2_57ec32b6 mercatorPoint;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithType:(long long)arg1;

@end

