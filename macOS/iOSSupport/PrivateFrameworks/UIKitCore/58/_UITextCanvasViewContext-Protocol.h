//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/NSObject-Protocol.h>

@class NSLayoutManager, NSTextContainer, UIColor;

@protocol _UITextCanvasViewContext <NSObject>
@property(readonly, nonatomic) struct CGPoint drawingScale;
@property(readonly, nonatomic) UIColor *textColor;
@property(readonly, nonatomic, getter=isEditable) BOOL editable;
@property(readonly, nonatomic) struct CGPoint textContainerOrigin;
@property(readonly, nonatomic) NSTextContainer *textContainer;
@property(readonly, nonatomic) NSLayoutManager *layoutManager;
@end

