//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MKAnnotation-Protocol.h"

@class NSString, NVRAPMapViewController;

__attribute__((visibility("hidden")))
@interface RAPMapPickerPinAnnotation : NSObject <MKAnnotation>
{
    NVRAPMapViewController *_owner;
    NSString *_title;
    NSString *_subtitle;
    struct CLLocationCoordinate2D _coordinate;
}

@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) struct CLLocationCoordinate2D coordinate; // @synthesize coordinate=_coordinate;
- (void).cxx_destruct;
- (id)initWithOwner:(id)arg1 title:(id)arg2 coordinate:(struct CLLocationCoordinate2D)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

