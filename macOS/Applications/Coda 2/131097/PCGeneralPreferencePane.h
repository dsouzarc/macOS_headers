//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PCPreferencePane.h"

@class NSMatrix, NSTextField, NSView, PCURLTextField;

__attribute__((visibility("hidden")))
@interface PCGeneralPreferencePane : PCPreferencePane
{
    NSMatrix *updateMatrix;
    NSTextField *updateLabel;
    NSMatrix *iSplitDirectionMatrix;
    BOOL _allowsAnalyticsOptOut;
    NSView *_updatesView;
    NSTextField *_privacyDescriptionField;
    PCURLTextField *_privacyLinkField;
}

@property PCURLTextField *privacyLinkField; // @synthesize privacyLinkField=_privacyLinkField;
@property NSTextField *privacyDescriptionField; // @synthesize privacyDescriptionField=_privacyDescriptionField;
@property NSView *updatesView; // @synthesize updatesView=_updatesView;
@property BOOL allowsAnalyticsOptOut; // @synthesize allowsAnalyticsOptOut=_allowsAnalyticsOptOut;
- (void)setUpdateChecking:(id)arg1;
- (void)viewWillDisappear;
- (void)viewDidLoad;
- (void)viewDidAppear;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

