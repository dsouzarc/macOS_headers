//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ICMNoteListSectionHeader.h"

@interface ICMNoteListSearchResultSectionHeader : ICMNoteListSectionHeader
{
    unsigned long long _section;
    unsigned long long _count;
}

@property(nonatomic) unsigned long long count; // @synthesize count=_count;
@property(readonly, nonatomic) unsigned long long section; // @synthesize section=_section;
- (id)title;
- (double)cellHeight;
- (unsigned long long)type;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSection:(unsigned long long)arg1 count:(unsigned long long)arg2;

@end

