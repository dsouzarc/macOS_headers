//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MapKit/NSCopying-Protocol.h>
#import <MapKit/NSSecureCoding-Protocol.h>

@class MKMapView;

@interface MKMapCamera : NSObject <NSSecureCoding, NSCopying>
{
    struct CLLocationCoordinate2D _centerCoordinate;
    double _heading;
    double _pitch;
    double _altitude;
    MKMapView *_mapView;
    BOOL _pitchAdjustsAltitude;
}

+ (BOOL)supportsSecureCoding;
+ (id)_cameraLookingAtMapRect:(CDStruct_02837cd9)arg1 forViewSize:(struct CGSize)arg2;
+ (id)_cameraLookingAtGEOMapRect:(const CDStruct_02837cd9 *)arg1 aspectRatio:(float)arg2;
+ (id)cameraLookingAtCenterCoordinate:(struct CLLocationCoordinate2D)arg1 fromDistance:(double)arg2 pitch:(double)arg3 heading:(double)arg4;
+ (id)cameraLookingAtCenterCoordinate:(struct CLLocationCoordinate2D)arg1 fromEyeCoordinate:(struct CLLocationCoordinate2D)arg2 eyeAltitude:(double)arg3;
+ (id)camera;
@property(nonatomic) double altitude; // @synthesize altitude=_altitude;
@property(nonatomic, getter=_precisePitch, setter=_setPrecisePitch:) double precisePitch; // @synthesize precisePitch=_pitch;
@property(nonatomic) double heading; // @synthesize heading=_heading;
@property(nonatomic) struct CLLocationCoordinate2D centerCoordinate; // @synthesize centerCoordinate=_centerCoordinate;
- (void).cxx_destruct;
- (BOOL)_validate;
- (id)description;
- (void)_updateState;
@property(nonatomic) double centerCoordinateDistance;
@property(nonatomic) double pitch;
- (void)_setMapView:(id)arg1;
- (id)_mapView;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (CDStruct_02837cd9)_enclosingGEOMapRectForAspectRatio:(float)arg1;

@end

