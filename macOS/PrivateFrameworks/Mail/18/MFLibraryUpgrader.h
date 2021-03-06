//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MCActivityTarget.h"
#import "MFActivityProgressUpdater.h"

@class ACAccountStore, EDPersistenceDatabaseConnection, MCActivityAggregate, MCActivityMonitor, NSArray, NSString;

@interface MFLibraryUpgrader : NSObject <MCActivityTarget, MFActivityProgressUpdater>
{
    EDPersistenceDatabaseConnection *_currentConnection;
    ACAccountStore *_accountStore;
    NSArray *_upgradeSteps;
    BOOL _readOnly;
    BOOL _shouldRecalculateConversations;
    BOOL _shouldUpdateSubjectPrefixes;
    BOOL _shouldResetSnippets;
    BOOL _shouldRecalculateMessageCounts;
    BOOL _shouldUpdateSpotlightAttributes;
    BOOL _shouldUpdateSpotlightAttributesWithMultipleRecipients;
    BOOL _shouldUpdateMailboxURLs;
    BOOL _shouldResetChangeIdentifierForGmailAccounts;
    BOOL _shouldNormalizeMailboxPaths;
    BOOL _shouldResetDynamicAccountConfiguration;
    BOOL _shouldRemoveMailboxesWithAbsoluteURLs;
    BOOL _shouldUpdateFavoritePersistentIDUnicodeComposition;
    BOOL _shouldRemoveLocalPathsFromRulesAndSmartMailboxes;
    BOOL _shouldUpdateUIDNext;
    BOOL _shouldRemoveJunkColors;
    BOOL _shouldReparseExchangeReferences;
    BOOL _shouldRecalculateAutomatedConversations;
    id <MFLibraryUpgraderDelegate> _delegate;
    MCActivityMonitor *_monitor;
    unsigned long long _majorVersion;
    unsigned long long _minorVersion;
    MCActivityAggregate *_activity;
    struct sqlite3 *_upgraderDB;
}

+ (id)log;
@property(nonatomic) struct sqlite3 *upgraderDB; // @synthesize upgraderDB=_upgraderDB;
@property(retain, nonatomic) MCActivityAggregate *activity; // @synthesize activity=_activity;
@property(nonatomic) unsigned long long minorVersion; // @synthesize minorVersion=_minorVersion;
@property(nonatomic) unsigned long long majorVersion; // @synthesize majorVersion=_majorVersion;
@property(nonatomic) BOOL shouldRecalculateAutomatedConversations; // @synthesize shouldRecalculateAutomatedConversations=_shouldRecalculateAutomatedConversations;
@property(nonatomic) BOOL shouldReparseExchangeReferences; // @synthesize shouldReparseExchangeReferences=_shouldReparseExchangeReferences;
@property(nonatomic) BOOL shouldRemoveJunkColors; // @synthesize shouldRemoveJunkColors=_shouldRemoveJunkColors;
@property(nonatomic) BOOL shouldUpdateUIDNext; // @synthesize shouldUpdateUIDNext=_shouldUpdateUIDNext;
@property(nonatomic) BOOL shouldRemoveLocalPathsFromRulesAndSmartMailboxes; // @synthesize shouldRemoveLocalPathsFromRulesAndSmartMailboxes=_shouldRemoveLocalPathsFromRulesAndSmartMailboxes;
@property(nonatomic) BOOL shouldUpdateFavoritePersistentIDUnicodeComposition; // @synthesize shouldUpdateFavoritePersistentIDUnicodeComposition=_shouldUpdateFavoritePersistentIDUnicodeComposition;
@property(nonatomic) BOOL shouldRemoveMailboxesWithAbsoluteURLs; // @synthesize shouldRemoveMailboxesWithAbsoluteURLs=_shouldRemoveMailboxesWithAbsoluteURLs;
@property(nonatomic) BOOL shouldResetDynamicAccountConfiguration; // @synthesize shouldResetDynamicAccountConfiguration=_shouldResetDynamicAccountConfiguration;
@property(nonatomic) BOOL shouldNormalizeMailboxPaths; // @synthesize shouldNormalizeMailboxPaths=_shouldNormalizeMailboxPaths;
@property(nonatomic) BOOL shouldResetChangeIdentifierForGmailAccounts; // @synthesize shouldResetChangeIdentifierForGmailAccounts=_shouldResetChangeIdentifierForGmailAccounts;
@property(nonatomic) BOOL shouldUpdateMailboxURLs; // @synthesize shouldUpdateMailboxURLs=_shouldUpdateMailboxURLs;
@property(nonatomic) BOOL shouldUpdateSpotlightAttributesWithMultipleRecipients; // @synthesize shouldUpdateSpotlightAttributesWithMultipleRecipients=_shouldUpdateSpotlightAttributesWithMultipleRecipients;
@property(nonatomic) BOOL shouldUpdateSpotlightAttributes; // @synthesize shouldUpdateSpotlightAttributes=_shouldUpdateSpotlightAttributes;
@property(nonatomic) BOOL shouldRecalculateMessageCounts; // @synthesize shouldRecalculateMessageCounts=_shouldRecalculateMessageCounts;
@property(nonatomic) BOOL shouldResetSnippets; // @synthesize shouldResetSnippets=_shouldResetSnippets;
@property(nonatomic) BOOL shouldUpdateSubjectPrefixes; // @synthesize shouldUpdateSubjectPrefixes=_shouldUpdateSubjectPrefixes;
@property(nonatomic) BOOL shouldRecalculateConversations; // @synthesize shouldRecalculateConversations=_shouldRecalculateConversations;
@property(retain, nonatomic) MCActivityMonitor *monitor; // @synthesize monitor=_monitor;
@property(nonatomic) BOOL readOnly; // @synthesize readOnly=_readOnly;
@property(nonatomic) __weak id <MFLibraryUpgraderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)upgradeMailDataIfNecessary;
- (long long)_getSQLTableCount:(const char *)arg1 connection:(id)arg2;
- (void)_stampCurrentMinorVersion:(unsigned long long)arg1;
- (void)_executeSQL:(id)arg1 updateMinorVersion:(unsigned long long)arg2;
- (unsigned long long)_lastWriteMinorVersion;
- (BOOL)_needsRun;
- (void)_bootstrapVersioningEngine;
- (void)_getVersionInfo;
@property(retain, nonatomic) EDPersistenceDatabaseConnection *currentConnection;
- (void)resetProgressItemsWithTotal:(unsigned long long)arg1 andStatusMessage:(id)arg2;
- (void)incrementProgressIndicatorWithThreshold:(unsigned long long)arg1;
- (void)incrementProgressIndicator;
- (void)setProgressItemTotal:(unsigned long long)arg1;
- (id)_systemAccountsWithAccountTypeIdentifiers:(id)arg1;
@property(readonly, nonatomic) ACAccountStore *accountStore;
- (id)_libraryIDsOfAutomatedMessages;
- (void)_reparseReferencesForRowIDsByMailboxURL:(id)arg1;
- (id)_reparseExchangeReferences;
- (void)_removeJunkColors;
- (void)_updateUIDNext;
- (void)_removeContainerLogs;
- (void)_resetConfigureDynamically;
- (void)_fakeLibraryUpgraderStep;
- (void)_normalizeMailboxPathComponentsInMboxCache;
- (void)_resetConversationsForExistingMessagesWithRowIDs:(id)arg1;
- (void)_resetSnippetColumn;
- (BOOL)_calculateInternationalSubjectPrefixes;
- (void)updateFavoritePersistentIDUnicodeComposition;
- (void)_updateMailboxURLUnicodeComposition;
- (id)_copySpotlightAttributesWithDateSent:(int)arg1 dateReceived:(int)arg2 dateLastViewed:(int)arg3 read:(int)arg4 libraryFlags:(long long)arg5 messageID:(const char *)arg6 conversationID:(long long)arg7 subject:(id)arg8 displayName:(id)arg9 senderName:(id)arg10 senderAddress:(id)arg11 recipientNames:(id)arg12 recipientAddresses:(id)arg13;
- (id)_urlV1V2StringForMailboxDirectory:(id)arg1 account:(id)arg2 levelFromAccountDirectory:(unsigned long long)arg3;
- (void)_getRecipientsForMessageWithLibraryID:(long long)arg1 recipientNames:(id)arg2 recipientAddresses:(id)arg3 connection:(id)arg4;
- (void)_setSpotlightAttributesForEMLXFilesInMailbox:(id)arg1 mailboxURLString:(id)arg2;
- (void)_sendSpotlightAttributesByPath:(id)arg1;
- (id)_accountsWithTypeIdentifiers:(id)arg1;
- (id)_mailboxFileSystemPathsByV1V2DatabaseURL;
- (void)_updateSpotlightAttributesWithMultipleRecipients;
- (void)_updateSpotlightAttributes;
- (void)_removeMailboxesWithAbsoluteURLs;
- (void)_resetChangeIdentifierForGmailAccounts;
- (id)_fixAbsoluteMailboxURL:(id)arg1 mailAccounts:(id)arg2;
- (id)_fixCriteriaWithAbsoluteMailboxURLs:(id)arg1 mailAccounts:(id)arg2;
- (id)_fixSmartMailboxWithAbsoluteMailboxURLs:(id)arg1 mailAccounts:(id)arg2;
- (id)_newSmartMailboxesRemovingLocalPathsFromSmartMailboxes:(id)arg1 accounts:(id)arg2;
- (id)_newRulesRemovingLocalPathsFromRules:(id)arg1 accounts:(id)arg2;
- (void)_removeLocalPathsFromRulesAndSmartMailboxes;
- (void)_upgradeFromSUYosemiteDomeToElCapitan;
- (void)_upgradeFromYosemiteToSUYosemiteDome:(unsigned long long)arg1;
- (void)_upgradeFromSUMavericksDuneToYosemite;
- (void)_upgradeFromSUMavericksCarveToSUMavericksDune;
- (void)_upgradeFromSUMavericksBoardToSUMavericksCarve;
- (void)_upgradeFromMavericksToSUMavericksBoard;
- (void)_fixShadowEMLXFilesForAccount:(id)arg1;
- (void)_fixShadowEMLXFiles;
- (id)_mailboxV1V2URLStringsForAccount:(id)arg1;
- (void)_upgradeFromSUMountainCalypsoToMavericks;
- (void)_upgradeFromMountainLionToSUMountainCalypso;
- (void)fixMailDownloadsMigrationKey;
- (void)_startMigratorServiceForAppleScriptFilesAndRules;
- (void)upgradeAppleScriptFilesAndRules;
- (void)_startMigratorServiceForMailDownloads;
- (void)upgradeMailDownloadsFiles;
- (void)_useWALJournalingIfPossible;
- (void)_createNewDatabaseObjects;
- (void)_upgradeSchema:(id)arg1;
- (void)_upgradeV1V2Schema;
- (void)_dropTriggers;
- (id)_upgradeStepsWithConnection:(id)arg1 initialLastWriteMinorVersion:(unsigned long long)arg2;
- (void)run;
- (BOOL)_libraryIsTooNew;
- (BOOL)_canLibraryBeUpgraded;
@property(readonly, nonatomic) long long libraryStatus;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSString *displayName;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

