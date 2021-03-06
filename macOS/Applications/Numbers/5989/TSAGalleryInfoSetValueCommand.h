//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSKCommand.h"

#import "GSSPAutoEncodable-Protocol.h"

@class NSObject, TSAGalleryInfo, TSUUUIDPath;
@protocol NSCopying;

@interface TSAGalleryInfoSetValueCommand : TSKCommand <GSSPAutoEncodable>
{
    TSUUUIDPath *_drawableInfoIdPath;
    long long _galleryInfoProperty;
    long long _galleryInfoCaptionMode;
    BOOL _definedGalleryInfoCaptionMode;
    int _property;
    NSObject<NSCopying> *_value;
    NSObject<NSCopying> *_oldValue;
}

@property(readonly, nonatomic) NSObject<NSCopying> *value; // @synthesize value=_value;
@property(readonly, nonatomic) int property; // @synthesize property=_property;
- (void).cxx_destruct;
- (void)p_setValuesBasedOnProperty;
- (void)p_saveOldValues;
- (void)p_do:(id)arg1;
- (void)transformWithOperationTransformer:(id)arg1;
- (id)operations;
- (id)p_updateIdOperation;
- (id)p_propertyNameForTransform;
- (void)p_registerSOSValues;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (void)rollback;
- (id)makeInverse;
- (BOOL)supportsCollaboration;
- (void)redo;
- (void)undo;
- (void)commit;
- (BOOL)process;
- (id)actionString;
- (void)didInitFromSOS;
@property(readonly, nonatomic) TSAGalleryInfo *info;
- (id)initWithGalleryInfo:(id)arg1 property:(int)arg2 boxedValue:(id)arg3;
- (void)populateGSSPCmdGalleryInfoSetValueCommand:(id)arg1 withEncodeContext:(struct GSSPEncodeConversionContext *)arg2;
- (void)populateGSSPMessageInstance:(id)arg1 withContext:(struct GSSPEncodeConversionContext *)arg2;
- (id)newGsspMessageInstance;
- (id)gsspMessageInstance;
- (int)gsspSharingFlag;
- (id)initWithGSSPMessage:(id)arg1 andContext:(struct GSSPDecodeConversionContext *)arg2;

@end

