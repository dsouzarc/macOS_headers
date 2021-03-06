//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NewsCore/FCOperation.h>

@class FCCKContentDatabase, NSArray, NSError, NSMutableArray, NSMutableDictionary;

@interface FCCKContentBatchedFetchRecordsOperation : FCOperation
{
    FCCKContentDatabase *_database;
    NSArray *_recordIDs;
    NSArray *_desiredKeys;
    CDUnknownBlockType _fetchRecordsCompletionBlock;
    NSMutableArray *_remainingRecordIDBatches;
    NSMutableDictionary *_recordsByRecordID;
    NSMutableDictionary *_errorsByRecordID;
    NSError *_operationError;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSError *operationError; // @synthesize operationError=_operationError;
@property(retain, nonatomic) NSMutableDictionary *errorsByRecordID; // @synthesize errorsByRecordID=_errorsByRecordID;
@property(retain, nonatomic) NSMutableDictionary *recordsByRecordID; // @synthesize recordsByRecordID=_recordsByRecordID;
@property(retain, nonatomic) NSMutableArray *remainingRecordIDBatches; // @synthesize remainingRecordIDBatches=_remainingRecordIDBatches;
@property(copy, nonatomic) CDUnknownBlockType fetchRecordsCompletionBlock; // @synthesize fetchRecordsCompletionBlock=_fetchRecordsCompletionBlock;
@property(copy, nonatomic) NSArray *desiredKeys; // @synthesize desiredKeys=_desiredKeys;
@property(copy, nonatomic) NSArray *recordIDs; // @synthesize recordIDs=_recordIDs;
@property(retain, nonatomic) FCCKContentDatabase *database; // @synthesize database=_database;
- (void)_continueRefreshing;
- (void)operationWillFinishWithError:(id)arg1;
- (void)resetForRetry;
- (void)performOperation;
- (BOOL)validateOperation;
- (id)init;

@end

