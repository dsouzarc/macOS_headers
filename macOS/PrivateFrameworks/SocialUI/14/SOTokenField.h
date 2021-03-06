//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTokenField.h"

@class NSTrackingArea;

@interface SOTokenField : NSTokenField
{
    NSTrackingArea *_tokenFieldTrackingArea;
    BOOL _needsRefresh;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL needsRefresh; // @synthesize needsRefresh=_needsRefresh;
- (BOOL)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)mouseExited:(id)arg1;
- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_commonSOTokenFieldInit;
- (void)tokenFieldNeedsRefresh;

@end

