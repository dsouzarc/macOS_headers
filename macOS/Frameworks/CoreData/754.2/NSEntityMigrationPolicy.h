//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface NSEntityMigrationPolicy : NSObject
{
}

- (id)_nonNilValueOrDefaultValueForAttribute:(id)arg1 source:(id)arg2 destination:(id)arg3;
- (BOOL)endEntityMapping:(id)arg1 manager:(id)arg2 error:(id *)arg3;
- (BOOL)performCustomValidationForEntityMapping:(id)arg1 manager:(id)arg2 error:(id *)arg3;
- (BOOL)endRelationshipCreationForEntityMapping:(id)arg1 manager:(id)arg2 error:(id *)arg3;
- (BOOL)createRelationshipsForDestinationInstance:(id)arg1 entityMapping:(id)arg2 manager:(id)arg3 error:(id *)arg4;
- (BOOL)endInstanceCreationForEntityMapping:(id)arg1 manager:(id)arg2 error:(id *)arg3;
- (BOOL)createDestinationInstancesForSourceInstance:(id)arg1 entityMapping:(id)arg2 manager:(id)arg3 error:(id *)arg4;
- (BOOL)beginEntityMapping:(id)arg1 manager:(id)arg2 error:(id *)arg3;

@end

