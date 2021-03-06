//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSArray, NSMutableArray;
@protocol NUIContainerViewDelegate;

@interface NUIContainerView : NSView
{
    id <NUIContainerViewDelegate> _delegate;
    NSMutableArray *_arrangedSubviews;
    NSArray *_visibleArrangedSubviews;
    double _preferredMaxLayoutWidth;
    struct nui_size_cache _cachedIntrinsicSizes;
    struct unordered_map<const NSView *, nui_size_cache, std::__1::hash<const NSView *>, std::__1::equal_to<const NSView *>, std::__1::allocator<std::__1::pair<const NSView *const, nui_size_cache>>> _cachedSystemLayoutSizes;
    struct {
        unsigned int hiddenArrangedSubviewCount:8;
        unsigned int inLayoutPass:1;
        unsigned int determiningPreferredMaxLayoutWidth:1;
        unsigned int inSecondConstraintsPass:1;
        unsigned int delegateDidInvalidateIntrinsicContentSize:1;
        unsigned int delegateSystemLayoutSizeFittingSizeForArrangedSubview:1;
        unsigned int delegateLayoutFrameForArrangedSubview:1;
        unsigned int delegateWillMeasureFitting:1;
        unsigned int delegateDidLayout:1;
    } _containerFlags;
    long long _updateConstraintsPassCounter;
    BOOL _baselineRelativeArrangement;
    BOOL _layoutMarginsRelativeArrangement;
    struct NSEdgeInsets _layoutMargins;
}

+ (void)initialize;
+ (BOOL)isDebugBoundingBoxesEnabled;
@property(nonatomic) struct NSEdgeInsets layoutMargins; // @synthesize layoutMargins=_layoutMargins;
@property(nonatomic, getter=isLayoutMarginsRelativeArrangement) BOOL layoutMarginsRelativeArrangement; // @synthesize layoutMarginsRelativeArrangement=_layoutMarginsRelativeArrangement;
@property(nonatomic, getter=isBaselineRelativeArrangement) BOOL baselineRelativeArrangement; // @synthesize baselineRelativeArrangement=_baselineRelativeArrangement;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)description;
- (id)viewForLastBaselineLayout;
- (id)viewForFirstBaselineLayout;
- (void)_intrinsicContentSizeInvalidatedForChildView:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)invalidateIntrinsicContentSize;
- (void)resizeSubviewsWithOldSize:(struct CGSize)arg1;
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
- (struct CGSize)intrinsicContentSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)_intrinsicSizeWithinSize:(struct CGSize)arg1;
- (unsigned long long)indexOfArrangedSubview:(id)arg1;
- (void)insertArrangedSubview:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)removeArrangedSubview:(id)arg1;
- (void)_endObservingSubviewVisibility:(id)arg1;
- (void)_beginObservingSubviewVisibility:(id)arg1;
- (void)_didRemoveSubview:(id)arg1;
- (void)addArrangedSubview:(id)arg1;
@property(readonly, nonatomic) NSArray *visibleArrangedSubviews;
@property(copy, nonatomic) NSArray *arrangedSubviews;
@property(nonatomic) __weak id <NUIContainerViewDelegate> delegate;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithArrangedSubviews:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (BOOL)isFlipped;
- (BOOL)wantsLayer;
- (double)lastBaselineOffsetFromBottom;
- (double)firstBaselineOffsetFromTop;
- (void)updateConstraints;
- (BOOL)isLayoutSizeDependentOnPerpendicularAxis;
- (BOOL)_needsDoubleUpdateConstraintsPass;
- (id)arrangedDescription;
- (BOOL)layoutArrangedSubviewsInBounds:(struct CGRect)arg1;
- (struct CGSize)calculateArrangedSizeFittingSize:(struct CGSize)arg1;
- (void)didRemoveArrangedSubview:(id)arg1 atIndex:(long long)arg2;
- (void)didInsertArrangedSubview:(id)arg1 atIndex:(long long)arg2;
- (void)assertNotInLayoutPass:(BOOL)arg1;
- (BOOL)isInLayoutPass;
- (struct CGRect)layoutFrameForArrangedSubview:(id)arg1 withProposedContentFrame:(struct CGRect)arg2;
- (struct CGSize)contentLayoutSizeFittingSize:(struct CGSize)arg1 forArrangedSubview:(id)arg2;
- (void)intrinsicContentSizeDidInvalidateForArrangedSubview:(id)arg1;
- (void)visibilityDidChangeForArrangedSubview:(id)arg1;
- (void)invalidateIntrinsicContentSizeRequiringArrangedSubviewRemeasurement:(BOOL)arg1;
- (void)setNeedsLayout:(BOOL)arg1;
- (void)setFrameSize:(struct CGSize)arg1;

@end

