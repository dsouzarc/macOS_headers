//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVChat;

@interface AVChatFeature : NSObject
{
    AVChat *_avChat;
}

- (void)setAVChat:(id)arg1;
@property AVChat *avChat; // @synthesize avChat=_avChat;
- (void)conferenceEndedWithReason:(unsigned int)arg1 andError:(int)arg2;
- (void)participantInvited:(id)arg1;
- (void)participantRemoved:(id)arg1;
- (unsigned int)addStatusForIMHandle:(id)arg1 asVideo:(BOOL)arg2 ardRole:(int)arg3;
- (void)participant:(id)arg1 changedFromState:(unsigned int)arg2 toState:(unsigned int)arg3;
- (BOOL)handleGenericAVMessageFromParticipant:(id)arg1 type:(unsigned int)arg2 userInfo:(id)arg3;
- (BOOL)hasAddableParticipantsOtherwiseStatus:(unsigned int *)arg1;
- (void)delegateChangedTo:(id)arg1;
- (void)dealloc;
- (id)initWithAVChat:(id)arg1;

@end

