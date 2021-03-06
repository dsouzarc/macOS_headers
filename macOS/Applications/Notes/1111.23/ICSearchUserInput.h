//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface ICSearchUserInput : NSObject
{
    BOOL _isEmpty;
    NSString *_searchString;
    NSArray *_suggestions;
}

+ (id)emptyInput;
- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL isEmpty; // @synthesize isEmpty=_isEmpty;
@property(readonly, nonatomic) NSArray *suggestions; // @synthesize suggestions=_suggestions;
@property(readonly, nonatomic) NSString *searchString; // @synthesize searchString=_searchString;
- (void)_configureEmptyInput;
- (id)initWithSearchString:(id)arg1 suggestions:(id)arg2;

@end

