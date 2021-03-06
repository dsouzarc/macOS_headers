//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoImaging/PICompositionExportResult.h>

@class NSData, NSDictionary, NSURL;

@interface PICompositionExportAuxiliaryResult : PICompositionExportResult
{
    NSData *_companionImageData;
    NSURL *_companionVideoURL;
    NSDictionary *_auxiliaryImages;
    NSDictionary *_properties;
}

- (void).cxx_destruct;
@property(copy) NSDictionary *properties; // @synthesize properties=_properties;
@property(retain) NSDictionary *auxiliaryImages; // @synthesize auxiliaryImages=_auxiliaryImages;
@property(retain) NSURL *companionVideoURL; // @synthesize companionVideoURL=_companionVideoURL;
@property(retain) NSData *companionImageData; // @synthesize companionImageData=_companionImageData;

// Remaining properties
@property CDStruct_912cb5d2 inputSize; // @dynamic inputSize;

@end

