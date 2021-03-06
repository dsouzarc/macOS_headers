//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CPFormatInspector.h"

@interface CPNumberFormatInspector : CPFormatInspector
{
    id mDigits;
    id mDigitStepper;
    id mRemoveTrailingZeros;
    id mNotation;
    id mNotationWhen;
    id mNotationFrom;
    id mNotationFromTab;
    id mSuperscriptExponent;
    id mShowAsPower;
    id mSample;
}

+ (id)sharedInspector;
+ (id)inspectorDidChangeNotification;
+ (Class)wellClass;
- (void)update:(id)arg1;
- (void)refresh;
- (void)awakeFromNib;
- (id)windowNibName;
- (id)title;
- (void)setAlignment:(long long)arg1;
- (void)updateFont;
- (id)numberFormat;

@end

