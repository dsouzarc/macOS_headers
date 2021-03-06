//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IPXSearchSuggestion-Protocol.h"

@class NSString, RDFaceTile;
@protocol IPXSearchSuggester, IPXSearchSuggestionViewProvider;

@interface IPXFaceNameSearchSuggestion : NSObject <IPXSearchSuggestion>
{
    RDFaceTile *_tile;
    NSString *_name;
    id <IPXSearchSuggestionViewProvider> _suggestionViewProvider;
}

@property __weak id <IPXSearchSuggestionViewProvider> suggestionViewProvider; // @synthesize suggestionViewProvider=_suggestionViewProvider;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) RDFaceTile *tile; // @synthesize tile=_tile;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *displayString;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) NSString *selectionDisplayString;
@property(retain) id <IPXSearchSuggester> sourceSuggester;
@property(readonly) Class superclass;

@end

