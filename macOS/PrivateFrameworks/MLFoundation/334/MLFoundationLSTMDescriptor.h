//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@interface MLFoundationLSTMDescriptor : NSObject <NSSecureCoding, NSCopying>
{
    BOOL _bias;
    BOOL _biDirectional;
    float _dropout;
    unsigned long long _inputSize;
    unsigned long long _hiddenSize;
    unsigned long long _numberOfLayers;
}

+ (BOOL)supportsSecureCoding;
+ (id)lstmDescriptorWithInputSize:(unsigned long long)arg1 hiddenSize:(unsigned long long)arg2 numberOfLayers:(unsigned long long)arg3 bias:(BOOL)arg4 biDirectional:(BOOL)arg5 dropout:(float)arg6;
+ (id)lstmDescriptorWithInputSize:(unsigned long long)arg1 hiddenSize:(unsigned long long)arg2 numberOfLayers:(unsigned long long)arg3;
@property(readonly, nonatomic) float dropout; // @synthesize dropout=_dropout;
@property(readonly, nonatomic) BOOL biDirectional; // @synthesize biDirectional=_biDirectional;
@property(readonly, nonatomic) BOOL bias; // @synthesize bias=_bias;
@property(readonly, nonatomic) unsigned long long numberOfLayers; // @synthesize numberOfLayers=_numberOfLayers;
@property(readonly, nonatomic) unsigned long long hiddenSize; // @synthesize hiddenSize=_hiddenSize;
@property(readonly, nonatomic) unsigned long long inputSize; // @synthesize inputSize=_inputSize;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)initWithInputSize:(unsigned long long)arg1 hiddenSize:(unsigned long long)arg2 numberOfLayers:(unsigned long long)arg3 bias:(BOOL)arg4 biDirectional:(BOOL)arg5 dropout:(float)arg6;
- (id)init;

@end

