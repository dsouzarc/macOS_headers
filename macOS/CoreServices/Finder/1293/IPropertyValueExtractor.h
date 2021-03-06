//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface IPropertyValueExtractor : NSObject
{
    _Bool _shouldPrefetchValue;
    _Bool _forPreview;
}

+ (id)extractor;
@property _Bool forPreview; // @synthesize forPreview=_forPreview;
@property _Bool shouldPrefetchValue; // @synthesize shouldPrefetchValue=_shouldPrefetchValue;
- (void)flush;
- (_Bool)isApplicableToNodes:(const struct TFENodeVector *)arg1;
- (_Bool)needsUpdateForProperty:(unsigned int)arg1;
- (id)defaultValue;
- (id)extractValueFromNodes:(const struct TFENodeVector *)arg1;
- (void)prefetchValueOnSecondaryThread:(const struct TFENodeVector *)arg1 cancelled:(const struct atomic<bool> *)arg2;

@end

