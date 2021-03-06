//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface AddSelToArrangeController : NSObject
{
    BOOL _wasShown;
    BOOL _createNewTracks;
    BOOL _createNewRegions;
    BOOL _createNewRegions_enabled;
    BOOL _allFilesOnSelectedTrack;
    BOOL _allFilesAreStemsFromOneProject;
}

+ (id)sharedController;
@property(nonatomic) BOOL allFilesAreStemsFromOneProject; // @synthesize allFilesAreStemsFromOneProject=_allFilesAreStemsFromOneProject;
@property(nonatomic) BOOL allFilesOnSelectedTrack; // @synthesize allFilesOnSelectedTrack=_allFilesOnSelectedTrack;
@property(nonatomic) BOOL createNewRegions_enabled; // @synthesize createNewRegions_enabled=_createNewRegions_enabled;
@property(nonatomic) BOOL createNewRegions; // @synthesize createNewRegions=_createNewRegions;
@property(nonatomic) BOOL createNewTracks; // @synthesize createNewTracks=_createNewTracks;
@property(nonatomic) BOOL wasShown; // @synthesize wasShown=_wasShown;
- (int)showWithAllFilesOnSelectedTrack:(BOOL)arg1 createNewAudioRegionsEnabled:(BOOL)arg2;

@end

