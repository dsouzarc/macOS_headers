//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SXDocumentSectionItemProvider-Protocol.h"

@class NPSoftPaywallHeightProvider, NSString, UIViewController;

@interface FRPaidBundleSoftPaywallDocumentSectionItemProvider : NSObject <SXDocumentSectionItemProvider>
{
    UIViewController *_viewController;
    NPSoftPaywallHeightProvider *_heightProvider;
}

@property(retain, nonatomic) NPSoftPaywallHeightProvider *heightProvider; // @synthesize heightProvider=_heightProvider;
@property(retain, nonatomic) UIViewController *viewController; // @synthesize viewController=_viewController;
- (void).cxx_destruct;
- (id)sectionItemViewController;
- (double)sectionItemHeightFor:(double)arg1 traitCollection:(id)arg2;
- (id)initWithSoftPaywallViewController:(id)arg1 softPaywallHeightProvider:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

