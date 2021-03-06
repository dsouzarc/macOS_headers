//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, PHObject;

__attribute__((visibility("hidden")))
@interface IPXExportFile : NSObject
{
    PHObject *_object;
    unsigned long long _resourceType;
    NSString *_fileType;
    NSString *_fileName;
    NSArray *_complementaryFiles;
}

+ (id)exportFileForFilePromiseProvider:(id)arg1;
+ (id)_xmpExportFileForAsset:(id)arg1;
+ (id)filesForPhotosObject:(id)arg1 exportOriginal:(BOOL)arg2 defaultImageUTI:(id)arg3;
+ (id)filesForPhotosObject:(id)arg1 exportOriginal:(BOOL)arg2 defaultImageUTI:(id)arg3 exportXMP:(BOOL)arg4;
+ (id)filesForExportOriginalAsset:(id)arg1 exportXMP:(BOOL)arg2 mainFileOnly:(BOOL)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *complementaryFiles; // @synthesize complementaryFiles=_complementaryFiles;
@property(retain, nonatomic) NSString *fileName; // @synthesize fileName=_fileName;
@property(readonly, nonatomic) NSString *fileType; // @synthesize fileType=_fileType;
@property(readonly, nonatomic) unsigned long long resourceType; // @synthesize resourceType=_resourceType;
@property(readonly, nonatomic) PHObject *object; // @synthesize object=_object;
- (id)description;
@property(readonly, nonatomic) NSString *fileNameAddition;
@property(readonly, nonatomic) NSString *defaultFileName;
@property(readonly, nonatomic) BOOL exportAsMaster;
- (id)initWithPhotosObject:(id)arg1 resourceType:(unsigned long long)arg2 fileType:(id)arg3;

@end

