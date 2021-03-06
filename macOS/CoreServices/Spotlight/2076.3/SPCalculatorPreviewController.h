//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Spotlight/SPPreviewController.h>

@class NSArray, NSNumberFormatter, NSTextField, NSView, SPLineView;

@interface SPCalculatorPreviewController : SPPreviewController
{
    NSTextField *_interpretedText;
    NSTextField *_currencyUpdated;
    SPLineView *_line;
    NSView *_spacer1;
    NSView *_spacer2;
    NSNumberFormatter *_formatter;
    NSArray *_slices;
}

+ (id)sharedPreviewController;
- (void).cxx_destruct;
@property(retain) NSArray *slices; // @synthesize slices=_slices;
@property __weak NSNumberFormatter *formatter; // @synthesize formatter=_formatter;
@property __weak NSView *spacer2; // @synthesize spacer2=_spacer2;
@property __weak NSView *spacer1; // @synthesize spacer1=_spacer1;
@property __weak SPLineView *line; // @synthesize line=_line;
@property __weak NSTextField *currencyUpdated; // @synthesize currencyUpdated=_currencyUpdated;
@property __weak NSTextField *interpretedText; // @synthesize interpretedText=_interpretedText;
- (void)setRepresentedObject:(id)arg1;
- (void)awakeFromNib;
- (void)setupForObject:(id)arg1;
- (id)init;

@end

