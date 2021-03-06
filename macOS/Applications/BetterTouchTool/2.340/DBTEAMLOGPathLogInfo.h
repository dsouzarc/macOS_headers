//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DBSerializable.h"
#import "NSCopying.h"

@class DBTEAMLOGNamespaceRelativePathLogInfo, NSString;

@interface DBTEAMLOGPathLogInfo : NSObject <DBSerializable, NSCopying>
{
    NSString *_contextual;
    DBTEAMLOGNamespaceRelativePathLogInfo *_namespaceRelative;
}

+ (id)deserialize:(id)arg1;
+ (id)serialize:(id)arg1;
@property(readonly, nonatomic) DBTEAMLOGNamespaceRelativePathLogInfo *namespaceRelative; // @synthesize namespaceRelative=_namespaceRelative;
@property(readonly, copy, nonatomic) NSString *contextual; // @synthesize contextual=_contextual;
- (void).cxx_destruct;
- (BOOL)isEqualToPathLogInfo:(id)arg1;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithNamespaceRelative:(id)arg1;
- (id)initWithNamespaceRelative:(id)arg1 contextual:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

