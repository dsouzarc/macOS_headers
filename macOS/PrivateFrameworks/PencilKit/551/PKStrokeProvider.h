//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CHStrokeProvider.h"

@class NSArray, NSMutableOrderedSet, NSString, PKDrawing;

@interface PKStrokeProvider : NSObject <CHStrokeProvider>
{
    BOOL _disabled;
    NSMutableOrderedSet *_strokeSlices;
    PKDrawing *_drawing;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) PKDrawing *drawing; // @synthesize drawing=_drawing;
- (id)sliceForIdentifier:(id)arg1;
- (id)strokeForIdentifier:(id)arg1;
- (BOOL)isStroke:(id)arg1 versionOfStrokeWithIdentifier:(id)arg2;
- (long long)compareOrderOfStroke:(id)arg1 toStroke:(id)arg2;
- (long long)compareOrderOfStrokeWithIdentifier:(id)arg1 toStrokeWithIdentifier:(id)arg2;
- (BOOL)enumerateChangesSinceVersion:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
@property(readonly, copy) NSArray *orderedStrokes;
- (id)slices;
@property(readonly, retain) id <CHStrokeProviderVersion> strokeProviderVersion;
@property(readonly, copy) NSString *description;
- (id)initWithDrawing:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

