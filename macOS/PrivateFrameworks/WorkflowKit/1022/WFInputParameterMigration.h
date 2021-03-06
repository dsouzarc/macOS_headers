//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <WorkflowKit/WFWorkflowMigration.h>

@interface WFInputParameterMigration : WFWorkflowMigration
{
}

+ (BOOL)workflowNeedsMigration:(id)arg1 fromClientVersion:(id)arg2;
- (void)migrateLegacyInputVariablesInParameterDictionary:(id)arg1 toVariable:(id)arg2;
- (void)recursivelyFindDictionaryWithKey:(id)arg1 inArray:(id)arg2 then:(CDUnknownBlockType)arg3;
- (void)recursivelyFindDictionaryWithKey:(id)arg1 inDictionary:(id)arg2 then:(CDUnknownBlockType)arg3;
- (void)recursivelyFindDictionaryWithKey:(id)arg1 inObject:(id)arg2 then:(CDUnknownBlockType)arg3;
- (id)findGetVariableActionProvidingInputToActionAtIndex:(long long)arg1 inWorkflow:(id)arg2;
- (id)findActionProvidingInputToActionAtIndex:(unsigned long long)arg1 inWorkflow:(id)arg2 reachedBeginning:(char *)arg3;
- (void)migrateWorkflow;

@end

