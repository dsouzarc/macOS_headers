//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class CSPerson, NSArray, NSDate, NSString, NSURL, SGSimpleNamedEmailAddress;

@interface SGOrigin : NSObject <NSCopying, NSSecureCoding>
{
    unsigned long long _type;
    NSString *_sourceKey;
    NSString *_externalKey;
    NSString *_contextSnippet;
    struct _NSRange _contextSnippetRange;
    CSPerson *_fromPerson;
    NSString *_bundleId;
    NSArray *_to;
    NSArray *_cc;
    NSArray *_bcc;
    NSDate *_date;
    NSString *_title;
    NSString *_operatingSystemVersion;
    BOOL _shouldShowOperatingSystemVersion;
    BOOL _fromForwardedMessage;
    NSString *_localizedApplicationName;
    NSString *_teamId;
}

+ (id)originWithType:(unsigned long long)arg1 sourceKey:(id)arg2 externalKey:(id)arg3 fromForwardedMessage:(BOOL)arg4;
+ (id)originWithType:(unsigned long long)arg1 sourceKey:(id)arg2 externalKey:(id)arg3 bundleId:(id)arg4 fromForwardedMessage:(BOOL)arg5;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isFromForwardedMessage) BOOL fromForwardedMessage; // @synthesize fromForwardedMessage=_fromForwardedMessage;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) NSDate *date; // @synthesize date=_date;
@property(readonly, nonatomic) NSArray *bcc; // @synthesize bcc=_bcc;
@property(readonly, nonatomic) NSArray *cc; // @synthesize cc=_cc;
@property(readonly, nonatomic) NSArray *to; // @synthesize to=_to;
@property(readonly, nonatomic) NSString *teamId; // @synthesize teamId=_teamId;
@property(readonly, nonatomic) NSString *localizedApplicationName; // @synthesize localizedApplicationName=_localizedApplicationName;
@property(readonly, nonatomic) NSString *bundleId; // @synthesize bundleId=_bundleId;
@property(readonly, nonatomic) CSPerson *fromPerson; // @synthesize fromPerson=_fromPerson;
@property(readonly, nonatomic) NSString *externalKey; // @synthesize externalKey=_externalKey;
@property(readonly, nonatomic) NSString *sourceKey; // @synthesize sourceKey=_sourceKey;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
@property(readonly, nonatomic) struct _NSRange contextSnippetRange;
@property(readonly, nonatomic) NSString *contextSnippet;
@property(readonly, nonatomic) SGSimpleNamedEmailAddress *from;
- (unsigned long long)hash;
- (BOOL)isEqualToOrigin:(id)arg1;
- (BOOL)isEqual:(id)arg1;
@property(readonly, nonatomic) NSURL *url;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_resolveAppName;
- (id)initWithType:(unsigned long long)arg1 sourceKey:(id)arg2 externalKey:(id)arg3 bundleId:(id)arg4 fromForwardedMessage:(BOOL)arg5;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

