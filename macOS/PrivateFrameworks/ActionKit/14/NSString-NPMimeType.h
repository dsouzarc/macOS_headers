//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSString.h"

@interface NSString (NPMimeType)
+ (id)uniqueString;
+ (id)stringWithData:(id)arg1 encoding:(unsigned long long)arg2;
- (id)mimeType;
- (id)stringByStrippingTags;
- (id)stringByLinkifyingURLs;
- (id)stringByRemovingNewLinesAndWhitespace;
- (id)stringWithNewLinesAsBRs;
- (id)stringByEncodingHTMLEntities:(BOOL)arg1;
- (id)stringByEncodingHTMLEntities;
- (id)stringByDecodingHTMLEntities;
- (id)stringByConvertingHTMLToPlainText;
- (id)IFUnicodeURL_splitBeforeCharactersInSet:(id)arg1;
- (id)IFUnicodeURL_splitAfterString:(id)arg1;
- (id)ik_URLEncodedString;
@end

