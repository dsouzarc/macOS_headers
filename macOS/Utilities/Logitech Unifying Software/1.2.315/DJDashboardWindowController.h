//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DJConnectionWindowController, NSButton, NSOutlineView, NSPanel, NSProgressIndicator, NSTextField, NSTextView, NSTimer, NSView, NSWindow;

@interface DJDashboardWindowController : NSObject
{
    NSWindow *_window;
    NSView *_leftView;
    NSView *_rightView;
    NSView *_outlineViewView;
    NSOutlineView *_outlineView;
    NSView *_noDeviceViewView;
    NSButton *_reportButton;
    NSButton *_closeButton;
    NSView *_unselectedViewView;
    NSView *_receiverViewView;
    NSTextField *_receiverNameText;
    NSTextField *_receiverFirmwareText;
    NSTextField *_receiverPairedText;
    NSButton *_receiverPairButton;
    NSButton *_receiverFirmwareButton;
    _Bool _receiverRecoverButtonShown;
    NSButton *_receiverRecoverButton;
    NSView *_deviceViewView;
    NSTextField *_deviceNameText;
    NSTextField *_deviceStatusText;
    NSTextField *_deviceBatteryText;
    NSTextField *_deviceFirmwareText;
    NSButton *_deviceUnpairButton;
    NSButton *_deviceFirmwareButton;
    NSPanel *_restartPanel;
    NSTextView *_restartTextView;
    NSButton *_restartCancelButton;
    NSTimer *_restartTimer;
    NSTimer *_openConnectionLockTimer;
    NSTimer *_closeConnectionLockTimer;
    NSPanel *_firmwareUpdatePanel;
    NSView *_firmwareUpdateContentView;
    NSButton *_firmwareUpdateOKButton;
    NSButton *_firmwareUpdateCancelButton;
    NSButton *_firmwareUpdateHelpButton;
    NSView *_firmwareUpdateStartView;
    NSView *_firmwareUpdateProgressView;
    NSProgressIndicator *_firmwareUpdateProgressIndicator;
    NSTextField *_firmwareUpdateProgressStatus;
    NSView *_firmwareUpdateSucceededView;
    NSView *_firmwareUpdateFailedView;
    int _firmwareUpdateStage;
    int _stage;
    DJConnectionWindowController *_controller;
}

+ (id)instance;
- (void)_outlineViewSelectionDidRefresh:(id)arg1;
- (void)outlineViewSelectionDidChange:(id)arg1;
- (void)outlineViewSelectionIsChanging:(id)arg1;
- (BOOL)outlineView:(id)arg1 shouldEditTableColumn:(id)arg2 item:(id)arg3;
- (void)__outlineView:(id)arg1 willDisplayOutlineCell:(id)arg2 forTableColumn:(id)arg3 item:(id)arg4;
- (void)outlineView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 item:(id)arg4;
- (id)outlineView:(id)arg1 objectValueForTableColumn:(id)arg2 byItem:(id)arg3;
- (BOOL)outlineView:(id)arg1 isItemExpandable:(id)arg2;
- (BOOL)outlineView:(id)arg1 isGroupItem:(id)arg2;
- (id)outlineView:(id)arg1 child:(int)arg2 ofItem:(id)arg3;
- (int)outlineView:(id)arg1 numberOfChildrenOfItem:(id)arg2;
- (void)windowWillClose:(id)arg1;
- (void)deviceTreeDidRefresh:(id)arg1;
- (void)deviceTreeDidUpdate:(id)arg1;
- (void)deviceTreeDidChange:(id)arg1;
- (void)wirelessDeviceArrival:(id)arg1;
- (void)restartPanelDidEnd:(id)arg1 returnCode:(int)arg2 contextInfo:(void *)arg3;
- (void)restartTimeout:(id)arg1;
- (void)restartPanelCancelButton:(id)arg1;
- (void)connectionLockDidClose:(id)arg1;
- (void)closeConnectionLock;
- (void)closeConnectionLockTimed:(id)arg1;
- (void)connectionLockDidOpen:(id)arg1;
- (void)openConnectionLockTimed:(id)arg1;
- (void)scheduleOpenConnectionLock;
- (void)_showRestartPanel;
- (void)_displayDeviceInfo:(id)arg1;
- (void)_displayReceiverInfo:(id)arg1;
- (void)deviceFirmwareUpdate:(id)arg1;
- (void)deviceDisconnect:(id)arg1;
- (void)receiverRecover:(id)arg1;
- (void)receiverFirmwareUpdate:(id)arg1;
- (void)receiverConnect:(id)arg1;
- (void)closeButton:(id)arg1;
- (void)_saveSystemReport:(id)arg1;
- (void)savePanelDidEnd:(id)arg1 returnCode:(int)arg2 contextInfo:(void *)arg3;
- (void)reportButton:(id)arg1;
- (void)setController:(id)arg1;
- (BOOL)window:(id)arg1 shouldPopUpDocumentPathMenu:(id)arg2;
- (void)hideWindow:(id)arg1;
- (void)showWindow:(id)arg1;
- (void)showHideWindow:(id)arg1;
- (_Bool)isVisible;
- (void)finalize;
- (void)dealloc;
- (void)awakeFromNib;
- (id)init;

@end

