//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PLResourceDataStoreManager : NSObject
{
}

+ (id)storeExternalResources:(id)arg1 forAsset:(id)arg2 forLifecycleEvent:(unsigned int)arg3 error:(id *)arg4;
+ (id)updateDerivativeResourcesForAsset:(id)arg1 forLifecycleEvent:(unsigned int)arg2;
+ (id)storeForExternalResource:(id)arg1 inLibraryWithID:(id)arg2;
+ (id)storesForLibraryID:(id)arg1;

@end

