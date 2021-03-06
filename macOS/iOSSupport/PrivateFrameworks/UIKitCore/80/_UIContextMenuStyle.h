//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>

@class NSArray, UITraitCollection, UIView, UIWindow;

@interface _UIContextMenuStyle : NSObject <NSCopying>
{
    BOOL _hasInteractivePreview;
    BOOL _preventPreviewRasterization;
    BOOL _reversesActionOrderWhenAttachedToTop;
    UIWindow *_containerWindow;
    UIView *_containerView;
    unsigned long long _preferredLayout;
    UITraitCollection *_preferredTraitCollection;
    NSArray *_preferredBackgroundEffects;
    struct UIEdgeInsets _preferredEdgeInsets;
}

+ (id)defaultStyle;
@property(retain, nonatomic) NSArray *preferredBackgroundEffects; // @synthesize preferredBackgroundEffects=_preferredBackgroundEffects;
@property(retain, nonatomic) UITraitCollection *preferredTraitCollection; // @synthesize preferredTraitCollection=_preferredTraitCollection;
@property(nonatomic) BOOL reversesActionOrderWhenAttachedToTop; // @synthesize reversesActionOrderWhenAttachedToTop=_reversesActionOrderWhenAttachedToTop;
@property(nonatomic) BOOL preventPreviewRasterization; // @synthesize preventPreviewRasterization=_preventPreviewRasterization;
@property(nonatomic) BOOL hasInteractivePreview; // @synthesize hasInteractivePreview=_hasInteractivePreview;
@property(nonatomic) struct UIEdgeInsets preferredEdgeInsets; // @synthesize preferredEdgeInsets=_preferredEdgeInsets;
@property(nonatomic) unsigned long long preferredLayout; // @synthesize preferredLayout=_preferredLayout;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) UIWindow *containerWindow; // @synthesize containerWindow=_containerWindow;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

