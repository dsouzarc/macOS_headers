//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, _INPBIntentMetadata, _INPBString;

@protocol _INPBGetFileInformationIntent <NSObject>
@property(nonatomic) BOOL hasQualifier;
@property(nonatomic) int qualifier;
@property(nonatomic) BOOL hasPropertyName;
@property(nonatomic) int propertyName;
@property(readonly, nonatomic) BOOL hasIntentMetadata;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property(nonatomic) BOOL hasEntityType;
@property(nonatomic) int entityType;
@property(readonly, nonatomic) BOOL hasEntityName;
@property(retain, nonatomic) _INPBString *entityName;
- (int)StringAsQualifier:(NSString *)arg1;
- (NSString *)qualifierAsString:(int)arg1;
- (int)StringAsPropertyName:(NSString *)arg1;
- (NSString *)propertyNameAsString:(int)arg1;
- (int)StringAsEntityType:(NSString *)arg1;
- (NSString *)entityTypeAsString:(int)arg1;
@end

