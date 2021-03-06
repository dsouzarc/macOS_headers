//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class LPCompiler, NSString;

__attribute__((visibility("hidden")))
@interface LPEngineUGLIFY : NSObject
{
    LPCompiler *_rootCompiler;
    NSString *_pathToUGLIFYCompiler;
}

- (id)version;
- (id)taskCommandsArrayFromUglifyOptions:(id)arg1;
- (id)uglifyOptionsHolderFromProjectSettingsInProject:(id)arg1;
- (void)minifyOutputOfFile:(id)arg1 fromTaskGroup:(id)arg2 withResultInfo:(id)arg3;
- (void)concatenateFilesInChain:(id)arg1 withBaseFile:(id)arg2 fromTaskGroup:(id)arg3 andPrepopulatedResultInfo:(id)arg4;
- (void)combineAndMinifyFilesInChain:(id)arg1 withBaseFile:(id)arg2 fromTaskGroup:(id)arg3 andPrepopulatedResultInfo:(id)arg4;
- (void)processFile:(id)arg1 fromTaskGroup:(id)arg2 withResultInfo:(id)arg3;
- (void)dealloc;
- (id)initWithRootCompiler:(id)arg1;

@end

