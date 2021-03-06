//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "CalPreferencesDelegatesProgressIndicator-Protocol.h"
#import "NSTabViewDelegate-Protocol.h"
#import "NSTableViewDataSource-Protocol.h"
#import "NSTableViewDelegate-Protocol.h"
#import "NSWindowDelegate-Protocol.h"

@class ACAccount, CALDelegateTextView, CALPreferencesDelegatesController, NSButton, NSMutableArray, NSPanel, NSProgressIndicator, NSScrollView, NSString, NSTabView, NSTableView, NSTextField;

@interface CalPreferencesGrantedDelegatesController : NSObject <NSTableViewDataSource, NSTableViewDelegate, NSTabViewDelegate, NSWindowDelegate, CalPreferencesDelegatesProgressIndicator>
{
    NSTabView *_accountsTabView;
    ACAccount *_accountBeingEdited;
    NSMutableArray *_grantedDelegates;
    long long _grantedDelegateRowBeingEdited;
    BOOL _isInSheet;
    NSPanel *_grantedDelegatesSheet;
    NSScrollView *_grantedDelegatesScrollView;
    NSButton *_grantedDelegatesAddButton;
    NSButton *_grantedDelegatesRemoveButton;
    NSProgressIndicator *_grantedDelegatesProgressIndicator;
    NSTextField *_progressStatusLabel;
    NSTableView *_grantedDelegatesTableView;
    NSTableView *_calDAVDelegatesTableView;
    NSTableView *_exchangeDelegatesTableView;
    NSTabView *_tabView;
    CALPreferencesDelegatesController *_delegatesController;
    CALDelegateTextView *_delegateTextView;
}

- (void).cxx_destruct;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (void)tableViewSelectionDidChange:(id)arg1;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)tableView:(id)arg1 setObjectValue:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (BOOL)tableView:(id)arg1 shouldSelectTableColumn:(id)arg2;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (int)_delegateUserPermissionForPopupValue:(long long)arg1;
- (id)_popupValueForDelegateUserPermission:(int)arg1;
- (void)_configureTableView:(id)arg1;
- (void)updateGrantedDelegatesProgessIndicator:(BOOL)arg1 message:(id)arg2;
- (void)updateGrantedDelegatesProgessIndicator:(BOOL)arg1;
- (id)windowWillReturnFieldEditor:(id)arg1 toObject:(id)arg2;
- (void)controlTextDidEndEditing:(id)arg1;
- (void)controlTextDidChange:(id)arg1;
- (void)addGrantedDelegatesFromCompletion;
- (void)toggleAllowWriteForDelegate:(id)arg1;
- (void)addGrantedDelegateToAccount:(id)arg1;
- (void)_finishGrantedDelegatesSheet;
- (void)finishGrantedDelegatesSheet:(id)arg1;
- (void)removeDelegateFromGrantedList:(id)arg1;
- (void)reloadTableViewAndSelectRow:(long long)arg1;
- (void)addNewDelegateToGrantedList:(id)arg1;
- (BOOL)grantedDelegateIsInvalid;
- (void)alertAddingYourselfAsDelegate;
- (void)alertInvalidGrantedDelegate:(id)arg1;
- (void)editListOfGrantedDelegates:(id)arg1;
- (void)queryPrincipalForGrantedDelegatesList;
- (void)updateDelegatesProgessIndicator:(BOOL)arg1 message:(id)arg2;
- (void)setAccountBeingEdited:(id)arg1;
- (void)dealloc;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

