//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class NSButton, NSImage, NSString, PDDeviceStatusView;

@interface PDBarButtonItem : NSView
{
    struct QPointer<CVmWrap> _vm;
    BOOL _activeIO;
    BOOL _connected;
    NSButton *_button;
    NSString *_itemToolTip;
    long long _dropType;
    NSImage *_image;
    PDDeviceStatusView *_connectionStatusView;
    PDDeviceStatusView *_ioStatusView;
}

@property(nonatomic) __weak PDDeviceStatusView *ioStatusView; // @synthesize ioStatusView=_ioStatusView;
@property(nonatomic) __weak PDDeviceStatusView *connectionStatusView; // @synthesize connectionStatusView=_connectionStatusView;
@property(retain, nonatomic) NSImage *image; // @synthesize image=_image;
@property(nonatomic) long long dropType; // @synthesize dropType=_dropType;
@property(nonatomic) BOOL connected; // @synthesize connected=_connected;
@property(nonatomic) BOOL activeIO; // @synthesize activeIO=_activeIO;
@property(copy, nonatomic) NSString *itemToolTip; // @synthesize itemToolTip=_itemToolTip;
@property(nonatomic) __weak NSButton *button; // @synthesize button=_button;
- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)isDropFileAcceptable:(id)arg1;
- (BOOL)isFolder:(id)arg1;
- (BOOL)isCDImage:(id)arg1;
- (BOOL)isFloppyImage:(id)arg1;
- (id)filePathForInfo:(id)arg1;
- (unsigned long long)dragOperationForInfo:(id)arg1;
- (BOOL)performDragOperation:(id)arg1;
- (unsigned long long)draggingUpdated:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (BOOL)performDropPath:(id)arg1;
- (struct QMenu *)popupMenu:(char *)arg1;
- (void)onButtonClicked;
- (void)viewDidMoveToWindow;
- (void)updateImage;
- (void)setupDnDView;
- (void)setupIOStatusView;
- (void)setupConnectionStatusView;
- (void)setupButton;
- (void)setup;
- (void)reset;
- (void)setVm:(struct CVmWrap *)arg1;
- (void)dealloc;
- (id)initWithVm:(struct CVmWrap *)arg1;

@end

