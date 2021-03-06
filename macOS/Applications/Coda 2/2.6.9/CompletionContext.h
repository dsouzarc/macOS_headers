//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface CompletionContext : NSObject
{
    NSArray *iIdentifierStack;
    struct _NSRange iReplaceRange;
    NSString *iModeIdentifier;
    BOOL iAppendCompletion;
    BOOL iWantAllCompletions;
    BOOL iAnyIdentifierIsRoot;
    BOOL iIsCompletionUsingContextMatch;
}

@property BOOL isCompletionUsingContextMatch; // @synthesize isCompletionUsingContextMatch=iIsCompletionUsingContextMatch;
@property(readonly) struct _NSRange replaceRange; // @synthesize replaceRange=iReplaceRange;
@property(readonly) NSString *modeIdentifier; // @synthesize modeIdentifier=iModeIdentifier;
@property(readonly) NSArray *identifierStack; // @synthesize identifierStack=iIdentifierStack;
@property(readonly) BOOL wantAllCompletions; // @synthesize wantAllCompletions=iWantAllCompletions;
@property BOOL anyIdentifierIsRoot; // @synthesize anyIdentifierIsRoot=iAnyIdentifierIsRoot;
@property(readonly) NSString *stringToComplete;
- (id)description;
- (void)dealloc;
- (id)initWithIdentifierStack:(id)arg1 replaceRange:(struct _NSRange)arg2 modeIdentifier:(id)arg3 wantAllCompletions:(BOOL)arg4;

@end

