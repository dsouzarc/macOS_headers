//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface LPUglifyOptionsHolder : NSObject
{
    NSDictionary *_flags;
    NSString *_definesString;
    NSString *_reservedNamesString;
    BOOL _createSourceMap;
    BOOL _writeBothConcatenatedAndMinifiedFile;
    BOOL _writeBothCancatenatedAndMinifiedFile;
}

@property(nonatomic) BOOL writeBothCancatenatedAndMinifiedFile; // @synthesize writeBothCancatenatedAndMinifiedFile=_writeBothCancatenatedAndMinifiedFile;
@property(nonatomic) BOOL createSourceMap; // @synthesize createSourceMap=_createSourceMap;
@property(copy, nonatomic) NSString *reservedNamesString; // @synthesize reservedNamesString=_reservedNamesString;
@property(copy, nonatomic) NSString *definesString; // @synthesize definesString=_definesString;
@property(copy, nonatomic) NSDictionary *flags; // @synthesize flags=_flags;
- (void)dealloc;

@end

