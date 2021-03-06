//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <SearchFoundation/NSObject-Protocol.h>

@class NSData, NSDictionary, NSString, NSURL, SFActionItem;

@protocol SFTrack <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property(retain, nonatomic) SFActionItem *playAction;
@property(copy, nonatomic) NSURL *preview;
@property(nonatomic) BOOL highlighted;
@property(copy, nonatomic) NSString *duration;
@property(copy, nonatomic) NSString *number;
@property(copy, nonatomic) NSString *title;
@end

