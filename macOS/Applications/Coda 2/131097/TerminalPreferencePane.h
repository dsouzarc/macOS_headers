//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PCPreferencePane.h"

@class NSButton, NSColor, NSMatrix, NSMutableArray, NSTableView, PCFontPreviewField;

__attribute__((visibility("hidden")))
@interface TerminalPreferencePane : PCPreferencePane
{
    PCFontPreviewField *terminalFontField;
    BOOL settingTerminalFont;
    NSMatrix *terminalPromptOnCloseMatrix;
    NSTableView *terminalProcessIgnoreTableView;
    NSButton *terminalProcessIgnoreDeleteButton;
    NSMutableArray *terminalProcessIgnoreList;
    NSButton *terminalFontButton;
    NSColor *_backgroundColor;
    NSColor *_textColor;
}

@property(retain, nonatomic) NSColor *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) NSColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
- (void)tableViewSelectionDidChange:(id)arg1;
- (void)tableView:(id)arg1 setObjectValue:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (id)freezeColor:(id)arg1;
- (void)deleteTerminalIgnoreProcess:(id)arg1;
- (void)addTerminalIgnoreProcess:(id)arg1;
- (void)setTerminalPromptOnClose:(id)arg1;
- (void)selectTerminalFont:(id)arg1;
- (void)changeAttributes:(id)arg1;
- (void)changeFont:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)loadView;
- (void)viewDidAppear;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

