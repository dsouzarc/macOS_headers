//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLock, PDFDocument;

__attribute__((visibility("hidden")))
@interface PDFViewLayoutPrivate : NSObject
{
    id delegate;
    BOOL delegateKnowsMargins;
    BOOL delegateKnowsDisplayMode;
    BOOL delegateKnowsDisplayAsBook;
    BOOL delegateKnowsDisplayBox;
    BOOL delegateKnowsDisplayRTL;
    BOOL delegateKnowsDisplaysDirection;
    BOOL delegateKnowsDocumentMargins;
    BOOL delegateKnowsIsUsingPageViewController;
    PDFDocument *document;
    unsigned long long pageCount;
    NSLock *pageLayoutLock;
    struct CGRect *pageLayoutBounds;
    struct CGSize singlePageContinuousSize;
    struct CGSize twoUpContinousSize;
    long long cachedContinuousSizeDisplayDirection;
}

- (void).cxx_destruct;

@end

