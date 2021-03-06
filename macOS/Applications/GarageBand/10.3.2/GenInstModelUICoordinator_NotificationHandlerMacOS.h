//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GenInstModelUICoordinator_NotificationHandlerProtocol.h"

@class EcTimer, NSString;

@interface GenInstModelUICoordinator_NotificationHandlerMacOS : NSObject <GenInstModelUICoordinator_NotificationHandlerProtocol>
{
    BOOL _needsRegenerateAtEndOfRunloop;
    BOOL _needsUpdateSelectionAtEndOfRunloop;
    BOOL _needsUpdateCharacterAtEndOfRunloop;
    BOOL _needsUpdateLibraryAtEndOfRunloop;
    BOOL _needsUpdateAfterTrackRemove;
    BOOL _regenerateNotificationsAreAdded;
    BOOL _uiNotificationsAreAdded;
    BOOL _delegateRespondsToHandleClockChanged;
    id <GenInstModelUICoordinator_NotificationHandlerDelegateProtocol> _delegate;
    EcTimer *_timer;
}

@property(retain) EcTimer *timer; // @synthesize timer=_timer;
@property BOOL delegateRespondsToHandleClockChanged; // @synthesize delegateRespondsToHandleClockChanged=_delegateRespondsToHandleClockChanged;
@property id <GenInstModelUICoordinator_NotificationHandlerDelegateProtocol> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) BOOL uiNotificationsAreAdded; // @synthesize uiNotificationsAreAdded=_uiNotificationsAreAdded;
@property(nonatomic) BOOL regenerateNotificationsAreAdded; // @synthesize regenerateNotificationsAreAdded=_regenerateNotificationsAreAdded;
@property BOOL needsUpdateAfterTrackRemove; // @synthesize needsUpdateAfterTrackRemove=_needsUpdateAfterTrackRemove;
@property BOOL needsUpdateLibraryAtEndOfRunloop; // @synthesize needsUpdateLibraryAtEndOfRunloop=_needsUpdateLibraryAtEndOfRunloop;
@property BOOL needsUpdateCharacterAtEndOfRunloop; // @synthesize needsUpdateCharacterAtEndOfRunloop=_needsUpdateCharacterAtEndOfRunloop;
@property BOOL needsUpdateSelectionAtEndOfRunloop; // @synthesize needsUpdateSelectionAtEndOfRunloop=_needsUpdateSelectionAtEndOfRunloop;
@property BOOL needsRegenerateAtEndOfRunloop; // @synthesize needsRegenerateAtEndOfRunloop=_needsRegenerateAtEndOfRunloop;
- (void)handleUndoNotification:(id)arg1;
- (void)handleGeneratorJobFinishedNotification:(id)arg1;
- (void)handleCharacterUpdateNotification:(id)arg1;
- (void)handleLibraryDidLoadNotification:(id)arg1;
- (void)handleUM_CHSIGNTIME:(id)arg1;
- (void)handleUM_CHTEMPO:(id)arg1;
- (void)handleUM_CH_DRUMMER:(id)arg1;
- (void)handleUM_MSEQPAR:(id)arg1;
- (void)handleUM_DELEV:(id)arg1;
- (void)handleUM_GEDIT:(id)arg1;
- (void)handleUM_NEWPATRACK:(id)arg1;
- (void)handleUM_PATRACK:(id)arg1;
- (void)handleUM_RECTRACK:(id)arg1;
- (void)handleUM_CLOCK:(id)arg1;
- (void)handleUM_REGIONINSPECTOR:(id)arg1;
- (void)handleUM_CHSEL:(id)arg1;
- (void)timerCallback:(id)arg1;
- (void)stopTimer;
- (void)scheduleTimer;
- (void)removeUINotifications;
- (void)addUINotifications;
- (void)removeRegenerateNotifications;
- (void)addRegenerateNotifications;
- (void)resetDelegate;
- (struct CSong *)song;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

