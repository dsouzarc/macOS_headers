//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MKAttributedStringVibrancySplitter;

__attribute__((visibility("hidden")))
@interface MKAttributedStringBlendingConfiguration : NSObject
{
    MKAttributedStringVibrancySplitter *_vibrancySplitter;
    long long _labelBlendingMode;
}

- (void).cxx_destruct;
- (void)applyToBackgroundTextField:(id)arg1 foregroundTextField:(id)arg2;
- (id)initWithAttributedString:(id)arg1 appearance:(id)arg2 blendingMode:(long long)arg3;

@end

