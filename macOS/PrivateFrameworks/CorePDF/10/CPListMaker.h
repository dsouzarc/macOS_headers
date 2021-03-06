//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CPDisposable.h"

@class CPLayoutArea, CPList, NSArray;

__attribute__((visibility("hidden")))
@interface CPListMaker : NSObject <CPDisposable>
{
    CPLayoutArea *area;
    NSArray *spacers;
    unsigned int textLineCount;
    id *textLines;
    CPList *list;
}

+ (void)makeListsInPage:(id)arg1;
+ (void)makeListsInChunk:(id)arg1;
+ (void)makeListsInLayoutArea:(id)arg1;
- (void)makeLists;
- (void)makeListsInColumn:(id)arg1;
- (BOOL)makeListFrom:(struct CPListInfo *)arg1;
- (void)makeListItemFrom:(struct CPListInfo *)arg1 stopAt:(unsigned int)arg2;
- (void)fetchTextLinesInColumn:(id)arg1;
- (void)fetchTextLine:(id)arg1;
- (void)dealloc;
- (void)finalize;
- (void)dispose;
- (id)initWithLayoutArea:(id)arg1;

@end

