//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Cocoa/NSObject.h>

@class NSString;

@interface CAGridCellRecord : NSObject
{
    long long _index;
    unsigned long long _key;
    NSString *_name;
    BOOL _stickyAtTop;
    BOOL _stickyAtBottom;
}

@property(nonatomic) BOOL stickyAtBottom; // @synthesize stickyAtBottom=_stickyAtBottom;
@property(nonatomic) BOOL stickyAtTop; // @synthesize stickyAtTop=_stickyAtTop;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) unsigned long long key; // @synthesize key=_key;
@property(nonatomic) long long index; // @synthesize index=_index;
- (BOOL)isShowingPhotoWithKey:(unsigned long long)arg1;
- (void)dealloc;

@end

