//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <QuickLookSupport/NSSecureCoding-Protocol.h>

@class NSString;

@interface QLUTIAnalyzer : NSObject <NSSecureCoding>
{
    NSString *_contentType;
}

+ (BOOL)supportsSecureCoding;
+ (BOOL)isTypeAudioOnly:(id)arg1;
+ (id)privateUTIFromFileName:(id)arg1;
+ (BOOL)_shouldOverrideUTIForZip;
+ (id)UTIForURL:(id)arg1;
+ (id)removeSpacesFromString:(id)arg1;
@property(readonly) NSString *contentType; // @synthesize contentType=_contentType;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)isAudioOnly;
- (id)initWithURL:(id)arg1;
- (id)initWithContentType:(id)arg1;

@end

