//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class NUIContainerView;

@interface NUICollectionViewContainerCell : UICollectionViewCell
{
    NUIContainerView *_containerView;
}

+ (Class)_contentViewClass;
+ (Class)containerViewClass;
@property(readonly, nonatomic) NUIContainerView *containerView; // @synthesize containerView=_containerView;
- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

@end

