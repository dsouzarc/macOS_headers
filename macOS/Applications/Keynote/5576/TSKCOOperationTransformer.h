//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class TSKCOOperationTransformHistory, TSPObject;
@protocol TSKCOIntermediateOperationEnumerator;

@interface TSKCOOperationTransformer : NSObject <NSCopying>
{
    BOOL _isHigherPriority;
    TSKCOOperationTransformHistory *_history;
    TSPObject *_delegate;
    NSObject<TSKCOIntermediateOperationEnumerator> *_enumerator;
}

+ (id)transformerWithLocallyOriginatedIncomingCommands:(id)arg1 acknowledgingOutgoingCommands:(id)arg2;
+ (id)transformerWithRemotelyOriginatedIncomingCommands:(id)arg1;
@property(readonly, nonatomic) NSObject<TSKCOIntermediateOperationEnumerator> *enumerator; // @synthesize enumerator=_enumerator;
@property(nonatomic) __weak TSPObject *delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)saveToArchiver:(id)arg1 message:(struct OperationTransformer *)arg2;
- (id)initWithUnarchiver:(id)arg1 message:(const struct OperationTransformer *)arg2;
- (id)description;
@property(readonly, nonatomic) BOOL hasOperations;
- (void)appendOperation:(id)arg1;
- (id)transformOperations:(id)arg1;
- (id)transformUpdateRangeOperation:(id)arg1;
- (id)transformReplaceRangeOperation:(id)arg1;
- (id)transformUpdateIdOperation:(id)arg1;
- (id)transformIdPlacementBaseOperation:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithOperationEnumerator:(id)arg1;
- (id)initWithOperationEnumerator:(id)arg1 isHigherPriority:(BOOL)arg2;
- (unsigned long long)p_appendOperationsFromInducedCommandsInIncomingCommands:(id)arg1 precedingOutgoingCommand:(id)arg2 atIndex:(unsigned long long)arg3 outgoingCommandIdentifiers:(id)arg4 numberOfInducedCommandsAlreadyAppended:(unsigned long long)arg5;

@end

