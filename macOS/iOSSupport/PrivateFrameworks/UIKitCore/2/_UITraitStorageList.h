//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCoding-Protocol.h>

@class NSArray, NSSet;

__attribute__((visibility("hidden")))
@interface _UITraitStorageList : NSObject <NSCoding>
{
    id _topLevelObject;
    NSArray *_traitStorages;
    NSSet *_descendants;
}

@property(readonly, nonatomic) NSSet *descendants; // @synthesize descendants=_descendants;
@property(readonly, nonatomic) NSArray *traitStorages; // @synthesize traitStorages=_traitStorages;
@property(readonly, nonatomic) __weak id topLevelObject; // @synthesize topLevelObject=_topLevelObject;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTopLevelObject:(id)arg1 traitStorages:(id)arg2 descendants:(id)arg3;

@end

