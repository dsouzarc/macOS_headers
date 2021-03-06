//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "EFLoggable.h"

@class EDMailboxPersistence, NSObject<OS_dispatch_queue>, NSString;

@interface EDMailboxRepository : NSObject <EFLoggable>
{
    EDMailboxPersistence *_mailboxPersistence;
    NSObject<OS_dispatch_queue> *_serializationQueue;
}

+ (id)log;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *serializationQueue; // @synthesize serializationQueue=_serializationQueue;
@property(retain, nonatomic) EDMailboxPersistence *mailboxPersistence; // @synthesize mailboxPersistence=_mailboxPersistence;
- (void).cxx_destruct;
- (BOOL)_performRenameMailboxChangeAction:(id)arg1;
- (BOOL)_performMoveMailboxChangeAction:(id)arg1;
- (BOOL)_performDeleteMailboxChangeAction:(id)arg1;
- (BOOL)_performCreateMailboxChangeAction:(id)arg1;
- (void)refreshMailboxList;
- (void)performMailboxChangeAction:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)cancelObservation:(id)arg1;
- (void)startObservingMailboxChangesWithChangeObserver:(id)arg1 observationIdentifier:(id)arg2;
- (void)getMailboxesWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithMailboxPersistence:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

