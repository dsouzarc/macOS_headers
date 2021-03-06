//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AudioDSPManager/adm_ConfigurationChangeRequest.h>

#import "NSSecureCoding.h"
#import "adm_JSONSerializable.h"
#import "dspd_DeactivationChangeRequest.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface adm_DeactivationChangeRequest : adm_ConfigurationChangeRequest <adm_JSONSerializable, NSSecureCoding, dspd_DeactivationChangeRequest>
{
}

+ (BOOL)supportsSecureCoding;
- (BOOL)isEqual:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (basic_json_058021e8)adm_toJSON;
- (id)initWithSession:(unsigned int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) unsigned int session;
@property(readonly) Class superclass;

@end

