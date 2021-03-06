//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class TSTTableEditor;

@interface TSTTableCategoriesEditorHelper : NSObject
{
    TSTTableEditor *_tableEditor;
}

@property(readonly, nonatomic) __weak TSTTableEditor *tableEditor; // @synthesize tableEditor=_tableEditor;
- (void).cxx_destruct;
- (void)showCategoryColumn:(id)arg1 columnIndex:(unsigned short)arg2;
- (void)hideCategoryColumn:(id)arg1 columnIndex:(unsigned short)arg2;
- (void)changeGroupingType:(id)arg1 ruleIndex:(unsigned long long)arg2 groupingType:(int)arg3;
- (void)replaceCategoryColumn:(id)arg1 atRuleIndex:(unsigned long long)arg2 newColumnIndex:(unsigned short)arg3 newGroupingType:(int)arg4;
- (void)moveCategory:(id)arg1 fromRuleIndex:(unsigned long long)arg2 toNewIndex:(unsigned long long)arg3;
- (void)addCategoryToInfo:(id)arg1 columnIndex:(unsigned short)arg2 groupingType:(int)arg3 atRuleIndex:(unsigned long long)arg4;
- (void)dragColumnsOrRows:(long long)arg1 withinTableRep:(id)arg2 sourceCellRange:(struct TSUCellRect)arg3 destIndex:(unsigned int)arg4;
- (id)initWithTableEditor:(id)arg1;

@end

