//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TUBannerProtocol.h"

@class NSMutableDictionary, NSString, NSUserDefaults, TUPreferences;

@interface TUCMMBanner : NSObject <TUBannerProtocol>
{
    TUPreferences *_prefences;
    NSUserDefaults *_userDefaults;
    NSMutableDictionary *_inMemoryStorage;
}

@property(retain, nonatomic) NSMutableDictionary *inMemoryStorage; // @synthesize inMemoryStorage=_inMemoryStorage;
@property(retain, nonatomic) NSUserDefaults *userDefaults; // @synthesize userDefaults=_userDefaults;
@property(retain, nonatomic) TUPreferences *prefences; // @synthesize prefences=_prefences;
- (void).cxx_destruct;
- (long long)bannerMinLaunchCountToShow;
- (void)setBannerMinLaunchCountToShow:(long long)arg1;
- (long long)bannerMaxShowCount;
- (void)setBannerMaxShowCount:(long long)arg1;
- (long long)bannerPriority;
- (void)setBannerPriority:(long long)arg1;
- (void)setBannerViewedCount:(long long)arg1;
- (void)incrementBannerViewedCount;
- (void)closeBannerForeverSadPanda;
- (id)bannerNextShowDate;
- (long long)bannerViewedCount;
- (BOOL)bannerClosed;
- (BOOL)bannerClicked;
- (BOOL)userHasLanguageToShowBanner;
- (BOOL)isCMMXInstalled;
- (BOOL)isFreshInstall;
- (void)closeBanner;
- (void)updateFromDictionary:(id)arg1;
- (void)markBannerAsViewed;
- (void)deferBanner;
- (BOOL)shouldShowBannerForArchivesWithSize:(unsigned long long)arg1;
- (BOOL)shouldRequestBanner;
- (id)bannerButtonTitle;
- (id)bannerLabelTitle;
- (id)bannerImage;
- (void)dealloc;
- (id)initWithDictionary:(id)arg1 userDefaults:(id)arg2;
- (id)initWithDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

