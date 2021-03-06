//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

@class NSButton, NSTextField;

__attribute__((visibility("hidden")))
@interface TestDriveMigrationBannerViewController : NSViewController
{
    BOOL _isPreparedForPresentation;
    NSButton *_importButton;
    NSButton *_doNotImportButton;
    NSTextField *_descriptionField;
}

@property(nonatomic) __weak NSTextField *descriptionField; // @synthesize descriptionField=_descriptionField;
@property(nonatomic) __weak NSButton *doNotImportButton; // @synthesize doNotImportButton=_doNotImportButton;
@property(nonatomic) __weak NSButton *importButton; // @synthesize importButton=_importButton;
- (void).cxx_destruct;
- (void)_updateDescription;
- (BOOL)prepareForPresentation;
- (void)viewDidAppear;
- (void)doNotImportData:(id)arg1;
- (void)importData:(id)arg1;
- (id)nibName;

@end

