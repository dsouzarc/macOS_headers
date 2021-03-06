//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AXMDisplay, NSObject<OS_dispatch_queue>;

@interface AXMDisplayManager : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    AXMDisplay *_queue_CoreAnimationMainDisplay;
    AXMDisplay *_queue_FrontBoardMainDisplay;
    BOOL _initialized;
    double _mobileGestaltOrientation;
}

- (void).cxx_destruct;
@property(nonatomic) double mobileGestaltOrientation; // @synthesize mobileGestaltOrientation=_mobileGestaltOrientation;
- (long long)_discreteOrientationForOrientation:(double)arg1;
- (id)_displayPropertiesFromMobileGestalt;
@property(readonly, nonatomic) AXMDisplay *coreAnimationMainDisplay;
@property(readonly, nonatomic) AXMDisplay *frontBoardMainDisplay;
@property(readonly, nonatomic) BOOL isInitialized;
- (void)dealloc;
- (id)description;
- (id)initAndWaitForMainDisplayConfiguration;
- (id)initWithCompletion:(CDUnknownBlockType)arg1;

@end

