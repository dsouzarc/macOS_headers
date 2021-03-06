//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <MapKit/MKAnnotationView.h>

#import <MapKit/_MKBalloonCalloutViewConfiguring-Protocol.h>

@class MKMapView, NSColor, NSImage, NSString, NSView;

@interface MKLabelMarkerView : MKAnnotationView <_MKBalloonCalloutViewConfiguring>
{
    NSView *_anchorDotView;
    BOOL _needsToResolveBalloonAttributes;
    long long _balloonCalloutStyle;
    BOOL _balloonCalloutShouldOriginateFromSmallSize;
    NSColor *_balloonFillColor;
    NSColor *_balloonStrokeColor;
    NSImage *_balloonImage;
    NSView *_balloonContentView;
    double _smallBalloonScaleFactor;
    MKMapView *_mapView;
}

+ (BOOL)_followsTerrain;
@property(nonatomic) __weak MKMapView *mapView; // @synthesize mapView=_mapView;
- (void).cxx_destruct;
- (void)_configureBalloonForDataIconImageKeys:(id)arg1 scale:(double)arg2;
- (BOOL)updateCalloutViewIfNeededAnimated:(BOOL)arg1;
- (void)_addAnchorDotViewIfNeeded;
- (void)_updateAnchorOffset;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (BOOL)shouldShowCallout;
- (void)dealloc;
- (void)setAnnotation:(id)arg1;
- (void)_deregisterObserver;
- (void)_registerObserver;
@property(readonly, nonatomic, getter=_balloonContentView) NSView *balloonContentView;
@property(readonly, nonatomic, getter=_balloonImage) NSImage *balloonImage;
@property(readonly, nonatomic, getter=_balloonInnerStrokeColor) NSColor *balloonInnerStrokeColor;
@property(readonly, nonatomic, getter=_balloonStrokeColor) NSColor *balloonStrokeColor;
@property(readonly, nonatomic, getter=_balloonTintColor) NSColor *balloonTintColor;
- (BOOL)_balloonCalloutShouldOriginateFromSmallSize:(double *)arg1;
@property(readonly, nonatomic, getter=_balloonCalloutStyle) long long balloonCalloutStyle;
- (void)_resolveBalloonAttributesIfNecessary;
- (void)prepareForReuse;
- (id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

