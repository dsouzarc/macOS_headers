//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PhotosPlayer/NSObject-Protocol.h>

@class ISPlayerOutputContent, ISPlayerOutputTransitionOptions, ISPlayerState;

@protocol ISBasePlayerOutput <NSObject>
- (void)setContent:(ISPlayerOutputContent *)arg1;
- (void)applyOutputInfo:(ISPlayerState *)arg1 withTransitionOptions:(ISPlayerOutputTransitionOptions *)arg2 completion:(void (^)(BOOL))arg3;
- (void)applyScale:(double)arg1 withTransitionOptions:(ISPlayerOutputTransitionOptions *)arg2 completion:(void (^)(BOOL))arg3;
@end

