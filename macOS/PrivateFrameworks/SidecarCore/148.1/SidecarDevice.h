//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SidecarCore/NSSecureCoding-Protocol.h>

@class NSString, NSURL, NSUUID;

@interface SidecarDevice : NSObject <NSSecureCoding>
{
    NSUUID *_identifier;
    NSString *_model;
    NSString *_name;
    unsigned long long _status;
    NSString *_version;
    long long _rapportVersion;
    NSString *_deviceTypeIdentifier;
    unsigned long long _generation;
}

+ (id)imageURLForDeviceTypeIdentifier:(id)arg1;
+ (id)allDevices;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSURL *imageURL;
@property(readonly, nonatomic) NSString *localizedDeviceType;
@property(readonly, nonatomic) NSString *deviceTypeIdentifier;
@property(nonatomic) unsigned long long status;
@property(readonly, nonatomic) _Bool hasHomeButton;
@property(readonly, nonatomic) long long rapportVersion;
@property(readonly, nonatomic) NSString *version;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) NSString *model;
@property(readonly, nonatomic) NSUUID *identifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)_updateFromDevice:(id)arg1 generation:(unsigned long long)arg2;
- (id)initWithIdentifier:(id)arg1 model:(id)arg2 name:(id)arg3;
- (id)initWithIdentifier:(id)arg1 model:(id)arg2 name:(id)arg3 version:(id)arg4;

@end

