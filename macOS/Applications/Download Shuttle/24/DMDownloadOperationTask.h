//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WUCTask.h"

@class FLDownloadOperation;

@interface DMDownloadOperationTask : WUCTask
{
    FLDownloadOperation *_downloadOperation;
}

@property(retain, nonatomic) FLDownloadOperation *downloadOperation; // @synthesize downloadOperation=_downloadOperation;
- (void).cxx_destruct;
- (void)run;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)name;

@end

