//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PLMomentRefreshable.h"
#import "PLRegionsClusteringItem.h"

@class CLLocation, NSArray, NSData, NSDate, NSObject<NSCopying>, NSString, PLRevGeoLocationInfo, PLRevGeoPlaceAnnotation;

@protocol PLMomentAssetData <PLMomentRefreshable, PLRegionsClusteringItem>
@property(readonly, nonatomic) BOOL hasChanges;
@property(readonly, nonatomic) BOOL isAvalancheStackPhoto;
@property(readonly, nonatomic) BOOL isInterestingForAvalanche;
@property(readonly, nonatomic) NSString *avalancheUUID;
@property(readonly, nonatomic) BOOL isScreenRecording;
@property(readonly, nonatomic) BOOL isVideo;
@property(readonly, nonatomic) BOOL isPhoto;
@property(nonatomic) double curationScore;
@property(nonatomic) BOOL favorite;
@property(nonatomic) id <PLPhotosHighlightData> yearHighlightBeingKeyAsset;
@property(nonatomic) id <PLPhotosHighlightData> monthHighlightBeingFirstAsset;
@property(nonatomic) id <PLPhotosHighlightData> monthHighlightBeingKeyAsset;
@property(nonatomic) id <PLPhotosHighlightData> dayGroupHighlightBeingExtendedAssets;
@property(nonatomic) id <PLPhotosHighlightData> dayGroupHighlightBeingKeyAsset;
@property(nonatomic) id <PLPhotosHighlightData> dayGroupHighlightBeingAssets;
@property(nonatomic) id <PLPhotosHighlightData> highlightBeingExtendedAssets;
@property(nonatomic) id <PLPhotosHighlightData> highlightBeingSummaryAssets;
@property(nonatomic) id <PLPhotosHighlightData> highlightBeingKeyAsset;
@property(nonatomic) id <PLPhotosHighlightData> highlightBeingAssets;
@property(readonly, retain, nonatomic) PLRevGeoLocationInfo *locationInfo;
@property(readonly, retain, nonatomic) PLRevGeoPlaceAnnotation *placeAnnotation;
@property(nonatomic) BOOL shiftedLocationIsValid;
@property(retain, nonatomic) CLLocation *shiftedLocation;
@property(readonly, retain, nonatomic) NSObject<NSCopying> *uniqueObjectID;
@property(nonatomic) BOOL reverseLocationDataIsValid;
@property(retain, nonatomic) NSData *reverseLocationData;
@property(retain, nonatomic) id <PLMomentData> moment;
@property(readonly, nonatomic) int inferredTimeZoneOffset;
@property(readonly, retain, nonatomic) NSDate *localDateCreated;
@property(retain, nonatomic) NSDate *dateCreated;
@property(retain, nonatomic) CLLocation *location;
- (NSString *)globalUUID;
- (BOOL)isDeleted;
- (BOOL)visibilityStateIsEqualToState:(short)arg1;
- (NSArray *)assetComparisonSortDescriptors;
- (long long)compareToAsset:(id <PLMomentAssetData>)arg1;

@optional
@property(readonly, retain, nonatomic) NSString *cloudAssetGUID;
@property(nonatomic) long long width;
@property(nonatomic) long long height;
@property(nonatomic) short kindSubtype;
@property(nonatomic) short kind;
@property(nonatomic) double duration;
@property(retain, nonatomic) NSDate *modificationDate;
@property(readonly, retain, nonatomic) NSString *uuid;
@end

