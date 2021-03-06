//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Silex/NSObject-Protocol.h>

@class SXComponentView;
@protocol SXComponent, SXComponentViewPostProcessor;

@protocol SXComponentViewPostProcessorManager <NSObject>
- (void)removeProcessor:(id <SXComponentViewPostProcessor>)arg1;
- (void)addProcessor:(id <SXComponentViewPostProcessor>)arg1;
- (void)processComponent:(id <SXComponent>)arg1 view:(SXComponentView *)arg2;
@end

