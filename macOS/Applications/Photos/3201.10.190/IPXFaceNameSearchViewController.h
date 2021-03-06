//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "IPXSearchViewController.h"

#import "IPXSearchSuggester-Protocol.h"
#import "IPXSearchSuggestionViewProvider-Protocol.h"

@class IPXSearchInput, NSMapTable, NSObject, NSSet, NSString, RDDatabase;
@protocol OS_dispatch_queue;

@interface IPXFaceNameSearchViewController : IPXSearchViewController <IPXSearchSuggester, IPXSearchSuggestionViewProvider>
{
    RDDatabase *_database;
    NSSet *_allNamedPeople;
    IPXSearchInput *_currentInput;
    IPXSearchInput *_pendingInput;
    NSMapTable *_cancellationTokensForCellsWithPendingUpdates;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _wantsInitialResults;
}

+ (id)genericThumbnail;
@property(readonly, nonatomic) BOOL wantsInitialResults; // @synthesize wantsInitialResults=_wantsInitialResults;
- (void).cxx_destruct;
- (void)updateResultView:(id)arg1 withSuggestion:(id)arg2;
- (double)tableCellViewHeightForSuggestion:(id)arg1;
- (Class)tableCellViewClassForSuggestion:(id)arg1;
- (void)setInput:(id)arg1;
- (BOOL)searchFieldCancelSearch:(id)arg1;
- (void)searchFieldStringHasChanged:(id)arg1;
- (void)_startNextSearchShouldMatch:(BOOL)arg1;
- (void)_displayAllResults;
- (void)dealloc;
- (void)viewWillAppear;
- (id)initWithDatabase:(id)arg1 wantsInitialResults:(BOOL)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

