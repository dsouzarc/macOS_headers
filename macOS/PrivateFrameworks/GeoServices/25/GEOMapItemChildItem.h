//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GEOMapItemChildAction, GEOMapItemChildPlace;

@interface GEOMapItemChildItem : NSObject
{
    long long _childItemType;
    GEOMapItemChildPlace *_childItemPlace;
    GEOMapItemChildAction *_childItemAction;
}

- (void).cxx_destruct;
@property(retain, nonatomic) GEOMapItemChildAction *childItemAction; // @synthesize childItemAction=_childItemAction;
@property(retain, nonatomic) GEOMapItemChildPlace *childItemPlace; // @synthesize childItemPlace=_childItemPlace;
@property(nonatomic) long long childItemType; // @synthesize childItemType=_childItemType;
- (id)initWithChildPlace:(id)arg1;
- (id)initWithChildItem:(id)arg1;

@end

