//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Safari/SidebarTableCellView.h>

@class NSArray, NSImageView, NSString, NSTextField;

__attribute__((visibility("hidden")))
@interface ReadingListTableCellView : SidebarTableCellView
{
    NSTextField *_titleTextField;
    NSTextField *_previewTextField;
    NSTextField *_domainTextField;
    NSImageView *_thumbnailImageView;
    NSArray *_extraConstraintsWhenShowingThumbnail;
    NSArray *_extraConstraintsWhenNotShowingThumbnail;
    NSArray *_constraints;
}

+ (double)fixedHeightOfRow;
- (void).cxx_destruct;
- (id)_labelTextFieldOfClass:(Class)arg1;
- (id)_readingListItem;
- (void)_setUpConstraints;
- (void)_setUpSubviews;
- (void)_updateCloseButtonImages;
@property(readonly, nonatomic) NSString *itemPreviewTextString;
@property(readonly, nonatomic) NSString *itemDomainString;
@property(readonly, nonatomic) NSString *itemTitleString;
- (void)updateConstraints;
- (void)setObjectValue:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

