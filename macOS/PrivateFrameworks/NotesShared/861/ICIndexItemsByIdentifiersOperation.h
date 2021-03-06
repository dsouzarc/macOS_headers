//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <NotesShared/ICIndexItemsOperation.h>

@class NSArray;

@interface ICIndexItemsByIdentifiersOperation : ICIndexItemsOperation
{
    NSArray *_identifiersToIndex;
}

@property(copy, nonatomic) NSArray *identifiersToIndex; // @synthesize identifiersToIndex=_identifiersToIndex;
- (void).cxx_destruct;
- (id)searchableItemIdentifiersToDeleteFromDataSource:(id)arg1;
- (id)objectIDsToIndexFromDataSource:(id)arg1;
- (id)initWithSearchableIndex:(id)arg1 dataSources:(id)arg2;
- (id)initWithSearchableIndex:(id)arg1 dataSources:(id)arg2 identifiersToIndex:(id)arg3;

@end

