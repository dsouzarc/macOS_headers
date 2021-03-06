//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSButton.h>

#import "NCMaterialDelegate-Protocol.h"

@interface NCConfigButton : NSButton <NCMaterialDelegate>
{
    _Bool _showsNewIndicator;
    double _titleWidth;
}

+ (Class)cellClass;
@property(nonatomic) double titleWidth; // @synthesize titleWidth=_titleWidth;
@property(nonatomic) _Bool showsNewIndicator; // @synthesize showsNewIndicator=_showsNewIndicator;
- (void)_setIndicatorImage;
- (struct CGSize)intrinsicContentSize;
- (void)setTitle:(id)arg1;
- (void)awakeFromNib;
- (void)appearanceChanged:(_Bool)arg1;
- (void)materialChanged:(unsigned char)arg1;
- (void)dealloc;

@end

