//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CRKCourse, NSString;

@interface CRKExpiredCourseAlertText : NSObject
{
    CRKCourse *_course;
}

+ (id)new;
- (void).cxx_destruct;
@property(readonly, nonatomic) CRKCourse *course; // @synthesize course=_course;
@property(readonly, nonatomic) NSString *message;
@property(readonly, nonatomic) NSString *acknowledgeOptionTitle;
@property(readonly, nonatomic) NSString *title;
- (id)initWithCourse:(id)arg1;
- (id)init;

@end

