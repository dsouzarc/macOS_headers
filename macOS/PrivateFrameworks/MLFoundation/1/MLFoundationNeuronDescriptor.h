//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MLFoundation/NSCopying-Protocol.h>

@class NSData;

@interface MLFoundationNeuronDescriptor : NSObject <NSCopying>
{
    int _neuronType;
    float _a;
    float _b;
    float _c;
    NSData *_data;
}

+ (id)neuronPReLUDescriptorWithData:(id)arg1;
+ (id)neuronDescriptorWithType:(int)arg1 a:(float)arg2 b:(float)arg3 c:(float)arg4;
+ (id)neuronDescriptorWithType:(int)arg1 a:(float)arg2 b:(float)arg3;
+ (id)neuronDescriptorWithType:(int)arg1 a:(float)arg2;
+ (id)neuronDescriptorWithType:(int)arg1;
+ (id)new;
@property(readonly, retain, nonatomic) NSData *data; // @synthesize data=_data;
@property(readonly, nonatomic) float c; // @synthesize c=_c;
@property(readonly, nonatomic) float b; // @synthesize b=_b;
@property(readonly, nonatomic) float a; // @synthesize a=_a;
@property(readonly, nonatomic) int neuronType; // @synthesize neuronType=_neuronType;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithType:(int)arg1 a:(float)arg2 b:(float)arg3 c:(float)arg4 data:(id)arg5;
- (id)description;
- (id)init;

@end

