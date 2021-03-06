//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSUUID, PBCodable;

@interface __NSURLSessionStatistics : NSObject
{
    void *report;
    PBCodable *_awdReport;
    NSUUID *_externallyVisibleNwActivity;
    NSArray *_externallyVisibleConnectionUUIDs;
}

+ (void)fillCFNetworkTransactionMetricStruct:(CDStruct_24822730 *)arg1 from:(id)arg2;
+ (int)getNetworkProtocol:(id)arg1;
+ (int)getTaskType:(id)arg1;
+ (CDStruct_51b7dc78 *)createCFNetworkTaskMetrics_s:(id)arg1;
+ (void)reportMetricsToSymptoms:(id)arg1;
- (void).cxx_destruct;
@property(retain) NSArray *externallyVisibleConnectionUUIDs; // @synthesize externallyVisibleConnectionUUIDs=_externallyVisibleConnectionUUIDs;
@property(retain) NSUUID *externallyVisibleNwActivity; // @synthesize externallyVisibleNwActivity=_externallyVisibleNwActivity;
@property(readonly, nonatomic) PBCodable *awdReport;
@property(readonly, nonatomic) unsigned int awdMetricID;
@property(readonly, nonatomic) NSArray *connectionUUIDS;
@property(readonly, nonatomic) NSUUID *taskUUID;
@property(readonly, nonatomic) NSUUID *nwActivity;
- (void)dealloc;
- (id)initWithPBCodableData:(id)arg1;
- (id)initWithCFNetworkReport:(void *)arg1 length:(long long)arg2;

@end

