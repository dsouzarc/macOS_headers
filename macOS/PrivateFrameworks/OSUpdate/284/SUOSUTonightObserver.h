//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <OSUpdate/SUOSULaterObserver.h>

@class SUPowerAssertionManager;

@interface SUOSUTonightObserver : SUOSULaterObserver
{
    BOOL _installTaskSuccessfullyFired;
    SUPowerAssertionManager *_powerAssertionManager;
}

- (void).cxx_destruct;
@property(retain) SUPowerAssertionManager *powerAssertionManager; // @synthesize powerAssertionManager=_powerAssertionManager;
@property BOOL installTaskSuccessfullyFired; // @synthesize installTaskSuccessfullyFired=_installTaskSuccessfullyFired;
- (id)_stringFromDate:(id)arg1;
- (void)_scheduleCancellationTask;
- (void)_scheduleInstallTask;
- (void)disarmLaterObserver;
- (void)armObserver;

@end

