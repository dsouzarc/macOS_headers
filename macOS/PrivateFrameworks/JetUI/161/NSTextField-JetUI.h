//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTextField.h>

@class NSFont;

@interface NSTextField (JetUI)
- (struct JUMeasurements)measurementsWithFitting:(struct CGSize)arg1 in:(id)arg2;
@property(nonatomic, readonly) long long jet_textLength;
@property(nonatomic, readonly) struct NSEdgeInsets jet_languageAwareOutsets;
@property(nonatomic, readonly) BOOL jet_isTextExtraTall;
@property(nonatomic, readonly) BOOL hasContent;
@property(nonatomic, retain) NSFont *font;
@property(nonatomic) long long jet_numberOfLines;
@end

