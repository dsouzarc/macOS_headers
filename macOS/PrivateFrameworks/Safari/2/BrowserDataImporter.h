//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface BrowserDataImporter : NSObject
{
    NSString *_sourceBrowserBundleIdentifier;
    CDUnknownBlockType _completionHandler;
}

@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(copy, nonatomic) NSString *sourceBrowserBundleIdentifier; // @synthesize sourceBrowserBundleIdentifier=_sourceBrowserBundleIdentifier;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isImportingForTestDrive) BOOL importingForTestDrive;

@end

