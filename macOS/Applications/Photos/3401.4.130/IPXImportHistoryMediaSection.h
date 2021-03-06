//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "IPXMondrianViewMediaSection.h"

@class NSDate, NSDictionary, NSString;

@interface IPXImportHistoryMediaSection : IPXMondrianViewMediaSection
{
    BOOL _displayTime;
    NSDate *_importDate;
    NSDictionary *_importedOnLabelAttributes;
    NSDictionary *_importedDateLabelAttributes;
    NSDictionary *_importedCountLabelAttributes;
}

@property(readonly, nonatomic) NSDictionary *importedCountLabelAttributes; // @synthesize importedCountLabelAttributes=_importedCountLabelAttributes;
@property(readonly, nonatomic) NSDictionary *importedDateLabelAttributes; // @synthesize importedDateLabelAttributes=_importedDateLabelAttributes;
@property(readonly, nonatomic) NSDictionary *importedOnLabelAttributes; // @synthesize importedOnLabelAttributes=_importedOnLabelAttributes;
@property(nonatomic) BOOL displayTime; // @synthesize displayTime=_displayTime;
@property(readonly, nonatomic) NSDate *importDate; // @synthesize importDate=_importDate;
- (void).cxx_destruct;
- (id)_localizedStringFormattedDate:(id)arg1;
- (id)_dateFormatter;
@property(readonly, nonatomic) NSString *localizedImportCount;
@property(readonly, nonatomic) NSString *localizedImportDate;
- (id)attributedSubtitle;
- (id)attributedTitle;
- (id)itemForMediaItem:(id)arg1;
- (void)updateMediaItem:(id)arg1 withItem:(id)arg2;
- (id)newMediaItemForItem:(id)arg1;
- (id)uuidForItem:(id)arg1;
- (id)initWithOwningDataSource:(id)arg1 itemsCollection:(id)arg2;

@end

