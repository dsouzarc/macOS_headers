//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSArray, NSManagedObject, NSManagedObjectContext;

@protocol _DPRecordConverter
- (NSArray *)updateRecords:(NSArray *)arg1 inManagedObjectContext:(NSManagedObjectContext *)arg2;
- (NSArray *)insertRecords:(NSArray *)arg1 inManagedObjectContext:(NSManagedObjectContext *)arg2;
- (BOOL)copyRecord:(id <_DPStorageMOConversion>)arg1 intoManagedObject:(NSManagedObject *)arg2;
- (id <_DPStorageMOConversion>)createRecordFromManagedObject:(NSManagedObject *)arg1;
@end

