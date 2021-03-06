//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "DDHidDevice.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface DDHidJoystick : DDHidDevice
{
    NSMutableArray *mSticks;
    NSMutableArray *mButtonElements;
    NSMutableArray *mLogicalDeviceElements;
    id mDelegate;
}

+ (id)allJoysticks;
- (void)addElementsToDefaultQueue;
- (void)setDelegate:(id)arg1;
- (void)addElementsToQueue:(id)arg1;
- (id)objectInSticksAtIndex:(unsigned int)arg1;
- (unsigned int)countOfSticks;
- (unsigned int)numberOfButtons;
- (id)buttonElements;
- (int)logicalDeviceCount;
- (void)dealloc;
- (id)initLogicalWithDevice:(unsigned int)arg1 logicalDeviceNumber:(int)arg2 error:(id *)arg3;
- (BOOL)findStick:(unsigned int *)arg1 povNumber:(unsigned int *)arg2 element:(id *)arg3 withCookie:(unsigned int)arg4;
- (BOOL)findStick:(unsigned int *)arg1 otherAxis:(unsigned int *)arg2 element:(id *)arg3 withCookie:(unsigned int)arg4;
- (BOOL)findStick:(unsigned int *)arg1 element:(id *)arg2 withYAxisCookie:(unsigned int)arg3;
- (BOOL)findStick:(unsigned int *)arg1 element:(id *)arg2 withXAxisCookie:(unsigned int)arg3;
- (int)povValue:(int)arg1 forElement:(id)arg2;
- (int)normalizeValue:(int)arg1 forElement:(id)arg2;
- (void)ddhidQueueHasEvents:(id)arg1;
- (void)addStick:(id)arg1;
- (void)initJoystickElements:(id)arg1;
- (void)initLogicalDeviceElements;
- (void)ddhidJoystick:(id)arg1 buttonUp:(unsigned int)arg2;
- (void)ddhidJoystick:(id)arg1 buttonDown:(unsigned int)arg2;
- (void)ddhidJoystick:(id)arg1 stick:(unsigned int)arg2 povNumber:(unsigned int)arg3 valueChanged:(int)arg4;
- (void)ddhidJoystick:(id)arg1 stick:(unsigned int)arg2 otherAxis:(unsigned int)arg3 valueChanged:(int)arg4;
- (void)ddhidJoystick:(id)arg1 stick:(unsigned int)arg2 yChanged:(int)arg3;
- (void)ddhidJoystick:(id)arg1 stick:(unsigned int)arg2 xChanged:(int)arg3;

@end

