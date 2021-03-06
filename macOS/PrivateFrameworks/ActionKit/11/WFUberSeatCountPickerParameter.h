//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WFEnumerationParameter.h"

#import "WFActionEventObserver.h"

@class NSString, WFAction, WFUberProduct;

@interface WFUberSeatCountPickerParameter : WFEnumerationParameter <WFActionEventObserver>
{
    WFAction *_action;
    WFUberProduct *_product;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WFUberProduct *product; // @synthesize product=_product;
@property(retain, nonatomic) WFAction *action; // @synthesize action=_action;
- (void)action:(id)arg1 parameterStateDidChangeForKey:(id)arg2;
- (void)updateProduct;
- (BOOL)isHidden;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

