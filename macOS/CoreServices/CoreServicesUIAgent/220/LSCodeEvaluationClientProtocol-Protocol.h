//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

@class LSCodeEvaluationInfo, NSUUID;

@protocol LSCodeEvaluationClientProtocol
- (void)handleProgressCancelForIdentifier:(NSUUID *)arg1;
- (void)handlePromptResponse:(long long)arg1 info:(LSCodeEvaluationInfo *)arg2 identifier:(NSUUID *)arg3;
@end

