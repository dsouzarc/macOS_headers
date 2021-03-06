//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SKFileTransfer;

@interface FileTransferObject : NSObject
{
    SKFileTransfer *_transfer;
    NSString *_filename;
    NSString *_conversationIdentifier;
    NSString *_fullPath;
}

+ (id)fileTransferObjectWithFileTransfer:(id)arg1;
+ (void)setDownloadDirectoryURL:(id)arg1;
+ (id)downloadDirectoryURL;
@property(retain, nonatomic) NSString *fullPath; // @synthesize fullPath=_fullPath;
@property(copy, nonatomic) NSString *conversationIdentifier; // @synthesize conversationIdentifier=_conversationIdentifier;
@property(retain, nonatomic) NSString *filename; // @synthesize filename=_filename;
@property(readonly, nonatomic) SKFileTransfer *transfer; // @synthesize transfer=_transfer;
- (void).cxx_destruct;
- (BOOL)isEqualToFileTransfer:(id)arg1;
- (id)initWithFileTransfer:(id)arg1;
- (void)finalizeReceivedFile;
- (void)quarantineReceivedFile;
- (void)assignMetadataToReceivedFile;
- (id)senderDisplayNameAndHandle;
- (void)openFile;

@end

