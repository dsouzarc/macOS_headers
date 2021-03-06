//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface PLPTPAssetReader : NSObject
{
    NSString *_path;
    id _userInfo;
    BOOL _shouldDeleteTemporaryFileOnDeallocation;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id userInfo; // @synthesize userInfo=_userInfo;
@property(readonly, copy, nonatomic) NSString *path; // @synthesize path=_path;
- (id)description;
- (id)dataSourcePathForDataRange:(struct _NSRange)arg1 error:(id *)arg2;
- (void)dealloc;
- (id)initWithTemporaryFileDeletedOnDeallocPath:(id)arg1;
- (id)initWithPath:(id)arg1;

@end

