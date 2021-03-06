//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class JSContext, NSArray, NSMutableArray, NSMutableDictionary, NSString;

@interface JSStorage : NSObject
{
    unsigned long long _errorNumber;
    unsigned long long _errorLineNum;
    unsigned long long _errorRangeStart;
    unsigned long long _errorRangeEnd;
    NSString *_errorMessage;
    NSString *_defaultTarget;
    CDUnknownFunctionPointerType _sendProc;
    CDUnknownFunctionPointerType _createProc;
    CDUnknownFunctionPointerType _createProgressProc;
    CDUnknownFunctionPointerType _releaseProgressProc;
    CDUnknownFunctionPointerType _activeProc;
    CDUnknownFunctionPointerType _resumeDispatchProc;
    void *_sendRefCon;
    void *_createRefCon;
    void *_activeRefCon;
    void *_resumeDispatchRefCon;
    void *_createProgressRefCon;
    void *_releaseProgressRefCon;
    NSArray *_sourceStyleAttributes;
    JSContext *_conversionContext;
    NSArray *_globalProperties;
    struct ComponentInstanceRecord *_componentInstance;
    NSMutableDictionary *_objects;
    NSMutableArray *_contextsBeingInspected;
}

+ (id)storageWithComponentInstance:(struct ComponentInstanceRecord *)arg1;
@property(retain) NSMutableArray *contextsBeingInspected; // @synthesize contextsBeingInspected=_contextsBeingInspected;
@property(retain) NSMutableDictionary *objects; // @synthesize objects=_objects;
@property struct ComponentInstanceRecord *componentInstance; // @synthesize componentInstance=_componentInstance;
@property(retain) NSArray *globalProperties; // @synthesize globalProperties=_globalProperties;
@property(retain) JSContext *conversionContext; // @synthesize conversionContext=_conversionContext;
@property(retain) NSArray *sourceStyleAttributes; // @synthesize sourceStyleAttributes=_sourceStyleAttributes;
@property void *releaseProgressRefCon; // @synthesize releaseProgressRefCon=_releaseProgressRefCon;
@property void *createProgressRefCon; // @synthesize createProgressRefCon=_createProgressRefCon;
@property void *resumeDispatchRefCon; // @synthesize resumeDispatchRefCon=_resumeDispatchRefCon;
@property void *activeRefCon; // @synthesize activeRefCon=_activeRefCon;
@property void *createRefCon; // @synthesize createRefCon=_createRefCon;
@property void *sendRefCon; // @synthesize sendRefCon=_sendRefCon;
@property CDUnknownFunctionPointerType resumeDispatchProc; // @synthesize resumeDispatchProc=_resumeDispatchProc;
@property CDUnknownFunctionPointerType activeProc; // @synthesize activeProc=_activeProc;
@property CDUnknownFunctionPointerType releaseProgressProc; // @synthesize releaseProgressProc=_releaseProgressProc;
@property CDUnknownFunctionPointerType createProgressProc; // @synthesize createProgressProc=_createProgressProc;
@property CDUnknownFunctionPointerType createProc; // @synthesize createProc=_createProc;
@property CDUnknownFunctionPointerType sendProc; // @synthesize sendProc=_sendProc;
@property(retain) NSString *defaultTarget; // @synthesize defaultTarget=_defaultTarget;
@property(retain) NSString *errorMessage; // @synthesize errorMessage=_errorMessage;
@property unsigned long long errorRangeEnd; // @synthesize errorRangeEnd=_errorRangeEnd;
@property unsigned long long errorRangeStart; // @synthesize errorRangeStart=_errorRangeStart;
@property unsigned long long errorLineNum; // @synthesize errorLineNum=_errorLineNum;
@property unsigned long long errorNumber; // @synthesize errorNumber=_errorNumber;
- (void).cxx_destruct;
- (void)setDefaultTargetOnAllContexts;
- (void)setSendProcOnAllContexts;
- (void)setActiveProcOnAllContexts;
- (void)setIsEvaluating:(BOOL)arg1 forContext:(unsigned int)arg2;
- (long long)getValueForInfoSelector:(unsigned int)arg1 withID:(unsigned int)arg2;
- (void)setValue:(long long)arg1 forInfoSelector:(unsigned int)arg2 withID:(unsigned int)arg3;
- (void)scriptHasBeenExecutedInContext:(unsigned int)arg1;
- (void)scriptShouldBeExecutedInContext:(unsigned int)arg1;
- (BOOL)shouldScriptBeExecutedInContext:(unsigned int)arg1;
- (id)makeContextForID:(unsigned int)arg1;
- (id)displayStringForID:(unsigned int)arg1;
- (id)sourceStringForID:(unsigned int)arg1;
- (BOOL)isResult:(unsigned int)arg1;
- (BOOL)isContext:(unsigned int)arg1;
- (BOOL)isScript:(unsigned int)arg1;
- (void)setScript:(id)arg1 forID:(unsigned int)arg2;
- (id)scriptForID:(unsigned int)arg1;
- (void)setContext:(id)arg1 forID:(unsigned int)arg2;
- (id)contextForID:(unsigned int)arg1;
- (id)resultForID:(unsigned int)arg1;
- (id)scriptContextForID:(unsigned int)arg1;
- (int)dispose:(unsigned int)arg1;
- (id)itemForID:(unsigned int)arg1;
- (unsigned int)addLogString:(id)arg1;
- (unsigned int)addResult:(id)arg1;
- (unsigned int)addContext:(id)arg1;
- (unsigned int)addScript:(id)arg1;
- (unsigned int)getUnusedID;
- (void)inspectorDidDisconnect:(id)arg1;
- (void)contextDidFinishBeingInspected:(id)arg1;
- (void)contextWillBeInspected:(id)arg1;
- (void)stopObservingInspectedContext:(id)arg1;
- (void)startObservingInspectedContext:(id)arg1;
- (void)dealloc;
- (id)initWithComponentInstance:(struct ComponentInstanceRecord *)arg1;
- (void)storeErrorInfoForScript:(id)arg1 exception:(id)arg2 message:(id)arg3;
- (int)makeContextWithNameData:(const struct AEDesc *)arg1 parentContext:(unsigned int)arg2 resultingContextID:(unsigned int *)arg3;
- (int)handleEvent:(const struct AEDesc *)arg1 inContext:(unsigned int)arg2 modeFlags:(int)arg3 resultingReply:(struct AEDesc *)arg4;
- (int)handleEvent:(const struct AEDesc *)arg1 inContext:(unsigned int)arg2 modeFlags:(int)arg3 resultingResultID:(unsigned int *)arg4;
- (int)getResumeDispatchProc:(CDUnknownFunctionPointerType *)arg1 refCon:(void **)arg2;
- (int)setResumeDispatchProc:(CDUnknownFunctionPointerType)arg1 refCon:(void *)arg2;
- (int)compileScriptData:(const struct AEDesc *)arg1 executeInContext:(unsigned int)arg2 desiredType:(unsigned int)arg3 modeFlags:(int)arg4 resultingResultData:(struct AEDesc *)arg5;
- (int)compileScriptData:(const struct AEDesc *)arg1 executeInContext:(unsigned int)arg2 modeFlags:(int)arg3 resultingResultID:(unsigned int *)arg4;
- (int)loadScriptData:(const struct AEDesc *)arg1 executeInContext:(unsigned int)arg2 modeFlags:(int)arg3 resultingResultID:(unsigned int *)arg4;
- (int)stopRecording:(unsigned int)arg1;
- (int)startRecording:(unsigned int *)arg1;
- (int)setDefaultTargetFromDesc:(const struct AEDesc *)arg1;
- (int)getReleaseProgressProc:(CDUnknownFunctionPointerType *)arg1 refCon:(void **)arg2;
- (int)setReleaseProgressProc:(CDUnknownFunctionPointerType)arg1 refCon:(void *)arg2;
- (int)getCreateProgressProc:(CDUnknownFunctionPointerType *)arg1 refCon:(void **)arg2;
- (int)setCreateProgressProc:(CDUnknownFunctionPointerType)arg1 refCon:(void *)arg2;
- (int)getCreateProc:(CDUnknownFunctionPointerType *)arg1 refCon:(void **)arg2;
- (int)setCreateProc:(CDUnknownFunctionPointerType)arg1 refCon:(void *)arg2;
- (int)getActiveProc:(CDUnknownFunctionPointerType *)arg1 refCon:(void **)arg2;
- (int)setActiveProc:(CDUnknownFunctionPointerType)arg1 refCon:(void *)arg2;
- (int)getSendProc:(CDUnknownFunctionPointerType *)arg1 refCon:(void **)arg2;
- (int)setSendProc:(CDUnknownFunctionPointerType)arg1 refCon:(void *)arg2;
- (int)coerceFromDesc:(const struct AEDesc *)arg1 modeFlags:(int)arg2 resultingItemID:(unsigned int *)arg3;
- (int)coerceToDesc:(unsigned int)arg1 desiredType:(unsigned int)arg2 modeFlags:(int)arg3 resultingDesc:(struct AEDesc *)arg4;
- (int)setSourceAttributes:(struct __CFArray *)arg1;
- (int)copySourceAttributes:(const struct __CFArray **)arg1;
- (id)_unarchiveSourceAttributes:(id)arg1;
- (id)_defaultSourceAttributes;
- (int)getSourceStyleNamesWithModeFlags:(int)arg1 result:(struct AEDesc *)arg2;
- (int)copySourceStringForScript:(unsigned int)arg1 modeFlags:(int)arg2 resultingSourceString:(const struct __CFAttributedString **)arg3;
- (id)styleString:(id)arg1;
- (void)styleAttributedString:(id)arg1 inRange:(struct _NSRange)arg2;
- (int)getSourceForID:(unsigned int)arg1 desiredType:(unsigned int)arg2 resultingDesc:(struct AEDesc *)arg3;
- (int)copyScript:(unsigned int)arg1 resultingScriptID:(unsigned int *)arg2;
- (int)copyItem:(unsigned int)arg1 resultingItemID:(unsigned int *)arg2;
- (int)compileScriptData:(const struct AEDesc *)arg1 modeFlags:(int)arg2 scriptID:(unsigned int *)arg3;
- (int)getScriptingComponentName:(struct AEDesc *)arg1;
- (int)getInfoForItem:(unsigned int)arg1 infoSelector:(unsigned int)arg2 resultingResult:(long long *)arg3;
- (int)setInfoForItem:(unsigned int)arg1 infoSelector:(unsigned int)arg2 value:(long long)arg3;
- (int)disposeItem:(unsigned int)arg1;
- (int)getErrorDetail:(unsigned int)arg1 desiredType:(unsigned int)arg2 resultingErrorData:(struct AEDesc *)arg3;
- (int)copyAttributedStringForItem:(unsigned int)arg1 modeFlags:(int)arg2 resultingAttributedString:(const struct __CFAttributedString **)arg3;
- (int)displayResult:(unsigned int)arg1 desiredType:(unsigned int)arg2 modeFlags:(int)arg3 resultingResultData:(struct AEDesc *)arg4;
- (int)executeScript:(unsigned int)arg1 inContext:(unsigned int)arg2 modeFlags:(int)arg3 resultingResultID:(unsigned int *)arg4;
- (id)evaluateScript:(id)arg1 inContextID:(unsigned int)arg2;
- (void)teardownContextAfterExecution:(unsigned int)arg1;
- (void)setupContextForExecution:(unsigned int)arg1;
- (void)propagateTargetAndProcsToContext:(id)arg1;
- (void)teardownProgressInContext:(id)arg1;
- (void)setupProgressInContext:(id)arg1;
- (int)storeScript:(unsigned int)arg1 desiredType:(unsigned int)arg2 modeFlags:(int)arg3 resultingScriptData:(struct AEDesc *)arg4;
- (int)loadScriptData:(const struct AEDesc *)arg1 modeFlags:(int)arg2 resultingScriptID:(unsigned int *)arg3;
- (int)canPerformCommand:(short)arg1;
- (int)closeComponent:(struct ComponentInstanceRecord *)arg1;

@end

