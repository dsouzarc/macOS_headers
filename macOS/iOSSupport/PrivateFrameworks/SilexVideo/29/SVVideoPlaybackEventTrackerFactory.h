//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SilexVideo/SVVideoPlaybackEventTrackerFactory-Protocol.h>

@class NSString;
@protocol SVVideoLoadingStateObserverFactory, SVVideoPlaybackStateObserverFactory;

@interface SVVideoPlaybackEventTrackerFactory : NSObject <SVVideoPlaybackEventTrackerFactory>
{
    id <SVVideoPlaybackStateObserverFactory> _playbackStateObserverFactory;
    id <SVVideoLoadingStateObserverFactory> _loadingStateObserverFactory;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <SVVideoLoadingStateObserverFactory> loadingStateObserverFactory; // @synthesize loadingStateObserverFactory=_loadingStateObserverFactory;
@property(readonly, nonatomic) id <SVVideoPlaybackStateObserverFactory> playbackStateObserverFactory; // @synthesize playbackStateObserverFactory=_playbackStateObserverFactory;
- (id)createEventTrackerForVideo:(id)arg1;
- (id)initWithPlaybackStateObserverFactory:(id)arg1 loadingStateObserverFactory:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

