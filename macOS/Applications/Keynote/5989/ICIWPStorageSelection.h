//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class TSWPStorage;

@interface ICIWPStorageSelection : NSObject
{
    TSWPStorage *_tsWPStorage;
    struct _NSRange _selectionRange;
}

@property(readonly, nonatomic) struct _NSRange selectionRange; // @synthesize selectionRange=_selectionRange;
@property(readonly, nonatomic) TSWPStorage *tsWPStorage; // @synthesize tsWPStorage=_tsWPStorage;
- (void).cxx_destruct;
- (id)initWithStorage:(id)arg1 selectionRange:(struct _NSRange)arg2;

@end

