//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ClassKit/CLSObject.h>

@class NSDate, NSString;

@interface CLSAbstractHandout : CLSObject
{
    NSString *_title;
    NSString *_instructions;
    NSDate *_dueDate;
    NSDate *_dateOfPublication;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)mergeWithObject:(id)arg1;
- (id)dictionaryRepresentation;
@property(retain, nonatomic) NSDate *dateOfPublication;
@property(retain, nonatomic) NSDate *dueDate;
@property(copy, nonatomic) NSString *instructions;
@property(copy, nonatomic) NSString *title;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_init;
- (id)init;

@end

