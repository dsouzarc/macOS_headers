//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface WKEditCommandObjC : NSObject
{
    struct RefPtr<WebKit::WebEditCommandProxy> m_command;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct WebEditCommandProxy *)command;
- (id)initWithWebEditCommandProxy:(PassRefPtr_a848c359)arg1;

@end

