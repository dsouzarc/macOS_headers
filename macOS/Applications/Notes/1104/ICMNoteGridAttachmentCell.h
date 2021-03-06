//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSCollectionViewItem.h>

@class ICAttachment, ICMImageCollectionItemView, ICNote, ICSearchResult;
@protocol ICMNoteGridCellDelegate;

@interface ICMNoteGridAttachmentCell : NSCollectionViewItem
{
    ICAttachment *_attachment;
    id <ICMNoteGridCellDelegate> _delegate;
    ICSearchResult *_searchResult;
    ICMImageCollectionItemView *_brickView;
}

+ (id)identifier;
+ (struct CGSize)defaultSize;
@property(retain, nonatomic) ICMImageCollectionItemView *brickView; // @synthesize brickView=_brickView;
@property(retain, nonatomic) ICSearchResult *searchResult; // @synthesize searchResult=_searchResult;
@property(nonatomic) __weak id <ICMNoteGridCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) ICAttachment *attachment; // @synthesize attachment=_attachment;
- (void).cxx_destruct;
- (void)showContextualMenuWithEvent:(id)arg1;
@property(readonly, nonatomic) ICNote *note;
- (void)rightMouseDown:(id)arg1;
- (void)mouseDown:(id)arg1;
- (id)menu;
- (void)setSelected:(BOOL)arg1;
- (void)setSearchResult:(id)arg1 delegate:(id)arg2;
- (void)viewDidLoad;

@end

