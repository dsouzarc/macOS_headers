//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSEvent;

@interface IXKeyEvent : NSObject
{
    NSEvent *_rawEvent;
    unsigned short _keyChar;
    unsigned long long _modifierFlags;
}

@property(readonly, nonatomic) unsigned long long modifierFlags; // @synthesize modifierFlags=_modifierFlags;
@property(readonly, nonatomic) unsigned short keyChar; // @synthesize keyChar=_keyChar;
@property(readonly, nonatomic) BOOL isARepeat;
@property(readonly, nonatomic) unsigned short keyCode;
- (void)dealloc;
- (id)initWithCurrentModifiers;
- (id)initWithEvent:(id)arg1 modifierOnly:(BOOL)arg2;

@end

