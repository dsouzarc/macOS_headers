//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <EmailFoundation/EFPair.h>

#import "EFSQLBitExpressable.h"
#import "EFSQLExpressable.h"

@class NSString;

@interface EFSQLBetweenExpression : EFPair <EFSQLBitExpressable, EFSQLExpressable>
{
    BOOL _between;
    id <EFSQLExpressable> _left;
}

@property(readonly, nonatomic) BOOL between; // @synthesize between=_between;
@property(readonly, nonatomic) id <EFSQLExpressable> left; // @synthesize left=_left;
- (void).cxx_destruct;
- (void)setColumnExpression:(id)arg1;
@property(readonly, copy, nonatomic) NSString *ef_SQLExpression;
- (id)initWithLeft:(id)arg1 firstValue:(id)arg2 secondValue:(id)arg3 between:(BOOL)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

