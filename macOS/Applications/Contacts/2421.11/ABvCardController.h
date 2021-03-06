//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ABImportPanelController.h"

@class NSMutableArray, NSString;

@interface ABvCardController : ABImportPanelController
{
    BOOL _importingFiles;
    unsigned long long _currentItemIndex;
    NSMutableArray *_importItems;
    long long _totalDataCount;
    NSString *_promisedPath;
    BOOL _showImportConfirmation;
    BOOL _ignoresGuardianRestrictions;
}

+ (id)emptyMemoryBackedAddressBookWithCustomPropertyDefinitions;
+ (void)displayExportFailureMessage;
+ (void)savePanelDidEnd:(id)arg1 returnCode:(long long)arg2 vCardData:(id)arg3;
+ (void)exportContacts:(id)arg1 sheetParentWindow:(id)arg2 suggestedFilename:(id)arg3;
+ (id)vCardController;
+ (id)os_log;
@property BOOL ignoresGuardianRestrictions; // @synthesize ignoresGuardianRestrictions=_ignoresGuardianRestrictions;
@property BOOL showImportConfirmation; // @synthesize showImportConfirmation=_showImportConfirmation;
- (void)cleanUp;
- (void)importVCardFiles:(id)arg1 intoGroup:(id)arg2;
- (BOOL)importFile:(id)arg1;
- (BOOL)shouldShowImportConfirmation;
- (BOOL)containsMetaDataCacheCards:(id)arg1;
- (id)_title:(BOOL)arg1;
- (void)importVCards;
- (id)nextData;
- (id)allImportableFilesFromPaths:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)sourceAddressBookForDupeResolution;
- (void)dealloc;

@end

