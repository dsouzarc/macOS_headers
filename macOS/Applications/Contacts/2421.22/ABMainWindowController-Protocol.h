//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class ABAddressBook, ABCommandExecutor, NSArray, NSString, NSUndoManager, NSWindow;
@protocol ABApplicationScriptingModel, ABImporterDelegate, ABPersonMergingControllerDelegate, ABTimeMachineWindowController, ABUserInterfaceAction;

@protocol ABMainWindowController <NSObject>
@property BOOL readOnlyOverride;
- (id <ABTimeMachineWindowController>)timeMachineWindowController;
- (void)invalidate;
- (void)setAccounts:(NSArray *)arg1;
- (NSString *)autosaveName;
- (void)setAutosaveName:(NSString *)arg1;
- (id <ABApplicationScriptingModel>)applicationScriptingModel;
- (id <ABPersonMergingControllerDelegate>)mergeDelegate;
- (id <ABImporterDelegate>)importerDelegate;
- (id <ABUserInterfaceAction>)importAction;
- (NSUndoManager *)undoManager;
- (ABAddressBook *)aggregateAddressBook;
- (void)showWindowDisplayingRecordWithUniqueId:(NSString *)arg1 edit:(BOOL)arg2;
- (void)selectRecordWithUniqueId:(NSString *)arg1 edit:(BOOL)arg2;
- (void)switchToAllContactsIfSelectedGroupIsReadOnly;
- (void)ensureCardViewIsVisible;
- (void)ensureGroupListIsVisibleWithCompletionHandler:(void (^)(void))arg1;
- (id <ABUserInterfaceAction>)shareMyCardAction;
- (ABCommandExecutor *)commandExecutor;
- (void)postApearanceDidChangeNotification;
- (void)showWindow:(id)arg1;
- (NSWindow *)window;
@end

