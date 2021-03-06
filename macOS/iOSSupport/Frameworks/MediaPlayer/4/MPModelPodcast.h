//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlayer/MPModelObject.h>

@class MPModelPodcastAuthor, NSString, NSURL;

@interface MPModelPodcast : MPModelObject
{
}

+ (id)__artworkCatalogBlock_KEY;
+ (id)__author_KEY;
+ (id)__supportsSubscription_KEY;
+ (id)__shareURL_KEY;
+ (id)__feedURL_KEY;
+ (id)__title_KEY;
+ (id)kindWithEpisodeKind:(id)arg1;
- (id)artworkCatalog;
- (id)humanDescription;

// Remaining properties
@property(copy, nonatomic) CDUnknownBlockType artworkCatalogBlock; // @dynamic artworkCatalogBlock;
@property(retain, nonatomic) MPModelPodcastAuthor *author; // @dynamic author;
@property(copy, nonatomic) NSURL *feedURL; // @dynamic feedURL;
@property(copy, nonatomic) NSURL *shareURL; // @dynamic shareURL;
@property(nonatomic) BOOL supportsSubscription; // @dynamic supportsSubscription;
@property(copy, nonatomic) NSString *title; // @dynamic title;

@end

