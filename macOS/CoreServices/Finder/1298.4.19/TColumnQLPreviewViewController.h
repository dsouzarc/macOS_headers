//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TPropertyQLPreviewViewController.h"

@interface TColumnQLPreviewViewController : TPropertyQLPreviewViewController
{
    _Bool _isApplicableToUI;
}

+ (id)keyPathsForValuesAffectingShouldBeVisible;
@property(nonatomic, getter=isApplicableToUI) _Bool applicableToUI; // @synthesize applicableToUI=_isApplicableToUI;
- (_Bool)shouldBeVisible;
- (_Bool)isApplicableToNodes:(const struct TFENodeVector *)arg1;
- (id)qlPreviewView;
- (void)dealloc;
- (void)viewLoaded;
- (void)initCommon;

@end

