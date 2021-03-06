//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TimeSync/NSCopying-Protocol.h>

@interface TSBonjourIPv6Address : NSObject <NSCopying>
{
    unsigned char _ipv6Address[16];
    unsigned char _linkLayerAddress[6];
    BOOL _hasLinkLayerAddress;
}

+ (BOOL)getLinkLayerAddress:(char *)arg1 forIPv6Address:(const char *)arg2 error:(id *)arg3;
@property(nonatomic) BOOL hasLinkLayerAddress; // @synthesize hasLinkLayerAddress=_hasLinkLayerAddress;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)pokeDestinationAtPort:(unsigned short)arg1 onInterfaceIndex:(unsigned int)arg2;
- (BOOL)getLinkLayerAddressError:(id *)arg1;
@property(readonly, nonatomic) const char *linkLayerAddress; // @dynamic linkLayerAddress;
@property(readonly, nonatomic) const char *ipv6Address;
- (id)initWithIPv6Address:(const char *)arg1;
- (id)init;

@end

