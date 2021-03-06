//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXBlueprintMarker-Protocol.h>

@class NSArray, NSString;
@protocol SXComponent, SXComponentAnchor;

@interface SXBlueprintMarker : NSObject <SXBlueprintMarker>
{
    id <SXComponent> _leadingComponent;
    id <SXComponent> _trailingComponent;
    NSArray *_path;
    id <SXComponentAnchor> _componentAnchor;
    struct CGPoint _approximateLocation;
}

@property(retain, nonatomic) id <SXComponentAnchor> componentAnchor; // @synthesize componentAnchor=_componentAnchor;
@property(readonly, nonatomic) NSArray *path; // @synthesize path=_path;
@property(readonly, nonatomic) struct CGPoint approximateLocation; // @synthesize approximateLocation=_approximateLocation;
@property(readonly, nonatomic) id <SXComponent> trailingComponent; // @synthesize trailingComponent=_trailingComponent;
@property(readonly, nonatomic) id <SXComponent> leadingComponent; // @synthesize leadingComponent=_leadingComponent;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (BOOL)isEqualToMarker:(id)arg1;
- (id)initWithLeadingComponent:(id)arg1 trailingComponent:(id)arg2 approximateLocation:(struct CGPoint)arg3 path:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

