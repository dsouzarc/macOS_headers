//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;
@protocol LSIconResourceProvider;

@interface ISIconResourceProvider : NSObject
{
    id <LSIconResourceProvider> _lsResourceProvider;
    NSArray *_decorations;
}

@property(readonly) NSArray *decorations; // @synthesize decorations=_decorations;
@property(readonly) id <LSIconResourceProvider> lsResourceProvider; // @synthesize lsResourceProvider=_lsResourceProvider;
- (void).cxx_destruct;
- (struct NSData *)generateValidationToken;
- (void)configureCompositor:(id)arg1 backgroundStyle:(unsigned long long)arg2;
- (id)initWithLSIconResourceProvider:(id)arg1 decorations:(id)arg2;

@end

