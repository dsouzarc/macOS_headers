//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <OfficeImport/OADShapeProperties.h>

@class OADConnection;

__attribute__((visibility("hidden")))
@interface OADConnectorProperties : OADShapeProperties
{
    OADConnection *mFrom;
    OADConnection *mTo;
}

+ (id)defaultProperties;
- (id)description;
- (id)to;
- (id)from;
- (void)dealloc;
- (id)init;
- (id)initWithDefaults;

@end

