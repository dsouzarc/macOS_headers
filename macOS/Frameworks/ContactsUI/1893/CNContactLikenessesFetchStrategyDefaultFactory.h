//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsUI/CNContactLikenessesFetchStrategyFactory-Protocol.h>

@class CNContactStore, CNUIMeContactMonitor, CNUIPRLikenessResolver, PRPersonaStore;

@interface CNContactLikenessesFetchStrategyDefaultFactory : NSObject <CNContactLikenessesFetchStrategyFactory>
{
    CNContactStore *_contactStore;
    CNUIMeContactMonitor *_meContactMonitor;
    PRPersonaStore *_personaStore;
    CNUIPRLikenessResolver *_likenessResolver;
}

@property(retain, nonatomic) CNUIPRLikenessResolver *likenessResolver; // @synthesize likenessResolver=_likenessResolver;
@property(retain, nonatomic) PRPersonaStore *personaStore; // @synthesize personaStore=_personaStore;
@property(retain, nonatomic) CNUIMeContactMonitor *meContactMonitor; // @synthesize meContactMonitor=_meContactMonitor;
@property(retain, nonatomic) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
- (void).cxx_destruct;
- (id)strategyForContact:(id)arg1;
- (id)initWithMeContactMonitor:(id)arg1 personaStore:(id)arg2 likenessResolver:(id)arg3 contactStore:(id)arg4;

@end

