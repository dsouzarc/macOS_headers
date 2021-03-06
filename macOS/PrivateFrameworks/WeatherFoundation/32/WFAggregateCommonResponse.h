//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <WeatherFoundation/WFResponse.h>

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSArray, WFAirQualityConditions, WFWeatherConditions;

@interface WFAggregateCommonResponse : WFResponse <NSCopying, NSSecureCoding>
{
    BOOL _responseWasFromCache;
    WFAirQualityConditions *_airQualityObservations;
    WFWeatherConditions *_currentObservations;
    NSArray *_lastTwentyFourHoursOfObservations;
    NSArray *_hourlyForecastedConditions;
    NSArray *_dailyForecastedConditions;
    NSArray *_dailyPollenForecastedConditions;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) BOOL responseWasFromCache; // @synthesize responseWasFromCache=_responseWasFromCache;
@property(retain, nonatomic) NSArray *dailyPollenForecastedConditions; // @synthesize dailyPollenForecastedConditions=_dailyPollenForecastedConditions;
@property(retain, nonatomic) NSArray *dailyForecastedConditions; // @synthesize dailyForecastedConditions=_dailyForecastedConditions;
@property(retain, nonatomic) NSArray *hourlyForecastedConditions; // @synthesize hourlyForecastedConditions=_hourlyForecastedConditions;
@property(retain, nonatomic) NSArray *lastTwentyFourHoursOfObservations; // @synthesize lastTwentyFourHoursOfObservations=_lastTwentyFourHoursOfObservations;
@property(retain, nonatomic) WFWeatherConditions *currentObservations; // @synthesize currentObservations=_currentObservations;
@property(retain, nonatomic) WFAirQualityConditions *airQualityObservations; // @synthesize airQualityObservations=_airQualityObservations;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

