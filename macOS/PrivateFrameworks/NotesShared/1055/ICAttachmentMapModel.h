//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <NotesShared/ICAttachmentModel.h>

@interface ICAttachmentMapModel : ICAttachmentModel
{
}

+ (id)contentInfoTextWithAttachmentCount:(unsigned long long)arg1;
- (BOOL)shouldSyncPreviewImageToCloud:(id)arg1;
- (BOOL)canConvertToHTMLForSharing;
- (id)attributesForSharingHTMLWithTagName:(id *)arg1 textContent:(id *)arg2;
- (void)addLocation;
- (id)MKMapItem;
- (BOOL)hasPreviews;
- (BOOL)preferLocalPreviewImages;
- (BOOL)previewsSupportMultipleAppearances;

@end

