//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PhotoFoundation/PFWorkContext.h>

@class NSString;

@interface IPXManualGlobalProgress : PFWorkContext
{
    CDUnknownBlockType _handleCancelBlock;
    CDUnknownBlockType _handlePauseResumeBlock;
    double _progressPercent;
    NSString *_progressDisplayString;
}

+ (void)testProgress;
+ (id)progress;
@property(retain) NSString *progressDisplayString; // @synthesize progressDisplayString=_progressDisplayString;
@property double progressPercent; // @synthesize progressPercent=_progressPercent;
@property(copy) CDUnknownBlockType handlePauseResumeBlock; // @synthesize handlePauseResumeBlock=_handlePauseResumeBlock;
@property(copy) CDUnknownBlockType handleCancelBlock; // @synthesize handleCancelBlock=_handleCancelBlock;
- (void).cxx_destruct;
- (void)resume;
- (void)pause;
- (void)cancel;
- (id)progressDescription;
- (double)progress;
- (void)setProgress:(double)arg1 description:(id)arg2;
- (id)init;

@end

