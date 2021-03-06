//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSDContainerRemoveChildrenCommand.h"

#import "GSSPAutoEncodable-Protocol.h"

@interface TSDContainerRemoveDrawablesCommand : TSDContainerRemoveChildrenCommand <GSSPAutoEncodable>
{
}

- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (Class)inverseCommandClass;
- (id)initWithContext:(id)arg1 containerIdPath:(id)arg2 argsList:(id)arg3;
- (id)initWithContainer:(id)arg1 removingDrawables:(id)arg2 objectContext:(id)arg3;
- (void)populateGSSPCmdContainerRemoveDrawables:(id)arg1 withEncodeContext:(struct GSSPEncodeConversionContext *)arg2;
- (void)populateGSSPMessageInstance:(id)arg1 withContext:(struct GSSPEncodeConversionContext *)arg2;
- (id)newGsspMessageInstance;
- (id)gsspMessageInstance;
- (int)gsspSharingFlag;
- (id)initWithGSSPMessage:(id)arg1 andContext:(struct GSSPDecodeConversionContext *)arg2;

@end

