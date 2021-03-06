//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Mondrian/MOMediaViewSupplementary.h>

@class NSButton, NSString, NSTextField;
@protocol IPXEditorialSectionHeaderViewDelegate;

__attribute__((visibility("hidden")))
@interface IPXEditorialSectionHeaderView : MOMediaViewSupplementary
{
    NSString *_localizedCaptionToolTip;
    NSString *_localizedDisclosureToolTip;
    id <IPXEditorialSectionHeaderViewDelegate> _delegate;
    NSTextField *_titleLabel;
    NSButton *_captionButton;
    NSButton *_disclosureButton;
}

+ (BOOL)blocksDefaultLayoutBehavior;
@property(readonly, nonatomic) NSButton *disclosureButton; // @synthesize disclosureButton=_disclosureButton;
@property(readonly, nonatomic) NSButton *captionButton; // @synthesize captionButton=_captionButton;
@property(readonly, nonatomic) NSTextField *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak id <IPXEditorialSectionHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *localizedDisclosureToolTip; // @synthesize localizedDisclosureToolTip=_localizedDisclosureToolTip;
@property(retain, nonatomic) NSString *localizedCaptionToolTip; // @synthesize localizedCaptionToolTip=_localizedCaptionToolTip;
- (void).cxx_destruct;
- (id)accessibilityLabel;
- (void)layout;
- (void)updateWithMediaSection:(id)arg1;
- (void)captionAction:(id)arg1;
- (void)disclosureAction:(id)arg1;
@property(retain, nonatomic) NSString *localizedDisclosureTitle;
@property(retain, nonatomic) NSString *localizedCaptionTitle;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

