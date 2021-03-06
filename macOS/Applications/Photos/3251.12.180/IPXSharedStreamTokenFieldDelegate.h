//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSTokenFieldDelegate-Protocol.h"

@class NSArray, NSMutableDictionary, NSMutableString, NSString;

@interface IPXSharedStreamTokenFieldDelegate : NSObject <NSTokenFieldDelegate>
{
    NSMutableDictionary *_cachedTokenObjects;
    NSMutableString *_userInput;
    BOOL _restInput;
    BOOL _editingInput;
    BOOL _owned;
    NSArray *_recentContacts;
}

+ (id)formattedNameFirst:(id)arg1 last:(id)arg2;
@property(retain) NSArray *recentContacts; // @synthesize recentContacts=_recentContacts;
@property BOOL owned; // @synthesize owned=_owned;
- (void).cxx_destruct;
- (BOOL)control:(id)arg1 textView:(id)arg2 doCommandBySelector:(SEL)arg3;
- (void)cacheObject:(id)arg1 forKey:(id)arg2;
- (id)cachedTokenForKey:(id)arg1;
- (id)newTokenObject:(id)arg1;
- (id)tokenField:(id)arg1 completionsForSubstring:(id)arg2 indexOfToken:(long long)arg3 indexOfSelectedItem:(long long *)arg4;
- (id)tokenField:(id)arg1 shouldAddObjects:(id)arg2 atIndex:(unsigned long long)arg3;
- (id)tokenField:(id)arg1 editingStringForRepresentedObject:(id)arg2;
- (id)tokenField:(id)arg1 displayStringForRepresentedObject:(id)arg2;
- (id)tokenField:(id)arg1 menuForRepresentedObject:(id)arg2;
- (BOOL)tokenField:(id)arg1 hasMenuForRepresentedObject:(id)arg2;
- (id)nameFromPerson:(id)arg1 leadingString:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

