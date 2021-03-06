//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "FRArticlePageStyleProvider-Protocol.h"
#import "FRArticlePageViewControllerInterstitialTransitioning-Protocol.h"
#import "FRBarButtonItemsVisibilityManager-Protocol.h"
#import "TSNewsStackNavigatingRouterType-Protocol.h"

@class ADInterstitialAd, FCFeedManager, FCObservable, FRNavigationStyle, NSString, UIView;
@protocol FCFeedTheming;

@interface FRInterstitialAdViewController : UIViewController <FRArticlePageStyleProvider, TSNewsStackNavigatingRouterType, FRArticlePageViewControllerInterstitialTransitioning, FRBarButtonItemsVisibilityManager>
{
    BOOL _isActiveArticleViewController;
    ADInterstitialAd *_ad;
    UIView *_adView;
    FCFeedManager *_feedManager;
}

@property(retain, nonatomic) FCFeedManager *feedManager; // @synthesize feedManager=_feedManager;
@property(retain, nonatomic) UIView *adView; // @synthesize adView=_adView;
@property(readonly, nonatomic) ADInterstitialAd *ad; // @synthesize ad=_ad;
@property(nonatomic) BOOL isActiveArticleViewController; // @synthesize isActiveArticleViewController=_isActiveArticleViewController;
- (void).cxx_destruct;
- (long long)navigateStackToward:(id)arg1;
@property(readonly, nonatomic) BOOL shouldHideAllBarButtonItems;
@property(readonly, nonatomic) BOOL showingInterstitial;
@property(readonly, nonatomic) BOOL enableShareBarButtonItem;
- (BOOL)shouldShowSaveBarButtonItem;
@property(readonly, nonatomic) BOOL shouldShowShareBarButtonItem;
@property(readonly, nonatomic) BOOL shouldShowDislikeBarButtonItem;
@property(readonly, nonatomic) BOOL shouldShowLikeBarButtonItem;
@property(readonly, nonatomic) BOOL shouldShowTextResizeBarButtonItem;
@property(readonly, nonatomic) FCObservable *articlePageStyleProviderNavigationStyleUpdateObserver;
@property(readonly, nonatomic) FCObservable *scrollView;
@property(readonly, nonatomic) id <FCFeedTheming> articlePageStyleProviderFeedTheming;
@property(readonly, nonatomic) FRNavigationStyle *articlePageStyleProviderNavigationStyle;
@property(readonly, copy, nonatomic) NSString *articlePageStyleProviderIdentifier;
- (void)removeInterstitial;
- (void)_updateAdView;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)didMoveToParentViewController:(id)arg1;
- (void)viewSafeAreaInsetsDidChange;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithInterstitialAd:(id)arg1 feedManager:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

