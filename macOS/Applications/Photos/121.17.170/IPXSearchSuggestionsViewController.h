//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import "IPXSearchSuggestionsTableViewDelegate-Protocol.h"
#import "NSTableViewDataSource-Protocol.h"
#import "NSTableViewDelegate-Protocol.h"
#import "PXSearchResultsLayoutDataSource-Protocol.h"

@class IPXSearchSuggestionsTableView, IPXSearchSuggestionsTableViewFooterView, NSLayoutConstraint, NSString, PXSearchResultsSectionedDataSourceManager, PXSearchResultsViewModel;
@protocol IPXSearchSuggestionsSelectionDelegate;

__attribute__((visibility("hidden")))
@interface IPXSearchSuggestionsViewController : NSViewController <NSTableViewDelegate, NSTableViewDataSource, IPXSearchSuggestionsTableViewDelegate, PXSearchResultsLayoutDataSource>
{
    id <IPXSearchSuggestionsSelectionDelegate> _delegate;
    IPXSearchSuggestionsTableView *_tableView;
    PXSearchResultsViewModel *_viewModel;
    PXSearchResultsSectionedDataSourceManager *_dataSourceManager;
    NSLayoutConstraint *_footerViewHeightConstraint;
    IPXSearchSuggestionsTableViewFooterView *_footerView;
}

@property(retain, nonatomic) IPXSearchSuggestionsTableViewFooterView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) NSLayoutConstraint *footerViewHeightConstraint; // @synthesize footerViewHeightConstraint=_footerViewHeightConstraint;
@property(retain, nonatomic) PXSearchResultsSectionedDataSourceManager *dataSourceManager; // @synthesize dataSourceManager=_dataSourceManager;
@property(retain, nonatomic) PXSearchResultsViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) IPXSearchSuggestionsTableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak id <IPXSearchSuggestionsSelectionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (struct CGSize)imageViewSize;
- (unsigned long long)maximumNumberWordEmbeddingRows;
- (BOOL)_tableRowIsValid:(long long)arg1;
- (BOOL)_rowAllowsUserInteraction:(long long)arg1;
- (void)searchSuggestionsTableView:(id)arg1 didUnHighlightRow:(long long)arg2;
- (void)searchSuggestionsTableView:(id)arg1 didHighlightRow:(long long)arg2;
- (BOOL)searchSuggestionsTableView:(id)arg1 shouldHighlightRow:(long long)arg2;
- (void)searchSuggestionsTableView:(id)arg1 didSelectRow:(long long)arg2;
- (BOOL)tableView:(id)arg1 shouldSelectRow:(long long)arg2;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (double)_footerViewHeightConstant;
- (long long)_rowCount;
- (BOOL)hasDisplayableSuggestions;
- (double)searchSuggestionsTotalTableViewContentHeight;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)reloadData;
- (void)_setupView;
- (void)closeWindow:(id)arg1;
- (void)viewWillAppear;
- (void)viewWillDisappear;
- (void)loadView;
- (id)initWithSectionedDataSourceManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

