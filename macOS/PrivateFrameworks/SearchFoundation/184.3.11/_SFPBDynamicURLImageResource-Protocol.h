//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <SearchFoundation/NSObject-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString, _SFPBGraphicalFloat, _SFPBImageOption;

@protocol _SFPBDynamicURLImageResource <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(copy, nonatomic) NSArray *imageOptions;
@property(readonly, nonatomic) BOOL hasSupportsResizing;
@property(nonatomic) BOOL supportsResizing;
@property(readonly, nonatomic) BOOL hasFormatURL;
@property(copy, nonatomic) NSString *formatURL;
@property(readonly, nonatomic) BOOL hasPixelHeight;
@property(retain, nonatomic) _SFPBGraphicalFloat *pixelHeight;
@property(readonly, nonatomic) BOOL hasPixelWidth;
@property(retain, nonatomic) _SFPBGraphicalFloat *pixelWidth;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (_SFPBImageOption *)imageOptionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)imageOptionsCount;
- (void)addImageOptions:(_SFPBImageOption *)arg1;
- (void)clearImageOptions;
@end

