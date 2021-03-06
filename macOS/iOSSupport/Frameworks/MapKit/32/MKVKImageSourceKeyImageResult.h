//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MKVKImageSourceCalculationParameters, NSArray, NSMutableArray, NSMutableSet;

__attribute__((visibility("hidden")))
@interface MKVKImageSourceKeyImageResult : NSObject
{
    NSMutableArray *_mutableFullBleedColors;
    BOOL _sameFullBleedColors;
    MKVKImageSourceCalculationParameters *_parameters;
    NSMutableArray *_triedKeys;
    NSMutableArray *_mutableImages;
    NSMutableSet *_imageDatas;
}

@property(retain, nonatomic) NSMutableSet *imageDatas; // @synthesize imageDatas=_imageDatas;
@property(retain, nonatomic) NSMutableArray *mutableImages; // @synthesize mutableImages=_mutableImages;
@property(retain, nonatomic) NSMutableArray *triedKeys; // @synthesize triedKeys=_triedKeys;
@property(readonly, nonatomic, getter=hasSameFullBleedColors) BOOL sameFullBleedColors; // @synthesize sameFullBleedColors=_sameFullBleedColors;
@property(readonly, nonatomic) MKVKImageSourceCalculationParameters *parameters; // @synthesize parameters=_parameters;
- (void).cxx_destruct;
- (void)addFullBleedColor:(id)arg1;
@property(readonly, nonatomic) NSArray *images;
@property(readonly, nonatomic) NSArray *fullBleedColors;
- (id)initWithParameters:(id)arg1;

@end

