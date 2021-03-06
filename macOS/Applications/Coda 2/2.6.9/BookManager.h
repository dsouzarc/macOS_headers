//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray;

__attribute__((visibility("hidden")))
@interface BookManager : NSObject
{
    NSMutableArray *_books;
}

+ (id)userDefinedBooksURL;
+ (id)sharedManager;
- (id)bookForMode:(id)arg1;
- (void)removeBook:(id)arg1;
- (void)addBook:(id)arg1;
@property(readonly) NSArray *books;
- (void)sortBooks;
- (id)createUserDefinedBooks;
- (id)createDefaultBooks;
- (void)dealloc;
- (id)init;

@end

