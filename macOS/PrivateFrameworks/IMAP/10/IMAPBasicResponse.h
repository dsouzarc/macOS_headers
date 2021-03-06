//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IMAP/IMAPResponse.h>

@class NSData, NSString;

@interface IMAPBasicResponse : IMAPResponse
{
    NSData *_userData;
    long long _responseCode;
    id _responseInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id responseInfo; // @synthesize responseInfo=_responseInfo;
@property(nonatomic) long long responseCode; // @synthesize responseCode=_responseCode;
@property(readonly, nonatomic) BOOL descriptionIncludesUserString;
- (id)description;
- (id)debugDescription;
@property(readonly, copy, nonatomic) NSString *userString;
@property(copy, nonatomic) NSData *userData;
- (const char *)_responseName;

@end

