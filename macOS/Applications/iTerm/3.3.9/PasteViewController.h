//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

@class NSProgressIndicator, NSTextField, PasteContext;

@interface PasteViewController : NSViewController
{
    NSTextField *_label;
    NSProgressIndicator *progressIndicator_;
    int totalLength_;
    PasteContext *pasteContext_;
    BOOL _mini;
    int remainingLength_;
    id <PasteViewControllerDelegate> delegate_;
}

@property(readonly, nonatomic) BOOL mini; // @synthesize mini=_mini;
@property(nonatomic) int remainingLength; // @synthesize remainingLength=remainingLength_;
@property(nonatomic) id <PasteViewControllerDelegate> delegate; // @synthesize delegate=delegate_;
- (void)themeDidChange:(id)arg1;
- (void)closeWithCompletion:(CDUnknownBlockType)arg1;
- (void)updateFrame;
- (void)cancel:(id)arg1;
- (void)updateLabelColor;
- (void)viewDidAppear;
- (void)viewDidLoad;
- (void)awakeFromNib;
- (void)dealloc;
- (id)initWithContext:(id)arg1 length:(int)arg2 mini:(BOOL)arg3;

@end

