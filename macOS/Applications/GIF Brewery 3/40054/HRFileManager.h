//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSFileManagerDelegate.h"

@class NSFileManager, NSString, NSURL;

@interface HRFileManager : NSObject <NSFileManagerDelegate>
{
    NSURL *temporaryDirectory;
    NSFileManager *fileManager;
}

+ (id)shared;
- (void).cxx_destruct;
- (id)moveItemAtURL:(id)arg1 to:(id)arg2;
- (BOOL)removeItemAtURL:(id)arg1;
- (id)temporaryURLwithName:(id)arg1 ofType:(id)arg2;
- (id)temporaryURLofType:(id)arg1;
- (id)URLForDownloadNamed:(id)arg1;
- (id)URLForRecording;
- (void)cleanup;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

