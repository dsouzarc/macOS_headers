//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSWPEquationLayout.h"

@class TSDInfoGeometry, TSDLayoutGeometry;

@interface TSWPEquationFloatingLayout : TSWPEquationLayout
{
    TSDInfoGeometry *_dynamicInfoGeometry;
    TSDLayoutGeometry *_baseEquationLayoutGeometry;
}

- (void).cxx_destruct;
- (void)processChangedProperty:(int)arg1;
- (id)commandToResetMediaToInsertedSize;
- (id)commandToResetMediaToRawPixelSize;
- (id)commandToResetToSize:(struct CGSize)arg1;
- (void)p_setDynamicInfoGeometry:(id)arg1;
- (void)takeRotationFromTracker:(id)arg1;
- (struct CGAffineTransform)layoutTransformInInfoSpace:(struct CGAffineTransform)arg1;
- (void)takeSizeFromTracker:(id)arg1;
- (void)resizeWithTransform:(struct CGAffineTransform)arg1;
- (void)endDrag;
- (void)dragBy:(struct CGPoint)arg1;
- (void)endDynamicOperation;
- (void)beginDynamicOperation;
- (BOOL)resizeMayChangeAspectRatio;
- (BOOL)canAspectRatioLockBeChangedByUser;
- (id)computeLayoutGeometry;
- (id)layoutGeometryFromInfo;
- (id)currentInfoGeometry;

@end

