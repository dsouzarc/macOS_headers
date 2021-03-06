//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class AudioChatController;

@interface AudioConferenceView : NSView
{
    AudioChatController *_acController;
    unsigned long long _audioConferenceMode;
}

- (void)updateMouseTracking;
- (void)refreshMouseTracking;
- (void)_updateMouseTrackingAndRefresh:(BOOL)arg1;
- (void)recordingPermissionForgottenForParticipant:(id)arg1;
- (void)recordingPermissionDeniedForParticipant:(id)arg1;
- (void)recordingPermissionGrantedForParticipant:(id)arg1;
- (void)recordingPermissionRequestedForParticipant:(id)arg1;
- (void)disconnectParticipant:(id)arg1;
- (void)connectParticipant:(id)arg1;
- (void)startConnectingParticipant:(id)arg1;
- (id)participants;
- (BOOL)containsParticipantWithID:(id)arg1;
- (unsigned long long)participantCount;
- (void)removeParticipantWithID:(id)arg1;
- (void)addParticipants:(id)arg1;
- (void)addParticipant:(id)arg1;
- (void)_addParticipant:(id)arg1 saveNib:(BOOL)arg2;
- (id)_viewForParticipant:(id)arg1;
- (unsigned long long)_subviewIndexOfParticipantWithID:(id)arg1;
- (unsigned long long)_subviewIndexOfParticipant:(id)arg1;
- (void)setSpinnerValue:(double)arg1 forParticipant:(id)arg2;
- (void)setSpinnerVisibility:(int)arg1 forParticipant:(id)arg2;
- (void)_adjustHeight;
- (void)drawRect:(struct CGRect)arg1;
- (float)_heightAdjustmentForCount:(unsigned long long)arg1;
- (struct CGRect)_frameOfParticipantViewAtIndex:(unsigned long long)arg1;
- (BOOL)isFlipped;
- (void)concludeDragOperation:(id)arg1;
- (BOOL)performDragOperation:(id)arg1;
- (BOOL)prepareForDragOperation:(id)arg1;
- (void)draggingExited:(id)arg1;
- (unsigned long long)draggingUpdated:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (void)_highlightParticipant:(id)arg1;
- (id)_participantForDragInfo:(id)arg1;
- (unsigned long long)audioConferenceMode;
- (void)setAudioConferenceMode:(unsigned long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1 controller:(id)arg2;

@end

