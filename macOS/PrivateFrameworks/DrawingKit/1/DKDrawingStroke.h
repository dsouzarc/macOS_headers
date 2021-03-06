//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DrawingKit/NSCopying-Protocol.h>

@class NSMutableArray;

@interface DKDrawingStroke : NSObject <NSCopying>
{
    NSMutableArray *_strokePoints;
}

+ (id)drawingStrokeWithData:(id)arg1 count:(unsigned long long)arg2;
@property(readonly) NSMutableArray *strokePoints; // @synthesize strokePoints=_strokePoints;
- (void).cxx_destruct;
- (id)_decodeDKEncodedDrawingPointDataAsArray:(id)arg1 count:(long long)arg2;
- (id)_encodePointsDrawingPointData:(id)arg1;
- (id)encodedBrushStroke;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

