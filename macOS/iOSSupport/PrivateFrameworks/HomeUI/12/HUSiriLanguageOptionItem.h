//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Home/HFItem.h>

@class HFAccessorySettingSiriLanguageAdapter, HFSiriLanguageOption;

@interface HUSiriLanguageOptionItem : HFItem
{
    unsigned long long _optionStyle;
    HFAccessorySettingSiriLanguageAdapter *_adapter;
    HFSiriLanguageOption *_languageOption;
}

+ (id)selectionKeyForLanguageOption:(id)arg1 withOptionStyle:(unsigned long long)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) HFSiriLanguageOption *languageOption; // @synthesize languageOption=_languageOption;
@property(readonly, nonatomic) HFAccessorySettingSiriLanguageAdapter *adapter; // @synthesize adapter=_adapter;
@property(readonly, nonatomic) unsigned long long optionStyle; // @synthesize optionStyle=_optionStyle;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)initWithStyle:(unsigned long long)arg1 adapter:(id)arg2 languageOption:(id)arg3;

@end

