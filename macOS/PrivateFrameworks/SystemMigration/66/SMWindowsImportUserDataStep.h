//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SystemMigration/SMMigrationEngineStep.h>

@class SMWindowsMacPathMapper;

@interface SMWindowsImportUserDataStep : SMMigrationEngineStep
{
    SMWindowsMacPathMapper *windowsMacPathMap;
}

- (void).cxx_destruct;
@property(retain) SMWindowsMacPathMapper *windowsMacPathMap; // @synthesize windowsMacPathMap;
- (BOOL)importDataForUsername:(id)arg1 userID:(long long)arg2 homeDirectory:(id)arg3 parameters:(id)arg4 error:(id *)arg5;
- (double)estimatedTimeToCompletePhase:(unsigned long long)arg1;
- (id)postProcess;
- (id)initWithEngine:(id)arg1 pathMap:(id)arg2;

@end

