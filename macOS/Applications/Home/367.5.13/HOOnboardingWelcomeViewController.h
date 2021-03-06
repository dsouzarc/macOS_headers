//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OnBoardingKit/OBWelcomeController.h>

#import "HOOnboardingChildViewController-Protocol.h"

@class NSArray, NSString, OBTrayButton, UILabel;
@protocol HOOnboardingChildViewControllerDelegate, HOOnboardingChildViewControllerNavigationBarDelegate;

@interface HOOnboardingWelcomeViewController : OBWelcomeController <HOOnboardingChildViewController>
{
    id <HOOnboardingChildViewControllerDelegate> delegate;
    id <HOOnboardingChildViewControllerNavigationBarDelegate> navigationBarDelegate;
    NSArray *_constraints;
    OBTrayButton *_continueButton;
    UILabel *_addAccessoryFromiOSLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *addAccessoryFromiOSLabel; // @synthesize addAccessoryFromiOSLabel=_addAccessoryFromiOSLabel;
@property(retain, nonatomic) OBTrayButton *continueButton; // @synthesize continueButton=_continueButton;
@property(retain, nonatomic) NSArray *constraints; // @synthesize constraints=_constraints;
@property(nonatomic) __weak id <HOOnboardingChildViewControllerNavigationBarDelegate> navigationBarDelegate; // @synthesize navigationBarDelegate;
@property(nonatomic) __weak id <HOOnboardingChildViewControllerDelegate> delegate; // @synthesize delegate;
- (void)_continue:(id)arg1;
- (void)nextButtonPressed;
- (id)init;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) unsigned long long pocketOptions;
@property(readonly, nonatomic) NSString *segmentIdentifier;
@property(readonly) Class superclass;

@end

