//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <MusicLibrary/_ML3DatabaseConnectionPoolDiagnostic.h>

@class NSArray;

@interface _ML3MutableDatabaseConnectionPoolDiagnostic : _ML3DatabaseConnectionPoolDiagnostic
{
}

@property(copy, nonatomic) NSArray *writerBusyConnections; // @dynamic writerBusyConnections;
@property(copy, nonatomic) NSArray *writerAvailableConnections; // @dynamic writerAvailableConnections;
@property(copy, nonatomic) NSArray *readerBusyConnections; // @dynamic readerBusyConnections;
@property(copy, nonatomic) NSArray *readerAvailableConnections; // @dynamic readerAvailableConnections;

@end

