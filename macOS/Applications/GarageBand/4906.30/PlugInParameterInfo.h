//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface PlugInParameterInfo : NSObject
{
}

+ (id)newValueInfoForParameter:(long long)arg1 ofPlugIn:(struct AUDIOPLUGIN *)arg2 valueStringOnly:(BOOL)arg3;
+ (id)newParameterInfoForPlugIn:(struct AUDIOPLUGIN *)arg1 usingMap:(BOOL)arg2 allowingDynamicPopups:(BOOL)arg3 extendedParamsOnly:(BOOL)arg4;
+ (id)oneParameterDictForParameter:(int)arg1 ofPlugIn:(struct AUDIOPLUGIN *)arg2 extendedParamsOnly:(BOOL)arg3 allowingDynamicPopups:(BOOL)arg4;
+ (void)setParameterIDsOffByOne:(BOOL)arg1;

@end

