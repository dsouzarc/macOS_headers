//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <GeoServices/GEOMapRequest.h>

@class GEOMapTileFinder;

__attribute__((visibility("hidden")))
@interface GEOMapBuildingFinder : GEOMapRequest
{
    GEOMapTileFinder *_tileFinder;
    CDStruct_2c43369c _centerCoordinate;
    double _radius;
}

- (void).cxx_destruct;
- (void)findBuildingsWithHandler:(CDUnknownBlockType)arg1;
- (void)cancel;
- (id)initWithMap:(id)arg1 centerCoordinate:(CDStruct_c3b9c2ee)arg2 radius:(double)arg3;

@end

