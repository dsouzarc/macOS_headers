//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSCHMacTableFloatingCellsView.h"

@class TSCHMacTableHeaderCell;

@interface TSCHMacTableFloatingHeaderView : TSCHMacTableFloatingCellsView
{
    TSCHMacTableHeaderCell *mHeaderCell;
}

@property(readonly, nonatomic) TSCHMacTableHeaderCell *headerCell; // @synthesize headerCell=mHeaderCell;
- (void).cxx_destruct;
- (void)returnCells;
- (void)adjustCellsForRow:(long long)arg1 column:(long long)arg2;
- (id)previousHeader:(id)arg1;
- (id)p_shufflePrevious:(id)arg1;
- (id)nextHeader:(id)arg1;
- (id)p_shuffleNext:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 tableView:(id)arg2 cells:(id)arg3 headerCell:(id)arg4 cellCount:(unsigned long long)arg5 moveColumns:(BOOL)arg6;

@end

