//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXReusableObject-Protocol.h>
#import <PhotosUICore/PXUIViewBasicTile-Protocol.h>

@class NSArray, NSString, PXButtonSpec, UIButton, UIView;
@protocol PXUIButtonTileDelegate;

@interface PXUIButtonTile : NSObject <PXUIViewBasicTile, PXReusableObject>
{
    BOOL _hasScheduledUpdate;
    CDStruct_3c808251 _needsUpdateFlags;
    id <PXUIButtonTileDelegate> _delegate;
    NSString *_title;
    UIView *__view;
    UIButton *__button;
    PXButtonSpec *__spec;
    NSArray *__layoutConstraints;
}

- (void).cxx_destruct;
@property(copy, nonatomic, setter=_setLayoutConstraints:) NSArray *_layoutConstraints; // @synthesize _layoutConstraints=__layoutConstraints;
@property(retain, nonatomic, setter=_setSpec:) PXButtonSpec *_spec; // @synthesize _spec=__spec;
@property(readonly, nonatomic) UIButton *_button; // @synthesize _button=__button;
@property(readonly, nonatomic) UIView *_view; // @synthesize _view=__view;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) __weak id <PXUIButtonTileDelegate> delegate; // @synthesize delegate=_delegate;
- (void)prepareForReuse;
- (void)becomeReusable;
@property(readonly, nonatomic) UIView *view;
- (void)didApplyGeometry:(struct PXTileGeometry)arg1 withUserData:(id)arg2;
- (void)_updateButtonIfNeeded;
- (void)_invalidateButton;
- (void)_updateIfNeeded;
- (void)_setNeedsUpdate;
- (BOOL)_needsUpdate;
- (void)_handleButton:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

