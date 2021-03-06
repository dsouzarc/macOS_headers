//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSHashTable, NSMapTable, NSMutableDictionary, NSMutableSet, NSString, VMUClassInfoMap, VMUNonOverlappingRangeArray, VMUTaskMemoryScanner;

@interface VMUObjectIdentifier : NSObject
{
    unsigned int _task;
    struct _CSTypeRef _symbolicator;
    BOOL _targetUsesObjc2runtime;
    CDUnknownBlockType _memoryReader;
    VMUTaskMemoryScanner *_scanner;
    struct libSwiftRemoteMirrorWrapper *_swiftMirror;
    NSString *_libSwiftRemoteMirrorPath;
    void *_libSwiftRemoteMirrorHandle;
    NSArray *_swiftMirrorMachOSections;
    struct _CSTypeRef _swiftCoreSymbolOwner;
    VMUClassInfoMap *_realizedIsaToClassInfo;
    VMUClassInfoMap *_unrealizedClassInfos;
    VMUClassInfoMap *_cfTypeIDToClassInfo;
    NSMutableDictionary *_nonobjectClassInfosDict;
    unsigned long long _coreFoundationCFTypeIsa;
    unsigned long long _foundationCFTypeIsa;
    unsigned long long _swiftClassCount;
    unsigned long long _cfClassCount;
    CDUnknownBlockType _isaTranslator;
    BOOL _fragileNonPointerIsas;
    NSMapTable *_isaToObjectLabelHandlerMap;
    NSMapTable *_itemCountToLabelStringUniquingMap;
    id *_labelStringUniquingMaps;
    id *_stringTypeDescriptions;
    NSMutableSet *_stringUniquingSet;
    NSHashTable *_objcRuntimeMallocBlocksHash;
    VMUNonOverlappingRangeArray *_targetProcessVMranges;
    unsigned long long _cfBooleanTrueAddress;
    unsigned long long _cfBooleanFalseAddress;
}

@property(readonly, nonatomic) VMUClassInfoMap *realizedClasses; // @synthesize realizedClasses=_realizedIsaToClassInfo;
@property(readonly, nonatomic) struct libSwiftRemoteMirrorWrapper *swiftMirror; // @synthesize swiftMirror=_swiftMirror;
@property(readonly, nonatomic) CDUnknownBlockType memoryReader; // @synthesize memoryReader=_memoryReader;
- (void).cxx_destruct;
- (id)initWithTask:(unsigned int)arg1;
- (void)loadSwiftReflectionLibrary;
- (void)_populateSwiftDebugVariables:(struct libSwiftRemoteMirrorWrapper *)arg1;
- (int)_populateSwiftReflectionInfo:(struct libSwiftRemoteMirrorWrapper *)arg1;
- (void *)_dlopenLibSwiftRemoteMirrorWithSymbolicator:(struct _CSTypeRef)arg1;
- (void *)_dlopenLibSwiftRemoteMirrorNearLibSwiftCoreWithSymbolicator:(struct _CSTypeRef)arg1 avoidSystem:(BOOL)arg2;
- (void *)_dlopenLibSwiftRemoteMirrorFromDir:(id)arg1;
- (unsigned short)_targetProcessSwiftReflectionVersion;
@property(readonly, nonatomic) NSString *swiftCoreSymbolOwnerPath;
- (id)_scanner;
- (struct _CSTypeRef)_symbolicator;
- (id)labelForMemory:(void *)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;
- (id)labelForMemory:(void *)arg1 length:(unsigned long long)arg2;
- (id)labelForMemory:(void *)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3 usingHandlerBlock:(CDUnknownBlockType)arg4;
- (id)labelForMallocBlock:(struct _VMURange)arg1 usingHandlerBlock:(CDUnknownBlockType)arg2;
- (id)labelForMallocBlock:(struct _VMURange)arg1;
- (id)labelFor__NSMallocBlock__:(void *)arg1;
- (id)labelForNSXPCConnection:(void *)arg1;
- (id)labelForNSXPCInterface:(void *)arg1;
- (id)labelForProtocol:(void *)arg1;
- (id)labelForOSXPCConnection:(void *)arg1;
- (id)labelForOSTransaction:(void *)arg1;
- (id)labelForOSDispatchQueue:(void *)arg1;
- (id)labelForOSDispatchMach:(void *)arg1;
- (id)labelForNSInlineData:(void *)arg1;
- (id)labelForNSConcreteMutableData:(void *)arg1;
- (id)labelForNSConcreteData:(void *)arg1;
- (id)labelForNSData:(void *)arg1;
- (id)labelForNSCFSet:(void *)arg1;
- (id)labelForNSSet:(void *)arg1;
- (id)labelForNSConcreteHashTable:(void *)arg1;
- (id)labelForNSCFDictionary:(void *)arg1;
- (id)labelForNSDictionary:(void *)arg1;
- (id)labelForNSArray:(void *)arg1;
- (id)labelForItemCount:(long long)arg1;
- (id)labelForNSDate:(void *)arg1;
- (id)labelForNSNumber:(void *)arg1;
- (id)labelForNSPathStore2:(void *)arg1;
- (id)labelForNSURL:(void *)arg1;
- (id)labelForNSConcreteAttributedString:(void *)arg1;
- (id)labelForNSCFStringAtRemoteAddress:(unsigned long long)arg1 printDetail:(BOOL)arg2;
- (id)labelForNSString:(void *)arg1 mappedSize:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3 printDetail:(BOOL)arg4;
- (id)labelForNSString:(void *)arg1;
- (id)uniquifyStringLabel:(id)arg1 stringType:(int)arg2 printDetail:(BOOL)arg3;
- (id)labelForTaggedPointer:(void *)arg1;
- (id)objectLabelHandlerForRemoteIsa:(unsigned long long)arg1;
- (void)buildIsaToObjectLabelHandlerMap;
- (id)osMajorMinorVersionString;
- (unsigned long long)addressOfSymbol:(const char *)arg1 inLibrary:(const char *)arg2;
- (struct _VMURange)vmRegionRangeForAddress:(unsigned long long)arg1;
- (void)findObjCclasses;
- (void)findCFTypes;
- (void)_faultClass:(unsigned long long)arg1 ofType:(int)arg2;
- (id)_returnFaultedClass:(unsigned long long)arg1 ofType:(int)arg2;
- (id)classInfoForMemory:(void *)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;
- (id)classInfoForMemory:(void *)arg1 length:(unsigned long long)arg2;
- (id)classInfoForNonobjectMemory:(void *)arg1 length:(unsigned long long)arg2;
- (id)_classInfoWithNonobjectType:(id)arg1 binaryPath:(id)arg2;
- (id)classInfoForObjectWithRange:(struct _VMURange)arg1;
- (void)enumerateAllClassInfosWithBlock:(CDUnknownBlockType)arg1;
- (void)enumerateRealizedClassInfosWithBlock:(CDUnknownBlockType)arg1;
- (id)objcRuntimeMallocBlocksHash;
- (unsigned long long)SwiftClassCount;
- (unsigned long long)ObjCclassCount;
- (unsigned long long)CFTypeCount;
- (void)dealloc;
- (id)initWithTask:(unsigned int)arg1 symbolicator:(struct _CSTypeRef)arg2 scanner:(id)arg3;
- (id)initWithTask:(unsigned int)arg1 symbolicator:(struct _CSTypeRef)arg2;

@end

