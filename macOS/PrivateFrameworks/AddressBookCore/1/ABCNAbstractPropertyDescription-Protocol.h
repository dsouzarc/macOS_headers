//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AddressBookCore/NSObject-Protocol.h>

@class ABCNContact, NSCoder;

@protocol ABCNAbstractPropertyDescription <NSObject>
- (void)decodeUsingCoder:(NSCoder *)arg1 contact:(ABCNContact *)arg2;
- (void)encodeUsingCoder:(NSCoder *)arg1 contact:(ABCNContact *)arg2;
- (void)copyFromContact:(ABCNContact *)arg1 to:(ABCNContact *)arg2;
- (BOOL)isEqualForContact:(ABCNContact *)arg1 other:(ABCNContact *)arg2;
- (id)init;
@end

