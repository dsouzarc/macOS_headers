//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Silex/NSObject-Protocol.h>

@class SXLayoutOperation, SXLayoutTask;
@protocol SXDOMObjectProviding;

@protocol SXLayoutOperationFactory <NSObject>
- (SXLayoutOperation *)layoutOperationWithTask:(SXLayoutTask *)arg1 DOMObjectProvider:(id <SXDOMObjectProviding>)arg2;
@end

