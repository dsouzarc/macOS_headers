//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <NewsUI/NUPageable-Protocol.h>

@class ADInterstitialAd, NSString, UIView;
@protocol NULoadingDelegate;

@interface NUInterstitialViewController : UIViewController <NUPageable>
{
    BOOL _hasPresentedInterstitial;
    NSString *_pageIdentifier;
    id <NULoadingDelegate> _loadingDelegate;
    ADInterstitialAd *_interstitial;
    UIView *_interstitialView;
}

@property(nonatomic) BOOL hasPresentedInterstitial; // @synthesize hasPresentedInterstitial=_hasPresentedInterstitial;
@property(retain, nonatomic) UIView *interstitialView; // @synthesize interstitialView=_interstitialView;
@property(readonly, nonatomic) ADInterstitialAd *interstitial; // @synthesize interstitial=_interstitial;
@property(nonatomic) __weak id <NULoadingDelegate> loadingDelegate; // @synthesize loadingDelegate=_loadingDelegate;
@property(readonly, copy, nonatomic) NSString *pageIdentifier; // @synthesize pageIdentifier=_pageIdentifier;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithInterstitial:(id)arg1 pageIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

