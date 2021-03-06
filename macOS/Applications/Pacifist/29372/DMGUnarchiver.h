//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface DMGUnarchiver : NSObject
{
    NSArray *ivar_currentlyMountedImages;
    int ivar_currentlyMountedImagesLock;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)imageInfoAtURL:(id)arg1 error:(id *)arg2;
- (id)devEntryURLsForMountedImageAtURL:(id)arg1 error:(id *)arg2;
- (id)mountPointForMountedImageAtURL:(id)arg1 devEntryURL:(id *)arg2 error:(id *)arg3;
- (BOOL)detachImageAtURL:(id)arg1 error:(id *)arg2;
- (BOOL)detachImageWithDevEntryURL:(id)arg1 error:(id *)arg2;
- (BOOL)isDiskImageMountedAtURL:(id)arg1;
- (BOOL)isDiskImageAtURL:(id)arg1;
- (BOOL)isDiskImageAtPath:(id)arg1;
- (id)diskImageTypes;
- (void)disksChanged:(id)arg1;
- (id)mountPointsForMountedImageAtURL:(id)arg1 devEntryURLs:(id *)arg2 error:(id *)arg3;
- (id)currentlyMountedImagesWithError:(id *)arg1;
- (void)setCurrentlyMountedImages:(id)arg1;
- (id)mountImageAtURL:(id)arg1 devEntryURL:(id *)arg2 error:(id *)arg3;
- (void)dealloc;
- (id)init;

@end

