//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ActionKit/FATObject.h>

@class EDAMIdentity, NSNumber;

@interface EDAMIdentityForAdmin : FATObject
{
    EDAMIdentity *_identity;
    NSNumber *_state;
    NSNumber *_stateChanged;
}

+ (id)structFields;
+ (id)structName;
- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *stateChanged; // @synthesize stateChanged=_stateChanged;
@property(retain, nonatomic) NSNumber *state; // @synthesize state=_state;
@property(retain, nonatomic) EDAMIdentity *identity; // @synthesize identity=_identity;

@end

