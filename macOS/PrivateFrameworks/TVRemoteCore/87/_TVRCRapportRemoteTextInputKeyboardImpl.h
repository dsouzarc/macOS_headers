//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TVRemoteCore/RTIInputSystemPayloadDelegate-Protocol.h>
#import <TVRemoteCore/RTIInputSystemSessionDelegate-Protocol.h>
#import <TVRemoteCore/_TVRXKeyboardImpl-Protocol.h>

@class NSString, RTIInputSystemSourceSession, TVRCKeyboardAttributes, _TVRCRPCompanionLinkClientWrapper, _TVRXKeyboardController;

@interface _TVRCRapportRemoteTextInputKeyboardImpl : NSObject <RTIInputSystemSessionDelegate, RTIInputSystemPayloadDelegate, _TVRXKeyboardImpl>
{
    BOOL _editing;
    _TVRXKeyboardController *_keyboardController;
    _TVRCRPCompanionLinkClientWrapper *_companionLinkWrapper;
    RTIInputSystemSourceSession *_currentSession;
    TVRCKeyboardAttributes *_currentAttributes;
}

@property(retain, nonatomic) TVRCKeyboardAttributes *currentAttributes; // @synthesize currentAttributes=_currentAttributes;
@property(retain, nonatomic) RTIInputSystemSourceSession *currentSession; // @synthesize currentSession=_currentSession;
@property(nonatomic) BOOL editing; // @synthesize editing=_editing;
@property(retain, nonatomic) _TVRCRPCompanionLinkClientWrapper *companionLinkWrapper; // @synthesize companionLinkWrapper=_companionLinkWrapper;
@property(nonatomic) __weak _TVRXKeyboardController *keyboardController; // @synthesize keyboardController=_keyboardController;
- (void).cxx_destruct;
- (void)_receivedInputSourceSession:(id)arg1;
- (void)_stopObservingTelevisionEditingSession;
- (void)handleTextActionPayload:(id)arg1;
- (void)inputSessionDidDie:(id)arg1;
- (void)inputSessionDidEnd:(id)arg1;
- (void)inputSessionDidBegin:(id)arg1;
- (void)setTextActionPayload:(id)arg1;
- (void)sendReturnKey;
- (void)setText:(id)arg1;
- (id)text;
- (id)attributes;
- (BOOL)isEditing;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

