//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "IPXModel.h"

@class IPXViewerItemModel, IPXViewerSelection, NSArray, NSMapTable;

@interface IPXViewerModel : IPXModel
{
    NSMapTable *_itemsByVersion;
    IPXViewerSelection *_selection;
    struct PFMulticaster *_multicaster;
    IPXViewerSelection *_attemptedSelectedItems;
    BOOL _isZoomed;
    BOOL _zoomAnimationInProgress;
    BOOL _modalEditingState;
    NSArray *_candidateVersions;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) BOOL modalEditingState; // @synthesize modalEditingState=_modalEditingState;
@property BOOL zoomAnimationInProgress; // @synthesize zoomAnimationInProgress=_zoomAnimationInProgress;
@property(readonly) BOOL isZoomed; // @synthesize isZoomed=_isZoomed;
@property(retain, nonatomic) NSArray *candidateVersions; // @synthesize candidateVersions=_candidateVersions;
- (void).cxx_destruct;
- (id)itemForVersion:(id)arg1;
@property(readonly, nonatomic) IPXViewerItemModel *nextItem;
@property(readonly, nonatomic) IPXViewerItemModel *previousItem;
- (id)_itemForVersion:(id)arg1;
- (void)_handleProminentVersionsChangeFrom:(id)arg1 to:(id)arg2;
- (void)_handleDisplayedVersionsChangeFrom:(id)arg1 to:(id)arg2;
- (void)_selectVersionAtOffset:(long long)arg1 relativeToVersion:(id)arg2 addToSelection:(BOOL)arg3;
- (void)_selectVersionAtOffset:(long long)arg1 addToSelection:(BOOL)arg2;
- (void)selectAddPrevious;
- (void)selectAddNext;
- (void)selectPrevious;
- (void)selectNext;
- (BOOL)_canSelectVersionAtOffset:(long long)arg1 relativeToVersion:(id)arg2;
- (BOOL)_canSelectVersionAtOffset:(long long)arg1;
- (BOOL)canSelectPrevious;
- (BOOL)canSelectNext;
@property(readonly, nonatomic) id nextProminentVersion;
@property(readonly, nonatomic) id previousProminentVersion;
@property(retain, nonatomic) IPXViewerItemModel *primaryItem; // @dynamic primaryItem;
@property(retain, nonatomic) id prominentVersion; // @dynamic prominentVersion;
@property(retain, nonatomic) IPXViewerSelection *selectedItems; // @dynamic selectedItems;
@property(retain, nonatomic) NSArray *items; // @dynamic items;
@property(retain, nonatomic) IPXViewerSelection *selectedVersions; // @dynamic selectedVersions;
- (id)_validVersionForVersion:(id)arg1;
@property(retain, nonatomic) NSArray *displayedVersions; // @dynamic displayedVersions;
@property(readonly, nonatomic) double zoomFactor;
- (void)setZoomValue:(double)arg1;
- (void)_notifyPrimarySelectionChange;
- (void)_notifySelectionChange;
- (void)removeSelectionObserver:(id)arg1;
- (void)addSelectionObserver:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (void)_commonInit;

@end

