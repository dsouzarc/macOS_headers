//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SDRFillParent-Protocol.h"

@class NSString, SDCSeriesStyle;

@interface SDCSeriesStyleColumnFill : NSObject <SDRFillParent>
{
    SDCSeriesStyle *m_style;
}

- (id)overrideFillNull;
- (id)overrideFillImage;
- (id)overrideFillAngleGradient;
- (id)overrideFillColor;
- (BOOL)isFillOverridden;
- (id)fill;
- (id)initWith:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

