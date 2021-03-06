//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTableRowView.h>

@class NSBox, NSLayoutConstraint, NSTableView;

@interface RichTableRowView : NSTableRowView
{
    long long _rowStyle;
    BOOL _hideSeparator;
    NSTableView *_tableView;
    NSBox *_rowSeparator;
    NSLayoutConstraint *_separatorPadding;
}

@property(retain, nonatomic) NSLayoutConstraint *separatorPadding; // @synthesize separatorPadding=_separatorPadding;
@property(retain, nonatomic) NSBox *rowSeparator; // @synthesize rowSeparator=_rowSeparator;
@property(nonatomic) BOOL hideSeparator; // @synthesize hideSeparator=_hideSeparator;
@property(nonatomic) long long rowStyle; // @synthesize rowStyle=_rowStyle;
@property(nonatomic) __weak NSTableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)setBackgroundColor:(id)arg1;
- (void)setSelected:(BOOL)arg1;
- (void)updateLayer;
- (void)_updateSeparators;
- (id)_nextRow;
- (id)_previousRow;
- (BOOL)wantsUpdateLayer;
- (void)_richTableRowViewCommonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

