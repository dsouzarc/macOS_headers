//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ExchangeWebServices/EWSBasePathToElementType.h>

#import "XSDefinitionProvider.h"

@class NSString;

@interface EWSPathToUnindexedFieldType : EWSBasePathToElementType <XSDefinitionProvider>
{
    long long _FieldURI;
}

+ (id)definition;
@property(nonatomic) long long FieldURI; // @synthesize FieldURI=_FieldURI;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

