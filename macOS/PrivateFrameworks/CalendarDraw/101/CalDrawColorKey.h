//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString;

@interface CalDrawColorKey : NSObject <NSCopying>
{
    NSString *_styleRef;
}

+ (id)colorKeyForConstantColor:(id)arg1;
+ (id)colorKeyForNSColor:(id)arg1;
+ (id)colorKeyForCGColor:(struct CGColor *)arg1;
@property(copy) NSString *styleRef; // @synthesize styleRef=_styleRef;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)init;

@end

