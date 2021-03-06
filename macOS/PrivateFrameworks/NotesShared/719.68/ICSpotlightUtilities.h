//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ICSpotlightUtilities : NSObject
{
}

+ (BOOL)deleteObsoletedExternalRecordsForPersistentStore:(id)arg1;
+ (id)externalRecordsDirectoryForModernNotes;
+ (id)externalRecordsBaseDirectory;
+ (void)invalidateAllExternalRecords;
+ (void)invalidateAllExternalRecordsIfImporterVersionHasChanged;
+ (id)noteTitleFromSearchIndexableTitle:(id)arg1 contentText:(id)arg2 suffix:(id)arg3;
+ (id)contentTextUsingBlockingOperationIfNeededFromSearchIndexable:(id)arg1;
+ (id)contentTextFromSearchStrings:(id)arg1;
+ (id)attributeSetWithoutPerformingAdditionalOperationsFromSearchIndexable:(id)arg1;
+ (id)attributeSetFromSearchIndexable:(id)arg1;
+ (id)attributeSetFromSearchIndexable:(id)arg1 contentText:(id)arg2;

@end

