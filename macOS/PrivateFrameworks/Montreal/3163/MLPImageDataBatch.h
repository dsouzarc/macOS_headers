//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Montreal/MLPDataBatch.h>

@class NSArray;

@interface MLPImageDataBatch : MLPDataBatch
{
    struct NSArray *_images;
    struct NSArray *_lossLabels;
    NSArray *_labels;
}

@property(retain) NSArray *labels; // @synthesize labels=_labels;
@property(retain) NSArray *lossLabels; // @synthesize lossLabels=_lossLabels;
@property(retain) NSArray *images; // @synthesize images=_images;
- (void).cxx_destruct;
- (id)initWithDataBatch:(id)arg1 batchSize:(unsigned long long)arg2 network:(id)arg3;

@end

