//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class GKDashboardPlayerPhotoView, GKPlayer, NSUICollectionViewCell;

@interface GKDashboardPlayerShadowView : NSView
{
    NSUICollectionViewCell *_parentCell;
    GKDashboardPlayerPhotoView *_photoView;
}

@property(nonatomic) GKDashboardPlayerPhotoView *photoView; // @synthesize photoView=_photoView;
@property(nonatomic) NSUICollectionViewCell *parentCell; // @synthesize parentCell=_parentCell;
- (void)layoutSubviews;
@property(readonly, nonatomic) NSView *parentView; // @dynamic parentView;
@property(retain, nonatomic) GKPlayer *player; // @dynamic player;
- (void)setupPhoto;
- (void)awakeFromNib;
- (id)initWithFrame:(struct CGRect)arg1;

@end

