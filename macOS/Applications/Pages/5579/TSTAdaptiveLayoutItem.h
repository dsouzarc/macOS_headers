//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, TSDDrawableInfo;

@interface TSTAdaptiveLayoutItem : NSObject
{
    TSDDrawableInfo *_info;
    NSMutableArray *_relationships;
}

@property(retain, nonatomic) NSMutableArray *relationships; // @synthesize relationships=_relationships;
@property(readonly, nonatomic) __weak TSDDrawableInfo *info; // @synthesize info=_info;
- (void).cxx_destruct;
- (id)description;
- (void)removeSharedRelationships:(id)arg1 direction:(int)arg2;
- (BOOL)hasRelationshipWithTableInfo:(id)arg1 direction:(int)arg2;
- (int)directionOfRelationships;
- (void)addRelationshipToTableInfo:(id)arg1 cellRange:(struct TSUCellRect)arg2 offsetFromTable:(struct CGPoint)arg3 transformToOrigin:(struct CGAffineTransform)arg4 contained:(BOOL)arg5 intersects:(BOOL)arg6 direction:(int)arg7;
- (id)initWithInfo:(id)arg1 tableInfo:(id)arg2 cellRange:(struct TSUCellRect)arg3 offsetFromTable:(struct CGPoint)arg4 transformToOrigin:(struct CGAffineTransform)arg5 contained:(BOOL)arg6 intersects:(BOOL)arg7 direction:(int)arg8;

@end

