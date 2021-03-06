//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class PathPolicyManager;

@interface CoalescingDomainHolder : NSObject
{
    struct CoalescingDomain _coalescingDomain;
    PathPolicyManager *_pathPolicyManager;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (id)pathIDForPath:(void *)arg1 lookup:(BOOL)arg2;
- (BOOL)removeCCEntryForHost:(id)arg1;
- (shared_ptr_2a8298cb)updateCoalescingConnectionWithHost:(id)arg1 ipAddrs:(id)arg2;
- (shared_ptr_2a8298cb)coalescingCoalescingConnectionHost:(id)arg1 ipAddrs:(id)arg2;
- (void)addCoalescingConnectionHost:(id)arg1 withDNSRecord:(id)arg2 peerCerts:(id)arg3 trustData:(id)arg4 description:(id)arg5;
- (id)coalescingConnectionHostForRequestHost:(id)arg1;
- (id)init;

@end

