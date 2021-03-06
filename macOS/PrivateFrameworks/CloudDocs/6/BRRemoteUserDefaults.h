//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSSet;

@interface BRRemoteUserDefaults : NSObject
{
    NSMutableDictionary *_userDictionaryCache;
}

+ (id)defaultExcludedExtensionsWorthPreserving;
+ (id)defaultExcludedFilenamesWorthPreserving;
+ (id)defaultExcludedFilenamesWorthWarningAtLogout;
+ (id)sharedDefaults;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long minFileSizeForThumbnailTransfer;
@property(readonly, nonatomic) NSSet *excludedExtensionsWorthPreserving;
@property(readonly, nonatomic) NSSet *excludedFilenamesWorthWarningAtLogout;
- (id)init;
- (id)_init;

@end

