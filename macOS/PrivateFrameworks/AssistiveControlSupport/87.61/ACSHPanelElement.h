//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AssistiveControlSupport/ACSHPlistObject.h>

@class ACSHPanelElementView, NSArray, NSMutableArray, NSString;

@interface ACSHPanelElement : ACSHPlistObject
{
    NSMutableArray *_panelElements;
    struct CGRect _rect;
    struct CGRect _extraRect;
    ACSHPanelElementView *_panelElementView;
    int _displayTheme;
    BOOL _rectBeingManipulated;
    ACSHPanelElement *_parentElement;
    NSString *_spokenDescription;
    NSString *_soundIdentifier;
    struct CGRect _pixelAlignedRect;
    struct CGRect _rectAtStartOfCurrentManipulation;
}

+ (Class)classForDict:(id)arg1;
+ (id)keysForValuesToObserveForView;
@property(retain, nonatomic) NSString *soundIdentifier; // @synthesize soundIdentifier=_soundIdentifier;
@property(nonatomic) ACSHPanelElementView *panelElementView; // @synthesize panelElementView=_panelElementView;
@property(nonatomic, getter=isRectBeingManipulated) BOOL rectBeingManipulated; // @synthesize rectBeingManipulated=_rectBeingManipulated;
@property(readonly, nonatomic) struct CGRect rectAtStartOfCurrentManipulation; // @synthesize rectAtStartOfCurrentManipulation=_rectAtStartOfCurrentManipulation;
@property(readonly, nonatomic) struct CGRect pixelAlignedRect; // @synthesize pixelAlignedRect=_pixelAlignedRect;
@property(nonatomic) struct CGRect extraRect; // @synthesize extraRect=_extraRect;
@property(nonatomic) ACSHPanelElement *parentElement; // @synthesize parentElement=_parentElement;
- (void)dealloc;
- (void)fixDuplicateIdentifiers;
- (BOOL)containsIdentifier:(id)arg1;
- (void)_allDescendentsRecursively:(id)arg1;
- (void)updateResourceIdentifiers:(id)arg1;
- (id)allRequiredResourceIDs;
- (void)sortChildrenRecursively;
- (void)sortChildren;
- (id)keyStringForElement:(id)arg1;
- (long long)compareKeyString:(id)arg1;
- (long long)compareGeometry:(id)arg1;
- (void)performBlockOnElementAndAncestors:(CDUnknownBlockType)arg1;
- (void)performBlockOnAncestors:(CDUnknownBlockType)arg1;
- (void)_performBlockOnAncestors:(CDUnknownBlockType)arg1 includeSelf:(BOOL)arg2;
- (void)setRect:(struct CGRect)arg1 andNotify:(BOOL)arg2 includeInUndoStack:(BOOL)arg3;
- (void)setRect:(struct CGRect)arg1 andNotify:(BOOL)arg2;
@property(nonatomic) struct CGRect rect;
- (void)switchToPanelIfUndoing;
@property(retain, nonatomic) NSString *spokenDescription; // @synthesize spokenDescription=_spokenDescription;
@property(nonatomic) int displayTheme;
- (BOOL)supportsActionToggle;
- (BOOL)descendentsContainPanelElement:(id)arg1;
- (id)action;
- (id)actions;
- (void)removeChildElements:(id)arg1;
- (void)prependChildElements:(id)arg1;
- (void)appendChildElements:(id)arg1;
- (void)removeChildElement:(id)arg1;
- (void)prependChildElement:(id)arg1;
- (void)appendChildElement:(id)arg1;
- (void)insertChildElement:(id)arg1 atIndex:(unsigned long long)arg2;
@property(retain, nonatomic) NSArray *panelElements; // @dynamic panelElements;
- (void)sizeToFitPanelElementsAndAncestors;
- (struct CGRect)rectThatFitsPanelElements:(struct CGPoint *)arg1;
- (void)sizeToFitPanelElementsAndNotify:(BOOL)arg1;
- (void)sizeToFitPanelElements;
- (struct CGSize)minimumSize;
- (void)resizeToRect:(struct CGRect)arg1 resizeType:(int)arg2;
- (id)makeGroupWithPanelElements:(id)arg1;
- (void)moveBy:(struct CGPoint)arg1;
- (id)descendantsWithoutGrouping;
- (id)breakApartGroup:(id)arg1;
- (id)panelButtons;
- (id)dictionaryForSaving;
- (void)_initWithPlistDictionary:(id)arg1;
- (id)descriptionForDepth:(unsigned long long)arg1;
- (unsigned long long)numberOfTrailingExtrasForItemAtIndexPath:(id)arg1;
- (unsigned long long)numberOfLeadingExtrasForItemAtIndexPath:(id)arg1;
- (unsigned long long)numberOfChildItemsForItemAtIndexPath:(id)arg1;
- (id)panelElementAtIndexPath:(id)arg1;
- (void)setPanelElementsWithDictArray:(id)arg1;

@end

