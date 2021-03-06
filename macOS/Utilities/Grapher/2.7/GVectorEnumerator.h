//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GSpace, GSystem, GVectorField;

@interface GVectorEnumerator : NSObject
{
    GVectorField *mVectorField;
    GSystem *mSystem;
    GSpace *mSpace;
    unsigned long long mDim;
    BOOL mFirst;
    struct _GRange *mRange;
    double *mValue;
    double *mCoord;
    double *mStep;
}

+ (id)vectorEnumeratorWithField:(id)arg1;
- (id)nextVector;
- (BOOL)nextPoint;
- (void)dealloc;
- (id)initWithField:(id)arg1;

@end

