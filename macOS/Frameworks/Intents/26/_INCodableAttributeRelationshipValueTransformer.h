//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSValueTransformer.h"

@class INCodableAttribute;

__attribute__((visibility("hidden")))
@interface _INCodableAttributeRelationshipValueTransformer : NSValueTransformer
{
    INCodableAttribute *_codableAttribute;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) __weak INCodableAttribute *codableAttribute; // @synthesize codableAttribute=_codableAttribute;
- (id)transformedValue:(id)arg1;
- (id)initWithCodableAttribute:(id)arg1;

@end

