//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, OITSUNoCopyDictionary;

__attribute__((visibility("hidden")))
@interface WDFontTable : NSObject
{
    OITSUNoCopyDictionary *mFontTable;
    NSMutableArray *mFontsInOrderOfInsertion;
}

- (id)fonts;
- (id)createFontWithName:(id)arg1;
- (id)fontWithName:(id)arg1 create:(BOOL)arg2;
- (id)fontWithName:(id)arg1;
- (void)clear;
- (unsigned long long)count;
- (void)dealloc;
- (id)init;

@end

