//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AEPreferences.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface AEConcretePreferences : NSObject <AEPreferences>
{
}

- (BOOL)assessmentBoolForKey:(id)arg1;
- (void)setAssessmentBool:(BOOL)arg1 forKey:(id)arg2;
@property(nonatomic, getter=shouldRestrictContentCapture) BOOL restrictContentCapture;
@property(nonatomic, getter=shouldWhitelistHotkeys) BOOL whitelistHotkeys;
@property(nonatomic, getter=shouldStopAirplayBeforehand) BOOL stopAirPlayBeforehand;
@property(nonatomic, getter=shouldPauseMedia) BOOL pauseMedia;
@property(nonatomic, getter=shouldRestrictFrontmostApp) BOOL restrictFrontmostApp;
@property(nonatomic, getter=shouldRestrictNetworkAccess) BOOL restrictNetworkAccess;
@property(nonatomic, getter=shouldScrubPasteboard) BOOL scrubPasteboard;
@property(nonatomic, getter=shouldDisableContinuity) BOOL disableContinuity;
@property(nonatomic, getter=shouldDisableSiri) BOOL disableSiri;
@property(nonatomic, getter=shouldCreateAssessmentFile) BOOL createAssessmentFile;
@property(nonatomic, getter=shouldPresentShields) BOOL presentShields;
- (id)ignoreRestrictContentCaptureKey;
- (id)ignoreWhitelistHotkeysKey;
- (id)ignorePauseMediaKey;
- (id)ignoreStopAirPlayBeforehandKey;
- (id)ignoreRestrictFrontmostAppKey;
- (id)ignoreRestrictNetworkAccessKey;
- (id)ignoreScrubPasteboardKey;
- (id)ignoreDisableContinuityKey;
- (id)ignoreDisableSiriKey;
- (id)ignoreCreateAssessmentFileKey;
- (id)ignorePresentShieldsKey;
- (id)assessmentPreferenceDomain;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

