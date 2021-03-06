//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class EPXEntry, EPXSDocument, NSString;

@interface EPXSChapter : NSObject
{
    NSString *_title;
    unsigned long long _chapterNumber;
    NSString *_background;
    EPXSDocument *_documentState;
    EPXEntry *_entry;
}

+ (id)hrefForPageNumber:(unsigned long long)arg1;
+ (id)idForPageNumber:(unsigned long long)arg1;
+ (id)hrefForChapterNumber:(unsigned long long)arg1;
+ (id)idForChapterNumber:(unsigned long long)arg1;
+ (id)navigationDocumentHref;
+ (id)titlePageContentHref;
@property(readonly, nonatomic) EPXEntry *entry; // @synthesize entry=_entry;
@property(readonly, nonatomic) EPXSDocument *documentState; // @synthesize documentState=_documentState;
@property(readonly, nonatomic) NSString *background; // @synthesize background=_background;
@property(readonly, nonatomic) unsigned long long chapterNumber; // @synthesize chapterNumber=_chapterNumber;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)initNavigationDocumentWithState:(id)arg1;
- (id)initCoverPageWithState:(id)arg1;
- (id)initTitlePageContentWithState:(id)arg1;
- (id)initWithID:(id)arg1 href:(id)arg2 title:(id)arg3 chapterNumber:(unsigned long long)arg4 background:(id)arg5 state:(id)arg6;

@end

