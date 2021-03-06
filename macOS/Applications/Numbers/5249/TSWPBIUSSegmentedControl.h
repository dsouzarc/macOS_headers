//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSSegmentedControl.h>

@class NSIndexSet, NSNumber;

@interface TSWPBIUSSegmentedControl : NSSegmentedControl
{
    int _segmentGroupIndex;
    unsigned long long _totalAvailableCellWidth;
    id _advancedInspectorTarget;
    SEL _advancedInspectorAction;
    int _characterFormattingOptions;
    NSIndexSet *_characterFormats;
}

@property(copy, nonatomic) NSIndexSet *characterFormats; // @synthesize characterFormats=_characterFormats;
@property(nonatomic) int characterFormattingOptions; // @synthesize characterFormattingOptions=_characterFormattingOptions;
- (void).cxx_destruct;
- (void)p_setCellsForCharacterFormattingOptions:(int)arg1;
- (void)p_deselectSegmentOptions:(id)arg1;
- (int)p_segmentOptionForSegmentIndex:(unsigned long long)arg1;
- (unsigned long long)p_segmentIndexForSegmentOption:(int)arg1;
- (BOOL)p_testingStrikethruSegment:(int)arg1;
- (void)p_setTooltips;
- (void)p_attachAccessibilityAttributes;
- (BOOL)p_supportAdvancedPopup;
- (void)p_recordAvailableContentWidth;
- (BOOL)sendAction:(SEL)arg1 to:(id)arg2;
- (void)setNilValueForKey:(id)arg1;
@property(nonatomic) BOOL strikethru;
@property(nonatomic) BOOL italic;
@property(nonatomic) BOOL bold;
@property(nonatomic) NSNumber *underline;
- (void)setEmphasisMarks:(id)arg1;
- (id)emphasisMarks;
- (void)setAdvancedInspectorTarget:(id)arg1 action:(SEL)arg2;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

