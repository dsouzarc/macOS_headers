//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class KHProjectManager, NSMutableArray;

@interface KHProjectBrowserDataSource : NSObject
{
    id <KHProjectBrowserDataSourceDelegate> _delegate;
    KHProjectManager *_projectManager;
    NSMutableArray *_projectBundles;
    NSMutableArray *_sections;
}

- (void).cxx_destruct;
@property(readonly) NSMutableArray *sections; // @synthesize sections=_sections;
@property(readonly) NSMutableArray *projectBundles; // @synthesize projectBundles=_projectBundles;
@property(readonly) KHProjectManager *projectManager; // @synthesize projectManager=_projectManager;
@property(nonatomic) __weak id <KHProjectBrowserDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
- (id)sectionAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfSections;
- (id)itemAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfItems;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)prepareData;
- (void)dealloc;
- (id)init;

@end

