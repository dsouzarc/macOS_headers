//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_semaphore>;

__attribute__((visibility("hidden")))
@interface MTLToolsPointerArray : NSObject
{
    unsigned long long _pointerAdditions;
    struct unordered_set<void *, std::__1::hash<void *>, std::__1::equal_to<void *>, std::__1::allocator<void *>> _pointerSet;
    NSObject<OS_dispatch_semaphore> *_semaphore;
    unsigned int _options;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned long long)count;
- (void)enumeratePointersUsingBlock:(CDUnknownBlockType)arg1;
- (void)removeObjectAssociatedWithBaseObject:(id)arg1;
- (id)newObjectAssociatedWithBaseObject:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)objectAssociatedWithBaseObject:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)_objectAssociatedWithBaseObject:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)removePointer:(void *)arg1;
- (void)addPointer:(void *)arg1;
- (void)_addPointer:(void *)arg1;
- (void)dealloc;
- (id)initWithOptions:(unsigned int)arg1;

@end

