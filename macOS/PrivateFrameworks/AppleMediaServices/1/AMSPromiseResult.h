//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError;

__attribute__((visibility("hidden")))
@interface AMSPromiseResult : NSObject
{
    NSError *_error;
    id _result;
}

@property(readonly) id result; // @synthesize result=_result;
@property(readonly, copy) NSError *error; // @synthesize error=_error;
- (void).cxx_destruct;
- (id)initWithResult:(id)arg1 error:(id)arg2;

@end

