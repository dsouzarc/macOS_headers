//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SDNode.h"

@class NSMutableArray;

@interface SDWPStorage : SDNode
{
    NSMutableArray *mTextInsertionListeners;
}

+ (unsigned long long)childDescriptionCount;
+ (const CDStruct_183601bc **)childDescriptionArray;
+ (struct __CFSet **)childDescriptionSetPointer;
+ (struct __CFSet *)childDescriptionSet;
+ (void)initialize;
+ (const char *)idPrefix;
- (void)notifyTextInsertionListenersOfInsertion:(struct _NSRange)arg1;
- (BOOL)hasTextInsertionListener;
- (void)addTextInsertionListener:(id)arg1;
- (void)removeTextInsertionListener:(id)arg1;
- (void)setExcludeCharts:(BOOL)arg1;
- (BOOL)excludeCharts;
- (void)setExcludeTables:(BOOL)arg1;
- (BOOL)excludeTables;
- (void)setExcludeShapes:(BOOL)arg1;
- (BOOL)excludeShapes;
- (void)setKind:(int)arg1;
- (int)kind;
- (BOOL)isEditHistoryListOverridden;
- (id)overrideEditHistoryList;
- (id)editHistoryList;
- (void)setStyleSheet:(id)arg1;
- (id)styleSheet;
- (void)finalizeXml;
- (void)createTree;
- (void)dealloc;
- (id)initWithTree:(struct _xmlNode *)arg1 root:(id)arg2;
- (id)initTreeAt:(struct _xmlNode *)arg1 root:(id)arg2;

@end

