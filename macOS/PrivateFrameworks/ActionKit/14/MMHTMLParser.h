//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MMHTMLParser : NSObject
{
}

- (void)_parseAttributesWithScanner:(id)arg1;
- (BOOL)_parseAttributeValueWithScanner:(id)arg1;
- (BOOL)_parseStringWithScanner:(id)arg1;
- (struct _NSRange)_parseNameWithScanner:(id)arg1;
- (id)_parseLenientBlockTagWithScanner:(id)arg1;
- (BOOL)_parseEndTag:(id)arg1 withScanner:(id)arg2;
- (id)_parseStrictBlockTagWithScanner:(id)arg1;
- (id)parseInlineTagWithScanner:(id)arg1;
- (id)parseCommentWithScanner:(id)arg1;
- (id)parseBlockTagWithScanner:(id)arg1;

@end

