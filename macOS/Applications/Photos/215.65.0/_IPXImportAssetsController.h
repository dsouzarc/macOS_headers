//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "IPXObjectsController.h"

@class IPXImportSourceObjectsController, NSString;

@interface _IPXImportAssetsController : IPXObjectsController
{
    IPXImportSourceObjectsController *_owningController;
    BOOL _allowSorting;
    NSString *_importSectionName;
}

@property(retain) NSString *importSectionName; // @synthesize importSectionName=_importSectionName;
- (void).cxx_destruct;
- (id)objectsCollectionName;
- (id)synchronizationObject;
- (id)processingQueue;
- (BOOL)locked_canProvideArrangedObjects;
- (void)setAllowSorting:(BOOL)arg1;
- (BOOL)allowSorting;
- (id)initWithOwningController:(id)arg1 index:(unsigned long long)arg2;
- (CDUnknownBlockType)objectsCollectionSortingComparator;

@end

