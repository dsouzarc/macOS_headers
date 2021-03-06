//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotosUI/PHProjectElement.h>

#import "NSSecureCoding.h"

@class NSArray, NSString, PHCloudIdentifier;

@interface PHProjectAssetElement : PHProjectElement <NSSecureCoding>
{
    BOOL _horizontallyFlipped;
    BOOL _verticallyFlipped;
    PHCloudIdentifier *_cloudAssetIdentifier;
    NSString *_annotation;
    NSArray *_regionsOfInterest;
    struct CGRect _cropRect;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL verticallyFlipped; // @synthesize verticallyFlipped=_verticallyFlipped;
@property(readonly, nonatomic) BOOL horizontallyFlipped; // @synthesize horizontallyFlipped=_horizontallyFlipped;
@property(retain, nonatomic) NSArray *regionsOfInterest; // @synthesize regionsOfInterest=_regionsOfInterest;
@property(nonatomic) struct CGRect cropRect; // @synthesize cropRect=_cropRect;
@property(retain, nonatomic) NSString *annotation; // @synthesize annotation=_annotation;
@property(readonly, nonatomic) PHCloudIdentifier *cloudAssetIdentifier; // @synthesize cloudAssetIdentifier=_cloudAssetIdentifier;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description:(BOOL)arg1;
- (id)initWithAssetIdentifier:(id)arg1 weight:(id)arg2 placement:(struct CGRect)arg3;
- (id)initWithAssetIdentifier:(id)arg1 weight:(id)arg2 placement:(struct CGRect)arg3 horizontallyFlipped:(BOOL)arg4 verticallyFlipped:(BOOL)arg5;

@end

