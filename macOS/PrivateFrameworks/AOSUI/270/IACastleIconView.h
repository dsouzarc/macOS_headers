//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class NSImage;

@interface IACastleIconView : NSView
{
    NSImage *_icon;
    BOOL _enabled;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSImage *icon; // @synthesize icon=_icon;
@property(nonatomic) BOOL enabled; // @synthesize enabled=_enabled;
- (id)accessibilityAttributeValue:(id)arg1;
- (BOOL)accessibilityIsIgnored;
- (void)drawRect:(struct CGRect)arg1;

@end

