//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class NSButton, NSMutableArray, NSProgressIndicator, NSStackView, NSTextField;

@interface AACManagementOutputStreamInfoViewController : NSViewController
{
    NSMutableArray *_connectionStacks;
    NSMutableArray *_connectionConstraints;
    NSStackView *_outputStreamNameStack;
    NSProgressIndicator *_outputStreamNameProgress;
    NSStackView *_streamFormatStack;
    NSProgressIndicator *_streamFormatProgress;
    NSStackView *_mainStack;
    NSStackView *_connectionsStack;
    NSButton *_connectionsDisclosureButton;
    NSTextField *_constraintLabel;
}

@property(nonatomic) __weak NSTextField *constraintLabel; // @synthesize constraintLabel=_constraintLabel;
@property(nonatomic) __weak NSButton *connectionsDisclosureButton; // @synthesize connectionsDisclosureButton=_connectionsDisclosureButton;
@property(nonatomic) __weak NSStackView *connectionsStack; // @synthesize connectionsStack=_connectionsStack;
@property(nonatomic) __weak NSStackView *mainStack; // @synthesize mainStack=_mainStack;
@property(nonatomic) __weak NSProgressIndicator *streamFormatProgress; // @synthesize streamFormatProgress=_streamFormatProgress;
@property(nonatomic) __weak NSStackView *streamFormatStack; // @synthesize streamFormatStack=_streamFormatStack;
@property(nonatomic) __weak NSProgressIndicator *outputStreamNameProgress; // @synthesize outputStreamNameProgress=_outputStreamNameProgress;
@property(nonatomic) __weak NSStackView *outputStreamNameStack; // @synthesize outputStreamNameStack=_outputStreamNameStack;
- (void).cxx_destruct;
- (void)dealloc;
- (void)refreshConnections:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)discloseConnections:(id)arg1;
- (void)setRepresentedObject:(id)arg1;
- (void)updateConnectionsViews;
- (void)changeStreamFormat:(id)arg1;
- (void)changeOutputStreamName:(id)arg1;
- (void)viewDidLoad;

@end

