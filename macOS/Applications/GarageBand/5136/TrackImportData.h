//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSMutableArray, NSMutableDictionary, NSString, TrackImportAssignments;

@interface TrackImportData : NSObject
{
    NSMutableArray *_tiDataArray;
    TrackImportAssignments *trackImportAssignments;
    struct CDocumentLogic *_sourceDoc;
    int _alternativeIndex;
    BOOL _fCloseSong;
    NSString *_path;
    int _filter;
    struct CDocumentLogic *_doc;
    NSData *_udataArrange;
    short _trackNameFormat;
    BOOL _songError;
    CDStruct_eac64580 _smpteLockedInfo;
    NSMutableDictionary *_auxImportDialogAddAllDictionary;
}

- (void)loadProjectSettingsWithValues:(id)arg1;
- (void)replaceTrack:(struct TPosOneBasedTrackNr)arg1;
- (void)addTracks:(struct TPosOneBasedTrackNr)arg1;
- (void)uncheckInvisibleImportOptions;
- (void)uncheckAllImportOptions;
- (void)setObjectValue:(id)arg1 forTrack:(long long)arg2 identifier:(id)arg3 selectedTracks:(id)arg4;
- (void)setObjectValue:(id)arg1 forTrack:(long long)arg2 identifier:(id)arg3;
- (void)forGroupedByStacksExtendCheckboxValue:(id)arg1 forTrack:(long long)arg2 identifier:(id)arg3 selectedTracks:(id)arg4;
- (void)forGroupedBySameCSOsExtendCheckboxValue:(id)arg1 identifier:(id)arg2;
- (void)setObjectValue:(id)arg1 identifier:(id)arg2 tracks:(id)arg3;
- (id)objectForTrack:(long long)arg1 identifier:(id)arg2;
- (long long)numberOfTracks;
- (id)tiDataArrayWithFilter:(int)arg1;
- (id)tiDataArray;
- (void)setFilter:(int)arg1;
- (int)filter;
- (int)alternativeIndex;
- (id)path;
- (void)dealloc;
- (BOOL)songIsValid:(struct CDocumentLogic *)arg1;
- (BOOL)songError;
- (id)initWithSongPath:(id)arg1 destinationDocument:(struct CDocumentLogic *)arg2 alternativeIndex:(long long)arg3;
- (void)reparseTracksWithTSeqID:(int)arg1;
- (BOOL)parseTracksWithSongPath:(id)arg1 alternativeIndex:(long long)arg2;
- (short)name2show;
- (short)f_trackshow;
- (short)f_NameFormat:(short)arg1;
- (id)get_udataArrange;
- (id)get_udataArrange:(id)arg1 alternativeIndex:(int)arg2;
- (id)get_udataArrangeWithStateDict:(id)arg1 slot:(int)arg2;
- (id)screensetDictAtSlot:(int)arg1 screensetDictArray:(id)arg2;
- (void)removeNotifications;
- (void)addNotifications;
- (void)trackImportUndo:(id)arg1;
- (id)init;
- (void)ReadImportTracksDstSong:(struct CSong *)arg1 srcSong:(struct CSong *)arg2 import:(int)arg3 destTrackNr:(struct TPosOneBasedTrackNr)arg4 vonMutterIndex:(int)arg5 trackNameFormat:(short)arg6;
- (void)undoHistoryRedo;
- (void)undoHistoryUndo;
- (void)undoHistoryAdd;
- (void)trackImportGlobalTracksDstSong:(struct CSong *)arg1 srcSong:(struct CSong *)arg2 import:(int)arg3;
- (void)getSMPTEStartPositionsDstSong:(struct CSong *)arg1 srcSong:(struct CSong *)arg2;
- (void)askUserSMPTELockedEventsImportOptionSong:(struct CSong *)arg1;
- (BOOL)hasSMPTELockedEventsSong:(struct CSong *)arg1;
- (BOOL)selectionIsSMPTERelevantTiDataArray:(id)arg1;
- (id)informativeText:(struct CSong *)arg1;
- (int)trackImportArrangeTracksDstSong:(struct CSong *)arg1 srcSong:(struct CSong *)arg2 tiDataArray:(id)arg3 import:(int)arg4 dstSeqID:(int)arg5 srcSeqID:(int)arg6 trackNr:(short *)arg7 dstTrackNr:(struct TPosOneBasedTrackNr)arg8 trackNameFormat:(short)arg9 importOptions:(id)arg10 searchfile:(struct SEARCH_FILE *)arg11 inRecursion:(BOOL)arg12 laterRoutingDict:(id)arg13;
- (int)trackImportCopyDstSong:(struct CSong *)arg1 srcSong:(struct CSong *)arg2 tiDataArray:(id)arg3 dstSeqID:(int)arg4 srcSeqID:(int)arg5 seqID:(int)arg6 dstTrackNr:(struct TPosOneBasedTrackNr)arg7 srcTrackNr:(struct TPosOneBasedTrackNr)arg8 importOptions:(id)arg9 recursive:(int)arg10 searchfile:(struct SEARCH_FILE *)arg11 laterRoutingDict:(id)arg12;
- (void)trackImportEDrummerDstSong:(struct CSong *)arg1 srcSong:(struct CSong *)arg2 dstInstID:(int)arg3 srcInstID:(int)arg4 dstSeqID:(int)arg5 srcSeqID:(int)arg6 dstTrackNr:(struct TPosOneBasedTrackNr)arg7 srcTrackNr:(struct TPosOneBasedTrackNr)arg8;
- (void)setDestinationDocument:(struct CDocumentLogic *)arg1;
- (struct CSong *)destinationSong;
- (struct CDocumentLogic *)destinationDocument;
- (void)setSourceDocument:(struct CDocumentLogic *)arg1;
- (struct CSong *)sourceSong;
- (struct CDocumentLogic *)sourceDocument;

@end

