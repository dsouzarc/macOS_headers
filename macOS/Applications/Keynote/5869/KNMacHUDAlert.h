//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface KNMacHUDAlert : NSObject
{
    NSString *_messageText;
    NSString *_informativeText;
    NSString *_firstButtonTitle;
    NSString *_secondButtonTitle;
}

@property(copy, nonatomic) NSString *secondButtonTitle; // @synthesize secondButtonTitle=_secondButtonTitle;
@property(copy, nonatomic) NSString *firstButtonTitle; // @synthesize firstButtonTitle=_firstButtonTitle;
@property(copy, nonatomic) NSString *informativeText; // @synthesize informativeText=_informativeText;
@property(copy, nonatomic) NSString *messageText; // @synthesize messageText=_messageText;
- (void).cxx_destruct;
- (long long)runModalOverWindow:(id)arg1;

@end

