//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import "TMACustomFormatTokenController-Protocol.h"

@class NSButton, NSLayoutConstraint, NSNumber, NSPopUpButton, NSString, NSTextField, NSTokenField, NSView, TMACustomFormatNumberTokenDelegate, TMACustomFormatSheetController, TMAInspectorHorizontalLine;

@interface TMACustomFormatNumberFormatViewController : NSViewController <TMACustomFormatTokenController>
{
    NSView *mView;
    NSTokenField *mTokenField;
    NSButton *mRemoveFormatButton;
    NSTextField *mSampleTextField;
    NSPopUpButton *mConditionPopUp;
    NSTextField *mConditionParameterTextField;
    NSTextField *mConditionNumberTextField;
    TMAInspectorHorizontalLine *mHorizontalLine;
    NSLayoutConstraint *mBottomSpaceLayoutConstraint;
    TMACustomFormatSheetController *mSheetController;
    unsigned long long mFormatNumber;
    TMACustomFormatNumberTokenDelegate *mNumberTokenDelegate;
    double mSampleNumber;
    NSString *mSampleText;
    int mConditionType;
    NSNumber *mConditionParameter;
    BOOL mInvalidFormat;
}

@property(readonly, nonatomic) NSLayoutConstraint *bottomSpaceLayoutConstraint; // @synthesize bottomSpaceLayoutConstraint=mBottomSpaceLayoutConstraint;
- (BOOL)hasInvalidFormat;
- (void)updateSample;
- (id)conditionParameter;
- (int)conditionType;
- (id)representedNumberFormatWithName:(id)arg1;
- (id)tokenField;
- (BOOL)allowTextFormatting;
- (void)setBottomLineHidden:(BOOL)arg1;
- (void)setConditionNumberText:(id)arg1;
- (void)setSampleText:(id)arg1;
- (void)setSampleNumber:(id)arg1;
- (void)setFormatNumber:(unsigned long long)arg1;
- (void)setConditionParameter:(id)arg1;
- (void)setConditionType:(int)arg1;
- (void)takeConditionParameterFrom:(id)arg1;
- (void)takeConditionTypeFrom:(id)arg1;
- (int)p_conditionTypeFromTag:(long long)arg1;
- (void)p_updateConditionControlState;
- (void)removeFormat:(id)arg1;
- (void)loadView;
- (void)dealloc;
- (id)initWithSheetController:(id)arg1 index:(unsigned long long)arg2;
- (id)init;

@end

