//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface iTermAPIScriptLauncher : NSObject
{
}

+ (id)environmentForScript:(id)arg1 checkForMain:(BOOL)arg2;
+ (id)prospectivePythonPathForPyenvScriptNamed:(id)arg1;
+ (void)didFailToLaunchScript:(id)arg1 withException:(id)arg2;
+ (void)revealFailedScriptInConsole:(id)arg1;
+ (void)waitForTask:(id)arg1 readFromPipe:(id)arg2 historyEntry:(id)arg3;
+ (id)argumentsToRunScript:(id)arg1 withVirtualEnv:(id)arg2 pythonVersion:(id)arg3;
+ (id)environmentFromEnvironment:(id)arg1 shell:(id)arg2 cookie:(id)arg3 key:(id)arg4;
+ (void)tryLaunchScript:(id)arg1 historyEntry:(id)arg2 key:(id)arg3 withVirtualEnv:(id)arg4 pythonVersion:(id)arg5;
+ (void)reallyLaunchScript:(id)arg1 fullPath:(id)arg2 withVirtualEnv:(id)arg3 pythonVersion:(id)arg4 explicitUserAction:(BOOL)arg5;
+ (id)inferredPythonVersionFromScriptAt:(id)arg1;
+ (void)launchScript:(id)arg1 fullPath:(id)arg2 withVirtualEnv:(id)arg3 setupCfgPath:(id)arg4 explicitUserAction:(BOOL)arg5;
+ (id)pythonVersionForScript:(id)arg1;
+ (void)launchScript:(id)arg1 explicitUserAction:(BOOL)arg2;

@end

