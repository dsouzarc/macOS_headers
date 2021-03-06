//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Montreal/MLPDataBatch.h>

@class NSArray;

@interface MLPSeqDataBatch : MLPDataBatch
{
    NSArray *_matrix;
    NSArray *_lossLabels;
    unsigned long long _labelsCount;
}

@property unsigned long long labelsCount; // @synthesize labelsCount=_labelsCount;
@property(retain) NSArray *lossLabels; // @synthesize lossLabels=_lossLabels;
@property(retain) NSArray *matrix; // @synthesize matrix=_matrix;
- (void).cxx_destruct;
- (id)initWithDataBatch:(id)arg1 batchSize:(unsigned long long)arg2 network:(id)arg3;

@end

