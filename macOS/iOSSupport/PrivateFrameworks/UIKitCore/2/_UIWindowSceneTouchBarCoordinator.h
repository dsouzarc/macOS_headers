//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/UINSTouchBarCoordinator-Protocol.h>
#import <UIKitCore/_UISceneComponentProviding-Protocol.h>

@class NSArray, NSMutableOrderedSet, NSString, UIScene, UIWindowScene;
@protocol UINSWindow;

__attribute__((visibility("hidden")))
@interface _UIWindowSceneTouchBarCoordinator : NSObject <UINSTouchBarCoordinator, _UISceneComponentProviding>
{
    UIWindowScene *_scene;
    id <UINSWindow> _hostWindow;
    NSMutableOrderedSet *_defaultProviders;
    NSArray *_activeTouchBars;
    BOOL _touchBarAvailable;
    BOOL _needsUpdate;
}

+ (void)initializeTouchBarConnections;
@property(nonatomic, getter=_scene, setter=_setScene:) __weak UIScene *_scene; // @synthesize _scene;
@property(nonatomic, getter=isTouchBarAvailable) BOOL touchBarAvailable; // @synthesize touchBarAvailable=_touchBarAvailable;
- (void).cxx_destruct;
- (void)unregisterFallbackTouchBarProvider:(id)arg1;
- (void)registerFallbackTouchBarProvider:(id)arg1;
- (void)setNeedsUpdate;
@property(readonly, nonatomic) NSArray *touchBars;
- (void)_updateForSceneIdentifier:(id)arg1;
- (void)_updateForWindowCreatedNotification:(id)arg1;
- (id)initWithScene:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

