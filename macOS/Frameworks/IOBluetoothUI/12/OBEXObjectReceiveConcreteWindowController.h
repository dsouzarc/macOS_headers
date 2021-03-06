//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

@class IOBluetoothDevice, IOBluetoothOBEXSession, IOBluetoothTransferProgressUI, NSButton, NSImageView, NSMutableArray, NSProgressIndicator, NSString, NSTextField, OBEXFileTransferServices;

@interface OBEXObjectReceiveConcreteWindowController : NSWindowController
{
    NSTextField *mFileStatusField;
    NSTextField *mFileTransferredField;
    NSTextField *mFileRemainingField;
    NSProgressIndicator *mFileProgressIndicator;
    NSButton *mFileAbortButton;
    NSImageView *mFileIconView;
    id mDelegate;
    NSMutableArray *mRemoteFileNames;
    NSString *mDestinationPath;
    int mCurrentFileIndex;
    OBEXFileTransferServices *mFTPModule;
    IOBluetoothOBEXSession *mOBEXSession;
    IOBluetoothDevice *mTargetDevice;
    BOOL mTargetIsAMac;
    BOOL mIsVCardTransfer;
    BOOL mIsSendingPanel;
    BOOL mDoesMultipleTransfers;
    IOBluetoothTransferProgressUI *mTransferProgress;
    unsigned int mFirstPacketSize;
    unsigned short mMaxPacketLength;
    BOOL mIsFirstPutPacket;
    BOOL mUserAborted;
    BOOL mErrorDialogIsUp;
    int mPanelRunState;
    NSString *mWindowTitle;
    struct _NSModalSession *mModalSession;
}

- (id)locString:(id)arg1;
- (id)windowTitleForDocumentDisplayName:(id)arg1;
- (void)windowDidLoad;
- (void)fileTransferServicesCopyRemoteFileComplete:(id)arg1 error:(int)arg2;
- (void)fileTransferServicesCopyRemoteFileProgress:(id)arg1 transferProgress:(id)arg2;
- (void)fileTransferServicesDisconnectionComplete:(id)arg1 error:(int)arg2;
- (void)fileTransferServicesConnectionComplete:(id)arg1 error:(int)arg2;
- (void)fileTransferServicesAbortComplete:(id)arg1 error:(int)arg2;
- (int)closeOBEXConnection;
- (int)openOBEXConnection;
- (int)getFileFromRemoteDevice;
- (id)currentFilePathAndName;
- (id)currentFileName;
- (void)adjustUIForTransferOperationConclusionWithError:(int)arg1;
- (void)adjustUIForTransferOperationConclusion:(id)arg1;
- (void)closePanel;
- (void)errorPanelButtonClick:(id)arg1;
- (void)stopTransfer:(id)arg1;
- (id)getDevice;
- (void)setIconImage:(id)arg1;
- (void)setIconForType:(unsigned int)arg1;
- (void)setIconForCurrentFile;
- (id)getTitle;
- (void)setTitle:(id)arg1;
- (void)stop;
- (int)beginSheetModalForWindow:(id)arg1 modalDelegate:(id)arg2 didEndSelector:(SEL)arg3 contextInfo:(void *)arg4;
- (void)runModal;
- (void)runPanel;
- (void)closeUpShop;
- (id)windowNibName;
- (void)awakeFromNib;
- (void)finalize;
- (void)dealloc;
- (id)initObjectReceiveWithBluetoothDevice:(id)arg1 defaultVCardName:(id)arg2 destination:(id)arg3 delegate:(id)arg4;
- (id)initObjectReceiveWithBluetoothDevice:(id)arg1 targetFiles:(id)arg2 destination:(id)arg3 delegate:(id)arg4;

@end

